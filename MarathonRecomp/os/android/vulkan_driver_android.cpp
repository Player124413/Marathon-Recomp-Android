// Custom Vulkan driver (Mesa Turnip) loading for Android.
//
// Adapted from SansNope/UnleashedRecomp-Android
// (UnleashedRecomp/os/android/vulkan_driver_android.cpp) and reduced to the
// user-import flow: LauncherActivity.java unpacks an AdrenoTools-style driver
// package zip (meta.json + libraryName, or a zip holding exactly one .so)
// into <internalFiles>/turnip/ and writes turnip/driver_name.txt. On the next
// launch this file picks the driver up and loads it through libadrenotools
// (thirdparty/libadrenotools), which creates an isolated linker namespace,
// hooks the platform Vulkan loader's driver lookup, and substitutes the
// proprietary vendor HAL with the imported .so.
//
// Crash recovery: Vulkan startup with a custom driver is the riskiest part of
// boot - if the driver is incompatible the GPU process dies between dlopen
// and the first presented frame, before any Java-side guard can react. We
// therefore persist a pending marker right before the custom load and delete
// it only after a usable swapchain exists (AndroidMarkVulkanStartupSuccessful).
// On the next launch a leftover marker means "the custom driver killed the
// previous boot": the selection is disabled (driver_name.txt ->
// driver_name.disabled.txt) and the system driver is used instead, so the app
// always recovers on its own. The launcher can re-enable the driver from its
// GPU Driver card.

#include "vulkan_driver_android.h"

#include <os/android/storage_android.h>
#include <os/logger.h>
#include <user/config.h>

#include <adrenotools/driver.h>

#include <SDL.h>
#include <SDL_system.h>

#include <cctype>
#include <cstdint>
#include <cerrno>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <dlfcn.h>
#include <filesystem>
#include <fcntl.h>
#include <jni.h>
#include <string>
#include <sys/stat.h>
#include <sys/system_properties.h>
#include <unistd.h>

static constexpr const char *DRIVER_NAME_FILE = "driver_name.txt";
static constexpr const char *DRIVER_DISABLED_FILE = "driver_name.disabled.txt";
static constexpr const char *VULKAN_CUSTOM_PENDING_FILE = "vulkan_custom_pending";
static constexpr const char *TU_DEBUG_FILE = "tu_debug.txt";

static void *g_loadedGetInstanceProcAddr;

static std::string GetTurnipDir()
{
    const std::filesystem::path &internalDir = os::android::GetInternalFilesDir();
    if (internalDir.empty())
        return {};

    return (internalDir / "turnip/").string();
}

// The driver file name is user-controlled (zip entry / driver_name.txt), so it
// must be a plain basename: no slashes, no "."/"..", and a .so suffix. This
// also guards the chmod in WriteWholeFile and the adrenotools namespace path
// join (which concatenates dir + name directly).
static bool IsSafeDriverFileName(const std::string &driverName)
{
    if (driverName.empty() || driverName.size() > 128)
        return false;

    if (driverName.size() <= 3 || driverName.compare(driverName.size() - 3, 3, ".so") != 0)
        return false;

    if (driverName == "." || driverName == ".." || driverName.front() == '.')
        return false;

    for (char c : driverName)
    {
        const unsigned char u = static_cast<unsigned char>(c);
        if (!(isalnum(u) || c == '_' || c == '-' || c == '.'))
            return false;
    }

    return true;
}

static bool ReadTextFile(const std::filesystem::path &path, std::string &contents)
{
    FILE *file = fopen(path.c_str(), "rb");
    if (file == nullptr)
        return false;

    char buffer[256]{};
    const size_t bytesRead = fread(buffer, 1, sizeof(buffer) - 1, file);
    const bool readError = ferror(file) != 0;
    fclose(file);

    if (readError || bytesRead == 0)
        return false;

    buffer[bytesRead] = '\0';
    contents = buffer;
    return true;
}

static std::string TrimWhiteSpace(std::string value)
{
    while (!value.empty() && isspace(static_cast<unsigned char>(value.back())))
        value.pop_back();

    size_t first = 0;
    while (first < value.size() && isspace(static_cast<unsigned char>(value[first])))
        ++first;

    return value.substr(first);
}

static bool SyncDirectory(const std::filesystem::path &directory)
{
    int directoryFd = open(directory.c_str(), O_RDONLY | O_CLOEXEC | O_DIRECTORY);
    if (directoryFd < 0)
        return false;

    const bool ok = fsync(directoryFd) == 0;
    close(directoryFd);
    return ok;
}

// The state is replaced, never edited in place. temp + rename guarantees that
// a process/OS kill yields either the complete old state or the complete new
// state, never a half-written marker that could make recovery non-deterministic.
static bool WriteMarkerFile(const std::filesystem::path &path, const std::string &contents)
{
    std::filesystem::path tempPath = path;
    tempPath += ".tmp";

    int file = open(tempPath.c_str(), O_WRONLY | O_CREAT | O_TRUNC | O_CLOEXEC, 0600);
    if (file < 0)
        return false;

    size_t written = 0;
    bool ok = true;
    while (written < contents.size())
    {
        const ssize_t result = write(file, contents.data() + written, contents.size() - written);
        if (result > 0)
        {
            written += size_t(result);
            continue;
        }

        if (result < 0 && errno == EINTR)
            continue;

        ok = false;
        break;
    }

    if (ok)
        ok = fsync(file) == 0;
    if (close(file) != 0)
        ok = false;

    if (!ok || rename(tempPath.c_str(), path.c_str()) != 0)
    {
        unlink(tempPath.c_str());
        return false;
    }

    return SyncDirectory(path.parent_path());
}

static bool RemoveFileDurable(const std::filesystem::path &path)
{
    if (unlink(path.c_str()) != 0 && errno != ENOENT)
        return false;

    // Also discard an interrupted pre-rename write. It is never considered
    // state by readers.
    std::filesystem::path tempPath = path;
    tempPath += ".tmp";
    unlink(tempPath.c_str());
    return SyncDirectory(path.parent_path());
}

// One-time orientation file inside the otherwise auto-generated turnip/
// directory, so curious users opening it in a file manager know what it is for
// and how the tu_debug.txt escape hatch works.
static void WriteTurnipReadme(const std::filesystem::path &turnipDir)
{
    const std::filesystem::path readmePath = turnipDir / "readme.txt";
    std::error_code ec;
    if (std::filesystem::exists(readmePath, ec))
        return;

    WriteMarkerFile(readmePath,
        "This folder holds a user-installed Mesa Turnip Vulkan driver.\n"
        "It is managed by the app's launcher (GPU Driver card): install an\n"
        "AdrenoTools-style driver zip there and this folder is populated on\n"
        "the next boot. driver_name.txt selects the .so to load; a\n"
        "driver_name.disabled.txt appears if the driver crashed on load and\n"
        "was automatically disabled so the game could boot with the system\n"
        "driver again.\n"
        "\n"
        "Compatibility knob: create a file named tu_debug.txt here whose\n"
        "first line is a TU_DEBUG value, e.g. \"sysmem\", if the custom driver\n"
        "shows glitches or instability (useful on some Adreno 7xx devices).\n"
        "The launcher's Compatibility Mode toggle writes that file for you.\n"
        "Delete it to return to the driver default.\n");
}

// Crash recovery: the marker is written immediately before a custom driver is
// dlopen'ed and deleted only once Vulkan reaches a usable swapchain. A marker
// that survived to the next boot therefore means the custom driver crashed
// Vulkan startup. Disable the selection (so the user can re-enable it from the
// launcher) and let this launch proceed on the system driver.
static bool ConsumeFailedCustomStartup(const std::filesystem::path &turnipDir)
{
    const std::filesystem::path pendingPath = turnipDir / VULKAN_CUSTOM_PENDING_FILE;
    std::error_code ec;
    if (!std::filesystem::exists(pendingPath, ec))
        return false;

    std::string failedDriver;
    ReadTextFile(pendingPath, failedDriver);
    failedDriver = TrimWhiteSpace(failedDriver);

    RemoveFileDurable(pendingPath);

    const std::filesystem::path selectedFile = turnipDir / DRIVER_NAME_FILE;
    if (std::filesystem::exists(selectedFile, ec))
    {
        std::filesystem::path disabledFile = turnipDir / DRIVER_DISABLED_FILE;
        std::filesystem::remove(disabledFile, ec);
        if (rename(selectedFile.c_str(), disabledFile.c_str()) != 0)
        {
            // Rename failing still must not leave the custom driver selected.
            std::filesystem::remove(selectedFile, ec);
        }
        SyncDirectory(turnipDir);
    }

    LOGF_WARNING("Vulkan boot recovery: the previous custom-driver startup (driver \"{}\") did not "
        "reach a usable swapchain; the custom driver has been disabled and the system driver will be "
        "used instead. Re-enable it from the launcher's GPU Driver card.",
        failedDriver.empty() ? std::string("<unknown>") : failedDriver);
    return true;
}

enum class EAndroidGpuFamily
{
    Adreno,
    Xclipse,
    Other,
    Unknown,
};

// Identifies the GPU family from the Vulkan/EGL HAL system properties (the HAL
// library is named vulkan.<ro.hardware.vulkan>.so) without loading any driver.
// Turnip only works on Adreno (A6xx+); importing one on Mali/PowerVR can't
// succeed, so warn early in the log instead of dying somewhere inside Mesa.
static EAndroidGpuFamily DetectGpuFamily(std::string &description)
{
    char vulkanProp[PROP_VALUE_MAX]{};
    char eglProp[PROP_VALUE_MAX]{};
    __system_property_get("ro.hardware.vulkan", vulkanProp);
    __system_property_get("ro.hardware.egl", eglProp);

    description = {};
    if (vulkanProp[0] != '\0')
        description += vulkanProp;

    if (eglProp[0] != '\0' && strcmp(vulkanProp, eglProp) != 0)
    {
        if (!description.empty())
            description += "/";

        description += eglProp;
    }

    std::string lowered = description;
    for (char &c : lowered)
        c = char(tolower(uint8_t(c)));

    if (lowered.empty())
        return EAndroidGpuFamily::Unknown;

    if (lowered.find("adreno") != std::string::npos)
        return EAndroidGpuFamily::Adreno;

    // Samsung Xclipse (RDNA-based) ships its Vulkan HAL as vulkan.samsung.so.
    if (lowered.find("samsung") != std::string::npos || lowered.find("sgpu") != std::string::npos ||
        lowered.find("xclipse") != std::string::npos)
    {
        return EAndroidGpuFamily::Xclipse;
    }

    return EAndroidGpuFamily::Other;
}

// Optional TU_DEBUG override (files first line of turnip/tu_debug.txt), e.g.
// "sysmem" - the documented workaround for Turnip's GMEM path corrupting on
// some Adreno 7xx parts. Only set when the file has content; Mesa's default
// is preserved otherwise so upstream driver fixes flow through automatically.
static void ApplyTuDebugOverride(const std::filesystem::path &turnipDir)
{
    std::string tuDebug;
    if (!ReadTextFile(turnipDir / TU_DEBUG_FILE, tuDebug))
        return;

    // Only the first line participates.
    const size_t newline = tuDebug.find_first_of("\r\n");
    if (newline != std::string::npos)
        tuDebug.resize(newline);

    tuDebug = TrimWhiteSpace(tuDebug);
    if (tuDebug.empty())
        return;

    setenv("TU_DEBUG", tuDebug.c_str(), 1);
    LOGF("Custom Vulkan driver: TU_DEBUG=\"{}\" (from {}).\n"
        "This is a compatibility override - delete {} to return to the driver default.",
        tuDebug, TU_DEBUG_FILE, TU_DEBUG_FILE);
}

static std::string GetNativeLibraryDir()
{
    JNIEnv *env = static_cast<JNIEnv *>(SDL_AndroidGetJNIEnv());
    jobject activity = static_cast<jobject>(SDL_AndroidGetActivity());
    if (env == nullptr || activity == nullptr)
        return {};

    jclass activityClass = env->GetObjectClass(activity);
    jmethodID getApplicationInfoMethod = env->GetMethodID(activityClass, "getApplicationInfo", "()Landroid/content/pm/ApplicationInfo;");
    jobject applicationInfo = env->CallObjectMethod(activity, getApplicationInfoMethod);
    jclass applicationInfoClass = env->GetObjectClass(applicationInfo);
    jfieldID nativeLibraryDirField = env->GetFieldID(applicationInfoClass, "nativeLibraryDir", "Ljava/lang/String;");
    jstring nativeLibraryDirString = static_cast<jstring>(env->GetObjectField(applicationInfo, nativeLibraryDirField));

    const char *chars = env->GetStringUTFChars(nativeLibraryDirString, nullptr);
    std::string result(chars);
    env->ReleaseStringUTFChars(nativeLibraryDirString, chars);

    env->DeleteLocalRef(nativeLibraryDirString);
    env->DeleteLocalRef(applicationInfoClass);
    env->DeleteLocalRef(applicationInfo);
    env->DeleteLocalRef(activityClass);

    if (!result.empty() && result.back() != '/')
        result.push_back('/');

    return result;
}

void *AndroidGetCustomVulkanLoader()
{
    // The renderer initialises Vulkan exactly once per process; cache so a
    // hypothetical retry path can never create a second isolated libvulkan
    // instance (two live VkInstances from different loaders is undefined).
    if (g_loadedGetInstanceProcAddr != nullptr)
        return g_loadedGetInstanceProcAddr;

    const std::string turnipDir = GetTurnipDir();
    if (turnipDir.empty())
    {
        LOG_ERROR("Internal storage path unavailable, cannot set up the custom Vulkan driver.");
        return nullptr;
    }

    std::error_code ec;
    std::filesystem::create_directories(turnipDir, ec);
    WriteTurnipReadme(turnipDir);

    // A leftover pending marker + an absent/empty selection is just dead state
    // (the user already removed the driver after the crash); drop it quietly.
    std::string driverName;
    ReadTextFile(turnipDir / DRIVER_NAME_FILE, driverName);
    driverName = TrimWhiteSpace(driverName);

    if (driverName.empty())
    {
        if (std::filesystem::exists(turnipDir / VULKAN_CUSTOM_PENDING_FILE, ec))
        {
            LOG("Custom Vulkan driver selection removed after a failed startup; clearing the recovery marker.");
            RemoveFileDurable(turnipDir / VULKAN_CUSTOM_PENDING_FILE);
        }

        LOG("Android Vulkan driver mode: System (no custom driver selected).");
        return nullptr;
    }

    if (ConsumeFailedCustomStartup(turnipDir))
        return nullptr;

    ApplyTuDebugOverride(turnipDir);

    if (!IsSafeDriverFileName(driverName))
    {
        LOGF_ERROR("Invalid Vulkan driver selection \"{}\" in {}; falling back to the system driver.",
            driverName, DRIVER_NAME_FILE);
        return nullptr;
    }

    std::string gpuDescription;
    const EAndroidGpuFamily gpuFamily = DetectGpuFamily(gpuDescription);
    if (gpuFamily != EAndroidGpuFamily::Adreno && gpuFamily != EAndroidGpuFamily::Unknown)
    {
        // An explicit user import stays honored even on non-Adreno devices
        // (e.g. a PanVK build on Mali) - log loudly so the log explains any
        // resulting failure.
        LOGF_WARNING("Custom Vulkan driver \"{}\" is installed on a non-Adreno GPU (\"{}\"); Turnip "
            "is Adreno-only, so the next step may crash or fail. The boot-recovery marker reverts "
            "to the system driver automatically if it does.",
            driverName, gpuDescription);
    }

    const std::string driverPath = turnipDir + driverName;
    struct stat buf {};
    if (stat(driverPath.c_str(), &buf) != 0)
    {
        LOGF_ERROR("Selected custom Vulkan driver is missing: {}. The selection is kept; either "
            "re-install the driver from the launcher or switch back to the system driver.",
            driverPath);
        return nullptr;
    }

    std::string nativeLibraryDir = GetNativeLibraryDir();
    if (nativeLibraryDir.empty())
    {
        LOG_ERROR("Failed to query nativeLibraryDir via JNI, cannot load the custom Vulkan driver.");
        return nullptr;
    }

    // Arm the crash-recovery marker now (durable write); deleted only by
    // AndroidMarkVulkanStartupSuccessful after device + usable swapchain.
    if (!WriteMarkerFile(turnipDir / VULKAN_CUSTOM_PENDING_FILE, driverName + "\n"))
    {
        LOG_ERROR("Unable to arm the Vulkan boot-recovery marker; staying on the system driver.");
        return nullptr;
    }

    void *libVulkan = adrenotools_open_libvulkan(
        RTLD_NOW | RTLD_LOCAL,
        ADRENOTOOLS_DRIVER_CUSTOM,
        nullptr, // tmpLibDir: unused on API >= 29 (memfd is used instead)
        nativeLibraryDir.c_str(),
        turnipDir.c_str(),
        driverName.c_str(),
        nullptr,
        nullptr);

    if (libVulkan == nullptr)
    {
        // Clean failure (no crash), so the marker must not make the next boot
        // disable the selection - remove it instead of consuming it as a crash.
        RemoveFileDurable(turnipDir / VULKAN_CUSTOM_PENDING_FILE);
        LOG_ERROR("adrenotools_open_libvulkan failed, falling back to the system Vulkan driver.");
        return nullptr;
    }

    void *getInstanceProcAddr = dlsym(libVulkan, "vkGetInstanceProcAddr");
    if (getInstanceProcAddr == nullptr)
    {
        RemoveFileDurable(turnipDir / VULKAN_CUSTOM_PENDING_FILE);
        LOG_ERROR("Custom Vulkan driver loaded but vkGetInstanceProcAddr symbol is missing.");
        return nullptr;
    }

    LOGF("Successfully loaded custom Vulkan driver ({}) via libadrenotools.", driverName);
    g_loadedGetInstanceProcAddr = getInstanceProcAddr;
    return getInstanceProcAddr;
}

void AndroidMarkVulkanStartupSuccessful()
{
    static bool s_done;
    if (s_done)
        return;

    s_done = true;

    // 1. The selected custom driver survived device + swapchain creation: the
    // arm-guard put up in AndroidGetCustomVulkanLoader() is discharged.
    const std::string turnipDir = GetTurnipDir();
    if (!turnipDir.empty())
    {
        std::error_code ec;
        if (std::filesystem::exists(turnipDir + VULKAN_CUSTOM_PENDING_FILE, ec))
        {
            if (!RemoveFileDurable(turnipDir + VULKAN_CUSTOM_PENDING_FILE))
                LOG_ERROR("Vulkan boot recovery: device + swapchain are usable, but the startup marker could not be cleared.");
            else
                LOG("Vulkan boot recovery: device + usable swapchain created successfully; startup marker cleared.");
        }
    }

    // 2. The generic GPU crash sentinel (written in main() at process start)
    // is discharged as well - the driver made it past the risky phase.
    std::error_code ec;
    std::filesystem::remove(Config::GetConfigPath().parent_path() / "_crash_sentinel", ec);
}
