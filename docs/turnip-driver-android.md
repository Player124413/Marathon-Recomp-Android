# Custom Vulkan (Turnip) driver support on Android

The Android build can run the game on an open-source **Mesa Turnip** Vulkan
driver installed by the user instead of the vendor proprietary driver. This is
useful on Adreno devices whose stock driver mishandles this engine
(`buffer_device_address` bindless access, shader compiler assertions, etc.).

> Turnip supports **Qualcomm Adreno only (A6xx and newer)**. On Mali/PowerVR
> devices keep using the system driver; importing Turnip there cannot work.

## How to use (player-facing)

1. Get a driver package zip — an AdrenoTools-style package (`meta.json` with a
   `libraryName` plus the driver binaries, e.g. K11MCH1's
   *AdrenoToolsDrivers* releases) or simply a zip containing exactly one
   `libvulkan_freedreno.so`.
2. Open the app. On the launcher screen, section **GPU DRIVER (VULKAN /
   TURNIP)**, tap **Install Turnip Driver (.zip)** and pick the zip.
3. The launcher unpacks the package into app-internal storage
   (`<internalFiles>/turnip/`), writes the `driver_name.txt` selector and
   shows the active driver. Installation takes effect on the **next launch**.
4. Press **PLAY**. The log (`_game_log.txt`) confirms the mode:
   - `Android Vulkan driver mode: System (no custom driver selected).`
   - `Successfully loaded custom Vulkan driver (<name>.so) via libadrenotools.`

**Compatibility Mode** (toggle in the same card) writes
`turnip/tu_debug.txt` with `sysmem`: Turnip's `TU_DEBUG=sysmem` disables GMEM
tiled rendering and routes through system memory, which fixes corruption /
instability seen on some Adreno 7xx parts at a performance cost. It applies at
the next launch. Delete the file (or toggle back) to return to the default.

**Use System Driver** deselects the custom driver without deleting the files —
you can install again at any time.

## Boot recovery (why a bad driver can't brick the app)

Native code arms `<internalFiles>/turnip/vulkan_custom_pending` immediately
before the custom driver is `dlopen`'d and removes it only after the first
**usable swapchain** is presented (`AndroidMarkVulkanStartupSuccessful`).

If the process dies anywhere between the load and that point (e.g. Mesa
initialisation asserts), the marker survives. On the next launch
`AndroidGetCustomVulkanLoader()` finds it, renames `driver_name.txt` to
`driver_name.disabled.txt`, clears the marker, and boots on the system
driver. The launcher shows the disabled state and offers **Re-enable Turnip
Driver**, so recovery is single-tap.

## Architecture

```
LauncherActivity (Java)                MarathonRecomp (native)
─────────────────────────              ─────────────────────────
DriverManager.installDriverZip()  →    <files>/turnip/*.so + driver_name.txt
                                            │
VulkanInterface ctor (plume) ── AndroidGetCustomVulkanLoader()
                                            │  os/android/vulkan_driver_android.cpp
                                            │    · boot-recovery marker
                                            │    · TU_DEBUG override
                                            │    · JNI nativeLibraryDir
                                            ▼
                                adrenotools_open_libvulkan()
                                   thirdparty/libadrenotools
                                   isolated linker namespace +
                                   libmain_hook interposes the
                                   platform loader's HAL dlopen
                                            ▼
                     vkGetInstanceProcAddr → volkInitializeCustom()
```

Key pieces:

- `thirdparty/libadrenotools` (BSD-2-Clause, by Billy Laws) — creates an
  isolated `android_namespace_t`, interposes `android_load_sphal_library` /
  `android_dlopen_ext` inside it via `libmain_hook.so`, and substitutes the
  vendor `vulkan.<hw>.so` HAL with the imported binary. `linkernsbypass`
  resolves internal loader symbols so it works on API 28+ (our minSdk).
- `MarathonRecomp/os/android/vulkan_driver_android.{h,cpp}` — selection
  validation, boot recovery, `TU_DEBUG` handling, JNI glue. Adapted from
  SansNope/UnleashedRecomp-Android.
- `thirdparty/plume/plume_vulkan.cpp` — `AndroidGetCustomVulkanLoader()` hook
  feeding `volkInitializeCustom()`; the Android surface-creation branch was
  moved ahead of the SDL one because `SDL_Vulkan_CreateSurface` always binds
  to the **system** loader and cannot work with a custom driver's instance.
- `android-apk` — `LauncherActivity`/`DriverManager` (zip import UI), and
  `useLegacyPackaging true` in `build.gradle` so the hook libraries exist as
  real files under `nativeLibraryDir` (adrenotools `dlopen`s them by name).
- `build-android.sh` — copies `libmain_hook.so`, `libhook_impl.so`,
  `libfile_redirect_hook.so`, `libgsl_alloc_hook.so` from the build tree into
  `android-apk/app/jniLibs/arm64-v8a/` so Gradle packages them.

## Log lines to know

| Message | Meaning |
| --- | --- |
| `Android Vulkan driver mode: System (no custom driver selected).` | stock path |
| `Vulkan boot recovery: armed ...` + later `startup marker cleared` | custom driver booted OK |
| `... did not reach a usable swapchain; the custom driver has been disabled ...` | crash recovery fired |
| `adrenotools_open_libvulkan failed ...` | clean failure — stays on system, selection kept |

## Notes for maintainers

- Selecting a driver on a non-Adreno phone logs a loud warning and is *still
  attempted* (e.g. PanVK experiments); recovery protects the boot regardless.
- The pending marker is written with fsync + rename; cheap enough per launch
  and guarantees post-mortem determinism.
- `driver.import` from the previous external-folder flow never existed here;
  only the SAF zip import is supported (the launcher must unpack the driver —
  by design).
