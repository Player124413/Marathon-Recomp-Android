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

### Current blocker
`cmake --preset android-debug` gets through vcpkg bootstrapping and starts
building the manifest deps (`curl`, `freetype` → `openssl`, `zlib`, `libpng`,
`brotli`), but **openssl's Android build fails**: its `Configure`/Makefile
picks up the host's `gcc` instead of the NDK's `clang` (`gcc: error:
unrecognized command-line option '--target=aarch64-none-linux-android28'`).
This is a PATH/toolchain-detection issue in how vcpkg's autotools-based
`openssl` port cross-compiles for Android in this environment — needs
investigation into forcing `CC`/`PATH` to the NDK clang wrapper for that
port specifically (see `thirdparty/vcpkg/buildtrees/openssl/build-arm64-android-dbg-err.log`).

### How to reproduce / continue
```bash
export VCPKG_ROOT="$PWD/thirdparty/vcpkg"
export ANDROID_NDK_HOME="$PWD/.ndk-tools/android-ndk-r27c"
cmake --preset android-debug
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
