# Custom Vulkan (Turnip) driver import on Android

**Date:** 2026-07-31 · **Status:** implemented (unverified on-device; CI build required)

## What was built

User-installable Mesa Turnip driver support, ported from
SansNope/UnleashedRecomp-Android (`os/android/vulkan_driver_android.cpp` +
vendored `thirdparty/libadrenotools`) and reduced to the SAF zip-import flow:

1. Java `DriverManager` + `LauncherActivity` GPU Driver card: pick an
   AdrenoTools-style zip (meta.json `libraryName`, or a zip with exactly one
   `.so`), extract flat (basenames only) into `<files>/turnip/`, write
   `driver_name.txt`.
2. Native `MarathonRecomp/os/android/vulkan_driver_android.cpp` (`extern "C"
   AndroidGetCustomVulkanLoader()`); boot-recovery marker
   `vulkan_custom_pending` armed before dlopen, cleared in
   `AndroidMarkVulkanStartupSuccessful()` (which also still removes
   `_crash_sentinel`; the old static in video.cpp was deleted). Leftover
   marker → rename selector to `driver_name.disabled.txt` + system driver.
3. plume hook: `volkInitializeCustom()` when a custom loader is returned.
4. vendored `thirdparty/libadrenotools` (BSD-2, incl. `lib/linkernsbypass`);
   `main_hook`/`file_redirect_hook`/`gsl_alloc_hook`/`hook_impl` are separate
   SHARED libs dlopen'd by name → must be copied into
   `android-apk/app/jniLibs/arm64-v8a/` by `build-android.sh` and require
   `useLegacyPackaging true` in `app/build.gradle`.

## The trap that WILL bite you again

**`SDL_Vulkan_CreateSurface` loads the *system* libvulkan.so and resolves
`vkCreateAndroidSurfaceKHR` through the *system* loader with whatever instance
you hand it.** With a custom driver instance (loaded via an isolated adreno
namespace) that is a foreign-instance cross-loader call → undefined behaviour
(crash/null). My fork had forced `PLUME_SDL_VULKAN_ENABLED ON` for Android, so
the initial surface went through SDL and only worked because the system driver
was in use. Fixes applied:
- thirdparty/CMakeLists.txt: `PLUME_SDL_VULKAN_ENABLED` is OFF (FORCE) on
  Android (URA runs this entire engine lineage on-device with it OFF).
- plume_vulkan.cpp: `#elif defined(__ANDROID__)` direct
  `vkCreateAndroidSurfaceKHR`/`ANativeWindow_getWidth` branches now precede the
  SDL branches (belt and suspenders).
Note: `plume::RenderWindow` is `ANativeWindow*` on Android **regardless** of
the SDL flag, so video.cpp's `GameWindow::s_renderWindow` plumbing is
unaffected; `SDL_Vulkan_GetInstanceExtensions` is irrelevant because
`RequiredInstanceExtensions` already includes surface+android_surface.

## Operational facts

- adrenotools requires API 28+ (linkernsbypass bails below), our minSdk=28. It
  creates an isolated namespace, interposes `android_load_sphal_library`, and
  substitutes `vulkan.<hw>.so` with the imported driver; system Vulkan loader
  keeps all WSI/dispatch. TU_DEBUG override: first line of
  `turnip/tu_debug.txt` (launcher Compat Mode writes `sysmem` — the
  documented Adreno 7xx GMEM workaround).
- Non-Adreno import logs a warning but is still attempted (recovery protects
  boot). GPU family detect: `ro.hardware.vulkan`/`ro.hardware.egl` props.
- Hook libs only build via `add_dependencies(MarathonRecomp main_hook
  file_redirect_hook gsl_alloc_hook)` — `ninja MarathonRecomp` alone skips
  them otherwise.
- Docs: `docs/turnip-driver-android.md`. Version bumped (versionCode 4 /
  1.0.2-android-debug-turnip).
