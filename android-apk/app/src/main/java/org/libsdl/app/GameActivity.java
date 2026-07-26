package org.libsdl.app;

/**
 * MarathonRecomp's native side is built as a single self-contained libmain.so
 * (MarathonRecomp/CMakeLists.txt's ANDROID branch links SDL2 in statically via
 * SDL2::SDL2-static, rather than producing a separate libSDL2.so), so the base
 * SDLActivity's default getLibraries() - which tries to load "SDL2" before
 * "main" - must be overridden here, or app startup fails looking for a
 * libSDL2.so that was never built.
 *
 * Only ever launched by LauncherActivity, once it has confirmed the user has
 * placed a game dump under GetDataRoot()/game (see AppStorage.java /
 * os/android/storage_android.cpp) - never registered as the app's launcher
 * activity itself.
 */
public class GameActivity extends SDLActivity {
    @Override
    protected void onCreate(android.os.Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        getWindow().addFlags(android.view.WindowManager.LayoutParams.FLAG_KEEP_SCREEN_ON);
    }

    @Override
    protected String[] getLibraries() {
        return new String[] {
            "main"
        };
    }
}
