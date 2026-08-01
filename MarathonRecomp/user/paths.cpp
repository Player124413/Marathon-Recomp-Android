#include "paths.h"
#include <os/process.h>

#ifdef __ANDROID__
#include <os/android/storage_android.h>
#endif

std::filesystem::path g_executableRoot = os::process::GetExecutableRoot();
std::filesystem::path g_userPath = BuildUserPath();

bool CheckPortable()
{
    return std::filesystem::exists(g_executableRoot / "portable.txt");
}

std::filesystem::path BuildUserPath()
{
    if (CheckPortable())
        return g_executableRoot;

    std::filesystem::path userPath;

#if defined(__ANDROID__)
    // On Android the real data root (app-specific external storage) is only known after SDL init,
    // via os::android::GetDataRoot(). During static init SDL is not ready, so return an empty
    // placeholder here; GetUserPath() will lazily resolve to GetDataRoot() once it's available.
    // This prevents static_assert and HOME/.config lookup from running on Android.
    userPath = {};
#elif defined(_WIN32)
    PWSTR knownPath = NULL;
    if (SHGetKnownFolderPath(FOLDERID_RoamingAppData, 0, NULL, &knownPath) == S_OK)
        userPath = std::filesystem::path{ knownPath } / USER_DIRECTORY;

    CoTaskMemFree(knownPath);
#elif defined(__linux__) || defined(__APPLE__)
    const char* homeDir = getenv("HOME");
#if defined(__linux__) && !defined(__ANDROID__)
    if (homeDir == nullptr)
    {
        homeDir = getpwuid(getuid())->pw_dir;
    }
#endif

    if (homeDir != nullptr)
    {
        // Prefer to store in the .config directory if it exists. Use the home directory otherwise.
        std::filesystem::path homePath = homeDir;
#if defined(__linux__)
        std::filesystem::path configPath = homePath / ".config";
#else
        std::filesystem::path configPath = homePath / "Library" / "Application Support";
#endif
        if (std::filesystem::exists(configPath))
            userPath = configPath / USER_DIRECTORY;
        else
            userPath = homePath / ("." USER_DIRECTORY);
    }
#else
    static_assert(false, "GetUserPath() not implemented for this platform.");
#endif

    return userPath;
}

const std::filesystem::path& GetUserPath()
{
#ifdef __ANDROID__
    // Lazily resolve to the real Android data root once SDL is initialized.
    // If GetDataRoot is still empty (called extremely early) fall back to the
    // statically-initialized placeholder.
    const auto& dataRoot = os::android::GetDataRoot();
    if (!dataRoot.empty())
    {
        // Keep g_userPath in sync after first successful resolution to avoid
        // repeated checks, but only if it was previously empty.
        if (g_userPath.empty())
            g_userPath = dataRoot;
        return dataRoot;
    }
#endif
    return g_userPath;
}
