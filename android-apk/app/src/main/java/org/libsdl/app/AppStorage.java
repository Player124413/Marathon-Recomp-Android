package org.libsdl.app;

import android.content.Context;

import java.io.File;

/**
 * Paths shared by LauncherActivity and the native storage layer. Must be kept in
 * sync with MarathonRecomp/os/android/storage_android.cpp's GetDataRoot(): both
 * sides need to agree on where the game dump lives.
 */
final class AppStorage {
    private AppStorage() {}

    static final String USER_DIRECTORY = "MarathonRecomp";

    /**
     * Root directory for game files and user data, mirroring the native
     * os::android::GetDataRoot(): app-specific external storage (reachable from a
     * PC over USB/MTP, no runtime permission needed), falling back to internal
     * app storage if external storage is unavailable.
     */
    static File dataRoot(Context context) {
        File external = context.getExternalFilesDir(null);
        File base = (external != null) ? external : context.getFilesDir();
        return new File(base, USER_DIRECTORY);
    }

    static File gameDir(Context context) {
        return new File(dataRoot(context), "game");
    }

    /** Mirrors os::android::HasGameFiles(): the one file the native side insists on. */
    static boolean hasGameFiles(Context context) {
        return new File(gameDir(context), "default.xex").isFile();
    }

    /** Path to the TOML config file read and written by the native engine. */
    static File configFile(Context context) {
        return new File(dataRoot(context), "config.toml");
    }

    /**
     * Persistent log file written by the native engine on every run
     * (MarathonRecomp/os/android/logger_android.cpp).  Overwritten each
     * session, so it always contains the output of the latest launch.
     * Read by the launcher after a crash sentinel is detected.
     */
    static File logFile(Context context) {
        return new File(dataRoot(context), "_game_log.txt");
    }
}
