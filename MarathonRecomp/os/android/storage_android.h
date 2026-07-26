#pragma once

#include <filesystem>

namespace os::android
{
    // App-private internal files directory (e.g. /data/user/0/<pkg>/files).
    // Empty if SDL/JNI is not ready yet, so never call this from a static initializer.
    const std::filesystem::path& GetInternalFilesDir();

    // App-specific external files directory (e.g. /storage/emulated/0/Android/data/<pkg>/files).
    // This is where the launcher activity (LauncherActivity.java) copies dumped game
    // files to via the Storage Access Framework, and is reachable from a PC over USB
    // (MTP) without root and needs no runtime permissions.
    // Empty if unavailable; never call from a static initializer.
    const std::filesystem::path& GetExternalFilesDir();

    // Root directory for game files and user data (config/saves): a populated
    // "MarathonRecomp" directory under app-specific external storage, or app-internal
    // storage as a fallback when external storage is unavailable. The launcher
    // (LauncherActivity) is responsible for populating <root>/game with the dumped
    // Xbox 360 files before the native game code ever runs.
    const std::filesystem::path& GetDataRoot();

    // True once GetDataRoot()/game contains what looks like a valid game dump
    // (currently: default.xex present). Mirrors the check LauncherActivity.java does
    // in Java before it will let the user launch SDLActivity, so the native side can
    // also refuse to proceed if it is ever reached without that gate (e.g. a stale
    // intent, or SDLActivity launched directly).
    bool HasGameFiles();
}
