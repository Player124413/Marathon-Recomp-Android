# Marathon Recompiled (Android port in progress)

## Project overview
Marathon Recompiled is a static recompilation of the Xbox 360 build of Sonic
the Hedgehog (2006) into native C++/HLSL, giving Windows/Linux/macOS PC ports.
It is a native CMake + vcpkg project (not a web app) and requires the user's
own legally-owned game files to run — there is nothing to preview in a
browser and no Replit workflow is configured for it.

Upstream layout:
- `MarathonRecomp/` — the recompiled game/engine (app, gpu, hid, kernel, ui, os/*)
- `MarathonRecompLib/` — shared library code
- `tools/` — `XenonRecomp` / `XenosRecomp` (PowerPC/Xenos → C++/HLSL recompilers)
- `thirdparty/` — vendored dependencies, declared as git submodules in
  `.gitmodules` but the imported zip did **not** include actual submodule
  commits/gitlinks, so they show up empty until cloned.

## Current goal: Android port
The user asked to port this to Android, targeting a Samsung Galaxy Tab A9
(MediaTek Helio G99, **Mali-G57** GPU). The closest precedent,
`SansNope/UnleashedRecomp-Android` (a similar Android port of the sister
project *Sonic Unleashed Recompiled*), explicitly only supports **Adreno**
GPUs and states Mali support is not planned — so this port carries real risk
of not running well even once it builds. The user was informed and chose to
proceed anyway.

### What's been set up
- Downloaded Android NDK r27c to `.ndk-tools/android-ndk-r27c` (gitignored,
  ~2 GB — re-download with the command below if missing; Replit's Nix
  package index has no `androidenv`/NDK modules, so a direct download from
  Google is the only path).
  ```bash
  mkdir -p .ndk-tools && cd .ndk-tools && \
    curl -sL -o ndk.zip https://dl.google.com/android/repository/android-ndk-r27c-linux.zip && \
    unzip -q ndk.zip && rm ndk.zip
  ```
- Cloned the thirdparty submodules needed for a build (`vcpkg`, `SDL`,
  `SDL_mixer`, `plume`, `imgui`, `implot`, `json`, `magic_enum`,
  `concurrentqueue`, `unordered_dense`, `ddspp`, `stb`) directly with
  `git clone` since the real submodule gitlinks are missing from this
  import. `thirdparty/vcpkg` needs full history (not `--depth 1`) or its
  baseline-commit checkout fails.
- Installed system deps: `cmake`, `ninja`, `clang`, `llvm`, `pkg-config`.
- Added an `android-debug` / `android-release` CMake preset in
  `CMakePresets.json` (`android-base`), targeting `arm64-v8a` /
  `android-28`, using vcpkg's built-in `arm64-android` triplet and pointing
  `ANDROID_NDK_HOME` at the downloaded NDK.

### Known good news
- The renderer already has a Vulkan backend (`thirdparty/plume`,
  `MarathonRecomp/gpu/video.cpp`) alongside D3D12/Metal, so Android doesn't
  need a from-scratch renderer — Vulkan is the target backend.
- SDL already ships an `android-project` template; vcpkg already has
  `arm64-android` triplets (`thirdparty/vcpkg/triplets/arm64-android.cmake`,
  community variants too).
- vcpkg/openssl cross-compiling for Android now works out of the box (the
  triplet's `VCPKG_ENV_PASSTHROUGH` plus `build-android.sh` exporting NDK
  clang paths is enough) — the earlier "openssl picks up host gcc" blocker
  noted below is resolved; ignore it if seen again in old logs.
- The CMake build now gets through configure **and** build all the way to
  needing the user's private game files
  (`MarathonRecompLib/private/default.xex`, `shader.arc`, etc., which are
  gitignored/never included) — i.e. the Android cross-compilation pipeline
  itself is unblocked. Supplying those files (same requirement as the
  desktop build) is the next thing to try.

### Host-tools split (the big fix this round)
`XenonRecomp`, `XenosRecomp`, `file_to_c`, and `u8extract` are code-gen tools
invoked via `add_custom_command` **during the build** (they generate the
recompiled PPC sources, the shader cache, and embedded binary resources).
When cross-compiling for Android, CMake was building these as arm64-android
binaries too — which either failed to link (no arm64-android build of
`libdxcompiler.so` for `XenosRecomp` to embed) or, if they had linked,
couldn't run on this x86_64 host anyway. Fixed by mirroring
`UnleashedRecomp-Android`'s pattern:
- `MARATHON_RECOMP_HOST_TOOLS_ONLY` cmake option builds *only* the tool
  targets, natively, in a separate build dir (`out/build/host-tools`).
- `MARATHON_RECOMP_HOST_XENON_RECOMP` / `_HOST_XENOS_RECOMP` / `_HOST_FILE_TO_C`
  / `_HOST_U8EXTRACT` / `_HOST_X_DECOMPRESS` cache vars, when all set, flip on
  `MARATHON_RECOMP_USE_PREBUILT_HOST_TOOLS`, which redirects the
  `add_custom_command`s in `MarathonRecompLib/CMakeLists.txt` and
  `MarathonRecomp/CMakeLists.txt` (`BIN2C`) to call the prebuilt host binary
  path instead of `$<TARGET_FILE:Tool>`, passing explicit config/header args
  (prebuilt tools can't rely on baked-in `target_compile_definitions` paths).
- `build-android.sh` now does this as an explicit two-pass build: configure +
  build the host-tools-only pass first (with `CC=clang`/`CXX=clang++`, not
  NDK clang — see gotchas below), locate the resulting binaries, feed their
  paths into the `android-debug`/`android-release` configure, then build only
  the `MarathonRecomp` target (not the default `all`, which would still try
  to build arm64-android copies of the host tools).
- `MarathonRecomp/CMakeLists.txt` also gained an `ANDROID` branch: builds
  `MarathonRecomp` as `add_library(SHARED)` named `main` (matching
  `System.loadLibrary("main")` in an SDL Android activity) instead of
  `add_executable`, links `SDL2::SDL2main`, and `main.cpp` gained an
  `extern "C" int SDL_main(...)` wrapper for Android (needed because
  `SDL_MAIN_HANDLED` is defined project-wide, suppressing SDL's usual
  `#define main SDL_main`, but Android's SDL2main JNI glue still calls a
  literal `SDL_main` symbol from a native thread).
- `os/android/*.cpp` implementations don't exist; as a placeholder,
  `MarathonRecomp/CMakeLists.txt`'s `ANDROID` branch reuses the `os/linux/*`
  sources so the target has *something* to compile, but they assume a
  desktop POSIX environment (X11 process spawn, `/etc/passwd` user lookup)
  and have not been adapted or verified for the NDK — likely the next real
  source-level blocker once private game files are supplied and the build
  gets further.

### Host-tools-only build gotchas (native pass, `out/build/host-tools`)
- Must use `CC=clang`/`CXX=clang++`, not gcc: `XenonUtils/xbox.h` uses a GNU
  anonymous-struct-with-constructor-member extension gcc rejects but clang
  accepts.
- Must pass `-DMARATHON_RECOMP_OPTIMIZE_TOOLS=OFF`: the default `ON` turns on
  `CMAKE_INTERPROCEDURAL_OPTIMIZATION` (LTO), which in this environment left
  LLVM-bitcode-only objects in static libs that the final link step (invoked
  without `-flto`) couldn't read (`file format not recognized`). Not needed
  for one-shot code-gen tools anyway.

### OS layer (`MarathonRecomp/os/android/*.cpp`, new)
Replaced the earlier Linux-reuse placeholder with real (but unverified —
still blocked on private game files, see below) implementations:
- `logger_android.cpp` — routes through `__android_log_print` (logcat), since
  stdout isn't visible on-device; also keeps `fmt::println` for adb-shell use.
- `process_android.cpp` — same `fork()`/`exec()`/`/proc/self/exe` approach as
  Linux (works under the NDK), `CheckConsole`/`ShowConsole` are no-ops (no
  attached console concept on Android). `StartProcess` is unverified — app
  sandboxing may block spawning arbitrary executables in practice.
- `media_android.cpp`, `user_android.cpp` — inert stubs (no MPRIS/D-Bus
  equivalent for "is media playing"; no JNI wiring yet to query
  `Configuration.uiMode` for dark-theme detection).
- `version_android.cpp` — reads `ro.build.version.release`/`.sdk` via
  `__system_property_get` instead of asserting unimplemented.
- `os/registry.h` needed no Android-specific work: its `#elif
  defined(__linux__)` branch already matches Android (all-stub
  `registry_linux.inl`, same as desktop Linux).
- Linked `log` (liblog, for `__android_log_print`) on the `MarathonRecomp`
  target when `ANDROID`.

### APK scaffold (`android-apk/`)
Already further along than expected — Vulkan 1.1 feature flags for
Mali-G57, `SDLActivity` manifest entry, and a `jniLibs.srcDirs`-based Gradle
setup for a prebuilt `.so` were already in place from an earlier pass, plus a
`jni/src/main.c` placeholder stub with an mmap 4GB-address-space smoke test.
This round:
- Removed `build.gradle`'s `externalNativeBuild { ndkBuild { ... } }` block
  and deleted `android-apk/app/jni/` entirely — it built a *second*,
  conflicting `libmain.so` from the placeholder stub. The real one now comes
  entirely from the top-level CMake build (`MarathonRecomp`'s `ANDROID`
  branch already produces `libmain.so` containing the whole game + SDL2,
  SDL_main and all).
- `build-android.sh` now copies the built `libmain.so` into
  `android-apk/app/jniLibs/arm64-v8a/` after a successful build, which
  Gradle's existing `jniLibs.srcDirs` config picks up automatically.
- Added `android-apk/app/jniLibs/` to `.gitignore` (build output).
- Not done: no Android SDK/Gradle wrapper JDK is available in this
  container to actually run `./gradlew assembleDebug` and confirm the APK
  packages correctly — that's unverified until tried on a machine with the
  Android SDK, or the user's own machine/CI.

### Launcher gate (new, modeled on UnleashedRecomp-Android)
The app now has a proper two-activity structure so it never silently tries to
run the game without a dump in place — this is the same pattern
`SansNope/UnleashedRecomp-Android` uses (its `LauncherActivity.java` +
`AppStorage.java` + `os/android/storage_android.*`), scoped down to just the
game-files gate (no mod manager / driver picker / update checker, which that
project also has but this request didn't ask for):

- **`LauncherActivity`** (`android-apk/app/src/main/java/org/libsdl/app/LauncherActivity.java`,
  new) — the app's actual launcher/entry point now. Shows whether
  `<data root>/game/default.xex` exists; if not, a "Select Game Files" button
  opens Android's Storage Access Framework folder picker
  (`ACTION_OPEN_DOCUMENT_TREE`) so the user can point at their dumped Xbox 360
  files (no storage permission prompt needed — SAF grants access to just that
  tree), and copies them into app-specific storage on a background thread.
  "Play" only enables once `default.xex` is confirmed present, and launches
  `GameActivity`.
- **`GameActivity`** (new) — the actual `SDLActivity` subclass that runs the
  game; overrides `getLibraries()` to load only `"main"` (not `"SDL2"` too,
  since our `libmain.so` links SDL2 in statically rather than as its own
  `.so`). Declared `exported="false"` in the manifest — only `LauncherActivity`
  can start it, it has no launcher icon of its own.
- **`AppStorage.java`** (new) — Java-side mirror of the native path logic
  below, so both sides agree on where the dump lives.
- **`os/android/storage_android.h`/`.cpp`** (new) — native equivalent:
  `GetDataRoot()` returns `<app-specific external files dir>/MarathonRecomp`
  (falls back to internal storage if external is unavailable), and
  `HasGameFiles()` checks for `default.xex` under it. `paths.h`'s
  `GetGamePath()` now resolves through this on Android instead of the
  compile-time `GAME_INSTALL_DIRECTORY` constant used on desktop.
- **`main()`** now has a defense-in-depth check on Android: if `GameActivity`
  is ever reached without `HasGameFiles()` passing (e.g. a stale resume
  intent after the user deletes the files), it shows an error and exits
  rather than falling into `InstallerWizard`, which assumes a desktop
  file-picker/ImGui flow not adapted for a touchscreen.

Not done / unverified: no Android SDK/Gradle in this container to actually
run `./gradlew assembleDebug` and click through the launcher UI — the Java
compiles as far as manual review can confirm, but hasn't been built or run.

### Current hard blocker: needs your real game files
Both the CMake build and any further OS-layer verification are now blocked
on `MarathonRecompLib/private/default.xex` (and `shader.arc`/`shader_lt.arc`
etc.) — your own legally-owned Xbox 360 game files, which are gitignored and
were never part of this import. This is the same requirement the desktop
build already has; it's not Android-specific. Until those are in place,
first the object-file compile stage for the bulk of the engine (kernel, gpu,
patches, ui, etc. — not just the small `os/android/*.cpp` set) cannot be
attempted at all, because CMake's Ninja generator does a single combined
header-dependency scan across all of a target's sources, which itself
depends on the PPC-recompiler-generated headers.

### How to reproduce / continue
```bash
./build-android.sh --configure   # host tools + android-debug preset
./build-android.sh --build       # host tools, then MarathonRecomp only
# or just ./build-android.sh for both steps; add --release for android-release
```

## Constraints to remember
- Replit's container has no Android emulator with GPU and no way to attach
  the physical Tab A9 — verification here is limited to whether the code
  compiles/links, not whether it actually runs/renders correctly on-device.
- vcpkg's `directx-headers`/`directx12-agility` deps are Windows-only
  (`vcpkg.json` `"platform": "windows"`), so they're already excluded from
  the Android triplet — no action needed there.

## User preferences
(none recorded yet)
