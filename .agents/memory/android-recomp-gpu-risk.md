---
name: Android recomp GPU risk (Adreno vs Mali)
description: GPU-vendor risk for porting Xbox 360 static-recompilation projects (Marathon Recomp, Unleashed Recomp, etc.) to Android.
---

# GPU vendor risk for Xbox 360 recomp → Android ports

`SansNope/UnleashedRecomp-Android` — the closest known precedent for porting
an Xbox-360 static-recompilation engine (these recomp projects share a lot
of architecture: recompiled PowerPC code, a Vulkan/D3D12/Metal render
abstraction, SDL for windowing/input) to Android — works **only on Adreno
GPUs**. Its author states Mali-family GPU support is not planned, implying
driver-specific Vulkan quirks were needed to get it running on mobile.

**Why this matters:** any similar Android port (e.g. Marathon Recomp) built
using the same approach carries a real risk of compiling successfully but
not rendering correctly on Mali GPUs (common in mid-range MediaTek/Samsung
Exynos devices, e.g. Samsung Galaxy Tab A9's Mali-G57).

**How to apply:** when a user wants to Android-port one of these
recomp-style engines, check their target device's GPU vendor early and
surface this risk before investing in the port — it can determine whether
the effort is likely to pay off on their specific hardware.

## Mitigations added

- `LauncherActivity.java`: EGL-based GPU detection on first run; shows an `AlertDialog` if "mali" is in the GL_RENDERER string, offering to apply performance settings (MSAA=None, shadow=x512, res=0.75×). Key `gpu_compat_warned` in SharedPreferences prevents repeated alerts.
- `GameSettings.java` + `SettingsActivity.java`: Android-wide defaults changed to MSAA=None + shadow=x1024 (were MSAA4x + x4096).
- `plume_render_interface_types.h`: Added `ARM = 0x13B5`, `QUALCOMM = 0x5143`, `IMAGINATION = 0x1010` to `RenderDeviceVendor` enum.
- `video.cpp`: After device creation, ARM vendor triggers a `LOGF_WARNING` + `SDL_ShowSimpleMessageBox` on Android.
- `main.cpp` `LdrLoadModule`: now shows a user-visible error box (instead of silent crash/assert) when the XEX file can't be loaded or parsed.
- `paths.h` `BuildPathCache`: wrapped in try/catch for `std::filesystem::filesystem_error` to prevent crash on permission errors.

## Crash pattern on Mali

Half-second black screen → hard crash (SIGABRT/SIGSEGV from GPU driver). Happens after SDL window opens and Vulkan rendering starts. Not a graceful Vulkan init failure — the Mali driver crashes during the first rendering commands. MSAA4x as the default was the primary trigger; disabling MSAA is the most effective workaround.
