#include <cstdio>
#include <stdafx.h>
#ifdef __x86_64__
#include <cpuid.h>
#endif
#include <cpu/guest_thread.h>
#include <gpu/video.h>
#include <kernel/function.h>
#include <kernel/memory.h>
#include <kernel/heap.h>
#include <kernel/xam.h>
#include <kernel/io/file_system.h>
#include <file.h>
#include <vector>
#include <image.h>
#include <apu/audio.h>
#include <hid/hid.h>
#include <user/config.h>
#include <user/paths.h>
#include <user/registry.h>
#include <kernel/xdbf.h>
#include <install/installer.h>
#include <install/update_checker.h>
#include <os/crash_reporter.h>
#include <os/logger.h>
#include <os/process.h>
#include <os/registry.h>
#include <version.h>
#ifdef __ANDROID__
#include <os/android/storage_android.h>
#include <os/android/watchdog_android.h>
#endif
#include <ui/game_window.h>
#include <ui/installer_wizard.h>
#include <mod/mod_loader.h>
#include <preload_executable.h>
#include <iostream>
#include <app.h>

#ifdef _WIN32
#include <timeapi.h>
#endif

#if defined(_WIN32) && defined(MARATHON_RECOMP_D3D12)
static std::array<std::string_view, 3> g_D3D12RequiredModules =
{
    "D3D12/D3D12Core.dll",
    "dxcompiler.dll",
    "dxil.dll"
};
#endif

const size_t XMAIOBegin = 0x7FEA0000;
const size_t XMAIOEnd = XMAIOBegin + 0x0000FFFF;

Memory g_memory;
Heap g_userHeap;
XDBFWrapper g_xdbfWrapper;
std::unordered_map<uint16_t, GuestTexture*> g_xdbfTextureCache;

void HostStartup()
{
#ifdef _WIN32
    CoInitializeEx(nullptr, COINIT_MULTITHREADED);
#endif

    hid::Init();
}

// Name inspired from nt's entry point
void KiSystemStartup()
{
    if (g_memory.base == nullptr)
    {
        SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_ERROR, GameWindow::GetTitle(), Localise("System_MemoryAllocationFailed").c_str(), GameWindow::s_pWindow);
        std::_Exit(1);
    }

    g_userHeap.Init();

    const auto gameContent = XamMakeContent(XCONTENTTYPE_RESERVED, "Game");
    const std::string gamePath = (const char*)(GetGamePath() / "game").u8string().c_str();

    BuildPathCache(gamePath);

    XamRegisterContent(gameContent, gamePath);

    const auto saveFilePath = GetSaveFilePath(true);
    bool saveFileExists = std::filesystem::exists(saveFilePath);

    if (!saveFileExists)
    {
        // Copy base save data to modded save as fallback.
        std::error_code ec;
        std::filesystem::create_directories(saveFilePath.parent_path(), ec);

        if (!ec)
        {
            std::filesystem::copy_file(GetSaveFilePath(false), saveFilePath, ec);
            saveFileExists = !ec;
        }
    }

    if (saveFileExists)
    {
        std::u8string savePathU8 = saveFilePath.parent_path().u8string();
        XamRegisterContent(XamMakeContent(XCONTENTTYPE_SAVEDATA, "SonicNextSaveData.bin"), (const char*)(savePathU8.c_str()));
    }

    // Mount game
    XamContentCreateEx(0, "game", &gameContent, OPEN_EXISTING, nullptr, nullptr, 0, 0, nullptr);

    // OS mounts game data to D:
    XamContentCreateEx(0, "D", &gameContent, OPEN_EXISTING, nullptr, nullptr, 0, 0, nullptr);

    std::error_code ec;
    for (auto& file : std::filesystem::directory_iterator(GetGamePath() / "dlc", ec))
    {
        if (file.is_directory())
        {
            std::u8string fileNameU8 = file.path().filename().u8string();
            std::u8string filePathU8 = file.path().u8string();
            XamRegisterContent(XamMakeContent(XCONTENTTYPE_DLC, (const char*)(fileNameU8.c_str())), (const char*)(filePathU8.c_str()));
        }
    }

    XAudioInitializeSystem();
}

uint32_t LdrLoadModule(const std::filesystem::path &path)
{
    const auto loadResult = LoadFile(path);
    if (loadResult.empty())
    {
        char text[512];
        snprintf(text, sizeof(text),
            "Failed to load the game executable:\n%s\n\n"
            "Make sure your game files are complete and that default.xex "
            "is a valid Xbox 360 XEX2 executable.",
            path.string().c_str());
        SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_ERROR, GameWindow::GetTitle(), text, GameWindow::s_pWindow);
        std::_Exit(1);
    }

    const auto image = Image::ParseImage(loadResult.data(), loadResult.size());

    if (image.data == nullptr || image.entry_point == 0)
    {
        char text[512];
        snprintf(text, sizeof(text),
            "Failed to parse the game executable:\n%s\n\n"
            "The file does not appear to be a valid XEX2 or ELF image. "
            "Make sure you have copied a proper Xbox 360 game dump, not an ISO "
            "or other container format.",
            path.string().c_str());
        SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_ERROR, GameWindow::GetTitle(), text, GameWindow::s_pWindow);
        std::_Exit(1);
    }

    memcpy(g_memory.Translate(image.base), image.data.get(), image.size);
    g_xdbfWrapper = XDBFWrapper(static_cast<uint8_t*>(g_memory.Translate(image.resource_offset)), image.resource_size);

    return image.entry_point;
}

#ifdef __x86_64__
__attribute__((constructor(101), target("no-avx,no-avx2"), noinline))
void init()
{
    uint32_t eax, ebx, ecx, edx;

    // Execute CPUID for processor info and feature bits.
    __get_cpuid(1, &eax, &ebx, &ecx, &edx);

    // Check for AVX support.
    if ((ecx & (1 << 28)) == 0)
    {
        printf("[*] CPU does not support the AVX instruction set.\n");

#ifdef _WIN32
        MessageBoxA(nullptr, "Your CPU does not meet the minimum system requirements.", "Marathon Recompiled", MB_ICONERROR);
#endif

        std::_Exit(1);
    }
}
#endif

int main(int argc, char *argv[])
{
#ifdef __ANDROID__
    // As early as possible, before any other subsystem: installs the signal
    // handlers that write a crash report (signal, stack trace, recent log
    // lines) into _game_log.txt. Without this, a catchable crash (SIGSEGV,
    // an assert's SIGABRT, etc.) leaves no trace at all - the log simply
    // stops, indistinguishable from an uncatchable OOM kill.
    os::crash_reporter::Init();
#endif
#ifdef _WIN32
    timeBeginPeriod(1);
#endif
#ifdef __ANDROID__
    // LauncherActivity.java is the app's actual entry point and never starts
    // SDLActivity (which is what ends up calling into this SDL_main) until it has
    // verified GetDataRoot()/game/default.xex exists, so this should be unreachable
    // in normal use. It's kept as a defense-in-depth check - e.g. against a stale
    // "resume" intent to SDLActivity after the user deleted the game files - since
    // InstallerWizard below assumes a desktop file-picker/ImGui flow that has not
    // been adapted for a touchscreen and would not be a usable fallback here.
    if (!os::android::HasGameFiles())
    {
        os::logger::Init();
        SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_ERROR, "Marathon Recompiled",
            "Game files were not found. Please restart the app and use the "
            "launcher screen to select your dumped game files.", nullptr);
        std::_Exit(1);
    }
#endif

    os::process::CheckConsole();

    if (!os::registry::Init())
        LOGN_WARNING("OS does not support registry.");

    os::logger::Init();

    PreloadContext preloadContext;
    preloadContext.PreloadExecutable();

    bool forceInstaller = false;
    bool forceDLCInstaller = false;
    bool useDefaultWorkingDirectory = false;
    bool forceInstallationCheck = false;
    bool graphicsApiRetry = false;
    const char *sdlVideoDriver = nullptr;

    for (uint32_t i = 1; i < argc; i++)
    {
        forceInstaller = forceInstaller || (strcmp(argv[i], "--install") == 0);
        forceDLCInstaller = forceDLCInstaller || (strcmp(argv[i], "--install-dlc") == 0);
        useDefaultWorkingDirectory = useDefaultWorkingDirectory || (strcmp(argv[i], "--use-cwd") == 0);
        forceInstallationCheck = forceInstallationCheck || (strcmp(argv[i], "--install-check") == 0);
        graphicsApiRetry = graphicsApiRetry || (strcmp(argv[i], "--graphics-api-retry") == 0);
        App::s_isSkipLogos = App::s_isSkipLogos || (strcmp(argv[i], "--skip-logos") == 0);

        if (strcmp(argv[i], "--sdl-video-driver") == 0)
        {
            if ((i + 1) < argc)
                sdlVideoDriver = argv[++i];
            else
                LOGN_WARNING("No argument was specified for --sdl-video-driver. Option will be ignored.");
        }
    }

    if (!useDefaultWorkingDirectory)
    {
        // Set the current working directory to the executable's path.
        std::error_code ec;
        std::filesystem::current_path(os::process::GetExecutablePath().parent_path(), ec);
    }

    Config::Load();

#ifdef __ANDROID__
    // Open the persistent log file now that the config path (= data root) is
    // known.  Every subsequent log call is written here in addition to logcat,
    // so the file survives a GPU driver crash and the launcher can display it.
    {
        const auto logPath = (Config::GetConfigPath().parent_path() / "_game_log.txt").string();
        os::logger::SetLogFilePath(logPath);
    }
    // Let the crash reporter write into the same data directory (_game_log.txt
    // crash section + _crash_sentinel reason).  This was previously never called
    // anywhere, so catchable crashes (SIGSEGV/SIGABRT/...) produced no report —
    // the log simply stopped, which made real Russian-Adreno crash reports
    // ("game dies right after archive loading") undiagnosable.
    os::crash_reporter::SetDataPath(Config::GetConfigPath().parent_path().string());
    // Memory + hang telemetry. The crash reporter only covers *catchable*
    // deaths; the two ways this port has actually died on user devices - an
    // Android low-memory SIGKILL and a worker-thread deadlock - both leave the
    // log simply ending mid-boot with no report. The watchdog samples RSS and
    // system memory, and dumps every thread's wait state if progress stops, so
    // those two cases are finally distinguishable from _game_log.txt alone.
    os::android::watchdog::Init(Config::GetConfigPath().parent_path().string());
    LOGN("=== Marathon Recompiled starting ===");
    LOGFN("Android native build fingerprint: {}", g_versionString);
    LOGFN("Config path: {}", Config::GetConfigPath().string());
#endif

    // Use config-specified SDL video driver when no command-line override was given.
    if (sdlVideoDriver == nullptr && Config::SDLVideoDriver != ESDLVideoDriver::Auto)
    {
        switch (Config::SDLVideoDriver)
        {
            case ESDLVideoDriver::System:
#ifdef __ANDROID__
                sdlVideoDriver = "android";
#elif defined(__linux__)
                sdlVideoDriver = "x11";
#endif
                break;
            default:
                break;
        }
    }

#ifdef __ANDROID__
    // Touch a sentinel file before any rendering starts.  If the process is
    // killed by a GPU driver crash the file survives; LauncherActivity checks
    // for it on resume and shows a helpful error dialog instead of silently
    // returning to the launcher with a black screen.
    {
        std::error_code _ec;
        std::ofstream(Config::GetConfigPath().parent_path() / "_crash_sentinel").flush();

        // Separate, longer-lived marker. _crash_sentinel is deliberately
        // cleared the moment Vulkan has a working swapchain
        // (AndroidMarkVulkanStartupSuccessful), which means a death *later* in
        // the boot - during archive loading, for example - left no marker at
        // all, so the launcher showed nothing and the user saw the game
        // "just close" with no explanation. This one is removed only on a
        // clean exit, so any abnormal termination is still reported.
        std::ofstream(Config::GetConfigPath().parent_path() / "_session_active").flush();
    }
    LOGFN("SDL video driver config: {}",
        Config::SDLVideoDriver == ESDLVideoDriver::Auto   ? "Auto" :
        Config::SDLVideoDriver == ESDLVideoDriver::System ? "System" : "Unknown");
    LOGFN("Graphics API config: {}",
        Config::GraphicsAPI == EGraphicsAPI::Auto   ? "Auto" :
        Config::GraphicsAPI == EGraphicsAPI::Vulkan ? "Vulkan" : "Unknown");
#endif

    if (forceInstallationCheck)
    {
        // Create the console to show progress to the user, otherwise it will seem as if the game didn't boot at all.
        os::process::ShowConsole();

        Journal journal;
        double lastProgressMiB = 0.0;
        double lastTotalMib = 0.0;
        Installer::checkInstallIntegrity(GAME_INSTALL_DIRECTORY, journal, [&]()
        {
            constexpr double MiBDivisor = 1024.0 * 1024.0;
            constexpr double MiBProgressThreshold = 128.0;
            double progressMiB = double(journal.progressCounter) / MiBDivisor;
            double totalMiB = double(journal.progressTotal) / MiBDivisor;
            if (journal.progressCounter > 0)
            {
                if ((progressMiB - lastProgressMiB) > MiBProgressThreshold)
                {
                    fprintf(stdout, "Checking files: %0.2f MiB / %0.2f MiB\n", progressMiB, totalMiB);
                    lastProgressMiB = progressMiB;
                }
            }
            else
            {
                if ((totalMiB - lastTotalMib) > MiBProgressThreshold)
                {
                    fprintf(stdout, "Scanning files: %0.2f MiB\n", totalMiB);
                    lastTotalMib = totalMiB;
                }
            }

            return true;
        });

        char resultText[512];
        uint32_t messageBoxStyle;
        if (journal.lastResult == Journal::Result::Success)
        {
            snprintf(resultText, sizeof(resultText), "%s", Localise("IntegrityCheck_Success").c_str());
            fprintf(stdout, "%s\n", resultText);
            messageBoxStyle = SDL_MESSAGEBOX_INFORMATION;
        }
        else
        {
            snprintf(resultText, sizeof(resultText), Localise("IntegrityCheck_Failed").c_str(), journal.lastErrorMessage.c_str());
            fprintf(stderr, "%s\n", resultText);
            messageBoxStyle = SDL_MESSAGEBOX_ERROR;
        }

        SDL_ShowSimpleMessageBox(messageBoxStyle, GameWindow::GetTitle(), resultText, GameWindow::s_pWindow);
        std::_Exit(int(journal.lastResult));
    }

#if defined(_WIN32) && defined(MARATHON_RECOMP_D3D12)
    for (auto& dll : g_D3D12RequiredModules)
    {
        if (!std::filesystem::exists(g_executableRoot / dll))
        {
            char text[512];
            snprintf(text, sizeof(text), Localise("System_Win32_MissingDLLs").c_str(), dll.data());
            SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_ERROR, GameWindow::GetTitle(), text, GameWindow::s_pWindow);
            std::_Exit(1);
        }
    }
#endif

    // Check the time since the last time an update was checked. Store the new time if the difference is more than six hours.
    constexpr double TimeBetweenUpdateChecksInSeconds = 6 * 60 * 60;
    time_t timeNow = std::time(nullptr);
    double timeDifferenceSeconds = difftime(timeNow, Config::LastChecked);
    if (timeDifferenceSeconds > TimeBetweenUpdateChecksInSeconds)
    {
        UpdateChecker::initialize();
        UpdateChecker::start();
        Config::LastChecked = timeNow;
        Config::Save();
    }

    if (Config::ShowConsole)
        os::process::ShowConsole();
    LOGN_WARNING("Host Startup");
    HostStartup();

    std::filesystem::path modulePath;
    bool isGameInstalled = Installer::checkGameInstall(GetGamePath(), modulePath);
    bool runInstallerWizard = forceInstaller || forceDLCInstaller || !isGameInstalled;
    if (runInstallerWizard)
    {
        if (!Video::CreateHostDevice(sdlVideoDriver, graphicsApiRetry))
        {
            SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_ERROR, GameWindow::GetTitle(), Localise("Video_BackendError").c_str(), GameWindow::s_pWindow);
            std::_Exit(1);
        }

        if (!InstallerWizard::Run(GetGamePath(), isGameInstalled && forceDLCInstaller))
            std::_Exit(0);
    }

    // ModLoader::Init();

    KiSystemStartup();

    uint32_t entry = LdrLoadModule(modulePath);

    if (!runInstallerWizard)
    {
        if (!Video::CreateHostDevice(sdlVideoDriver, graphicsApiRetry))
        {
            SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_ERROR, GameWindow::GetTitle(), Localise("Video_BackendError").c_str(), GameWindow::s_pWindow);
            std::_Exit(1);
        }
    }
    LOGN_WARNING("Start Guest Thread");
    LOGN_WARNING(modulePath.string());
    // Video::StartPipelinePrecompilation();

#ifdef __ANDROID__
    os::android::watchdog::SetStage("guest thread running (game boot / archive loading)");
#endif

    GuestThread::Start({ entry, 0, 0 });


#ifdef __ANDROID__
    // Clean exit: remove the sentinels so the launcher knows we didn't crash.
    {
        std::error_code _ec;
        std::filesystem::remove(Config::GetConfigPath().parent_path() / "_crash_sentinel", _ec);
        std::filesystem::remove(Config::GetConfigPath().parent_path() / "_session_active", _ec);
    }
#endif

    return 0;
}

#ifdef __ANDROID__
// SDL_MAIN_HANDLED (set for all platforms in CMakeLists.txt) suppresses SDL's
// usual #define main SDL_main remap, so on Android - where there is no process
// entry point and SDL2main's JNI glue instead calls a function literally named
// SDL_main from a native thread - that symbol has to be provided explicitly.
extern "C" int SDL_main(int argc, char *argv[])
{
    return main(argc, argv);
}
#endif

GUEST_FUNCTION_STUB(__imp__vsprintf);
GUEST_FUNCTION_STUB(__imp___vsnprintf);
GUEST_FUNCTION_STUB(__imp__sprintf);
GUEST_FUNCTION_STUB(__imp___snprintf);
GUEST_FUNCTION_STUB(__imp___snwprintf);
GUEST_FUNCTION_STUB(__imp__vswprintf);
GUEST_FUNCTION_STUB(__imp___vscwprintf);
GUEST_FUNCTION_STUB(__imp__swprintf);
