#pragma once

#include <mod/mod_loader.h>

#ifdef __ANDROID__
#include <os/android/storage_android.h>
#endif

#define USER_DIRECTORY "MarathonRecomp"

#ifndef GAME_INSTALL_DIRECTORY
#define GAME_INSTALL_DIRECTORY "."
#endif

extern std::filesystem::path g_executableRoot;
inline std::unordered_map<std::string, std::filesystem::path> g_pathCache;

bool CheckPortable();
std::filesystem::path BuildUserPath();
const std::filesystem::path& GetUserPath();

inline std::filesystem::path GetGamePath()
{
#if defined(__APPLE__)
    // On macOS, there is the expectation that the app may be installed to
    // /Applications/, and the bundle should not be modified. Thus we need
    // to install game files to the user directory instead of next to the app.
    return GetUserPath();
#elif defined(__ANDROID__)
    // Resolved at runtime: app-specific external storage, which LauncherActivity.java
    // populates via the Storage Access Framework before SDLActivity is ever launched.
    return os::android::GetDataRoot();
#else
    return GAME_INSTALL_DIRECTORY;
#endif
}

inline std::filesystem::path GetSavePath(bool checkForMods)
{
    if (checkForMods && !ModLoader::s_saveFilePath.empty())
        return ModLoader::s_saveFilePath.parent_path();
#ifdef __ANDROID__
    // Mirror Config::GetConfigPath(): use GetDataRoot() so save data lives in
    // the same external-storage directory that the launcher and Java side see.
    return os::android::GetDataRoot() / "save";
#else
    return GetUserPath() / "save";
#endif
}

// Returned file name may not necessarily be
// equal to SYS-DATA as mods can assign anything.
inline std::filesystem::path GetSaveFilePath(bool checkForMods)
{
    if (checkForMods && !ModLoader::s_saveFilePath.empty())
        return ModLoader::s_saveFilePath;
    else
        return GetSavePath(false) / "SonicNextSaveData.bin";
}

static std::string toLower(std::string str) {
    std::transform(str.begin(), str.end(), str.begin(), [](unsigned char c) { return std::tolower(c); });
    return str;
};

inline void BuildPathCache(const std::string& gamePath) {
    try {
        // skip_permission_denied avoids exceptions on unreadable dirs.
        // follow_directory_symlink is NOT set — this prevents infinite loops
        // from symlink cycles that exist in some Android /proc or app dirs.
        const auto opts = std::filesystem::directory_options::skip_permission_denied;
        for (const auto& entry : std::filesystem::recursive_directory_iterator(gamePath, opts)) {
            if (entry.is_symlink()) continue; // skip symlinks to prevent cycle traversal
            std::string fullPath = entry.path().string();
            std::string key = toLower(fullPath);
            g_pathCache[key] = entry.path();
        }
    } catch (const std::filesystem::filesystem_error&) {
        // Non-fatal: continue with a partial cache (e.g. permission error on a sub-dir).
    }
}

inline std::filesystem::path FindInPathCache(const std::string& targetPath) {
    std::string key = toLower(targetPath);
    auto it = g_pathCache.find(key);
    if (it != g_pathCache.end()) {
        return it->second;
    }
    return {};
}