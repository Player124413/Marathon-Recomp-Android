---
name: Android internal resolution
description: The Android rendering policy for stable Mali performance and full-display presentation
---

On Android, internal resolution is selected independently from the physical swapchain. The guest renders into a 960×540 default or optional 1280×720 intermediary target, and the existing presentation pass upscales it to the full display. Native/display resolution remains available.

**Why:** A fixed, lower internal target reduces Mali-G57 render-target and bandwidth pressure while preserving landscape presentation at the device's native size.

**How to apply:** Keep future Android resolution changes in the internal-resolution setting and intermediary-target path; do not resize the Android swapchain to implement an internal render mode.