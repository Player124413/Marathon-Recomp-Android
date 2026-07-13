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
