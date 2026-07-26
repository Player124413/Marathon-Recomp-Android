---
name: Mali first-frame crash fixes
description: Root causes and fixes for the Mali GPU black-screen/crash-on-first-render bug in plume_vulkan.cpp
---

Five independent bugs all converge to produce the "window opens black, driver kills app on first render" symptom on Mali (ARM) GPUs.

## Root cause 7 — NPOT texture with full mip chain crashes Mali vkCreateImage (installer wizard hang)

The sonicnext-dev.dds installer logo is 5243×450 (non-power-of-2) with 13 mips. On Mali-G57 (Galaxy Tab A9), calling `vkCreateImage` for a non-PoT texture with a full mip chain (≥ 9 mips, where tiny sub-4px mip levels exist for non-PoT surfaces) crashes the driver — triggering a hard process kill with only "Saving configuration..." appearing in the log (from App::Exit crash handler). Power-of-2 textures (1024×1024) are unaffected even with 11 mips.

**Fix:** In the ARM Mali BC software-decode path (`LoadTexture`, video.cpp), detect NPOT (`(n & (n-1)) != 0`) and clamp `safeMipCount = min(numMips, 8u)` before calling `BcSoftwareDecode` and `createTexture`. Also added `std::bad_alloc` catch around `out.data.resize()` in `BcSoftwareDecode` for graceful OOM fallback. The sonicnext-dev texture now loads mips 0–7 (covering all display sizes since it's rendered at ~10% of original dimensions).

## Root cause 1 — B8G8R8A8_UNORM swapchain format
Android Mali GPUs expose `VK_FORMAT_R8G8B8A8_UNORM` but NOT `VK_FORMAT_B8G8R8A8_UNORM` as a surface format.
`BACKBUFFER_FORMAT` in video.cpp is `B8G8R8A8_UNORM` (constexpr, can't be changed at runtime).
`VulkanSwapChain` constructor (plume_vulkan.cpp ~line 2207) found no compatible format and returned immediately, leaving an invalid swapchain — the first `vkAcquireNextImageKHR` then crashed.

**Fix:** Added a BGRA↔RGBA fallback in `VulkanSwapChain` constructor: if the requested format is absent, retry with the byte-swapped equivalent before giving up.

## Root cause 2 — queryPools always enabled (two-layer fix required)
`capabilities.queryPools = true` was unconditional (plume_vulkan.cpp pre-fix).
Mali G57 reports `timestampPeriod = 0` on some firmware, meaning timestamp queries are unsupported.

**Fix layer 1 (plume):** `capabilities.queryPools = (physicalDeviceProperties.limits.timestampPeriod > 0.0f) && (description.vendor != RenderDeviceVendor::ARM);`

**Fix layer 2 (video.cpp) — added 2026-07-21:** The capability flag alone is insufficient.
`createQueryPool` in video.cpp was called unconditionally at startup (before first frame), creating a `VK_QUERY_TYPE_TIMESTAMP` pool even when `capabilities.queryPools` is false. On Mali-G57, `vkCreateQueryPool(TIMESTAMP)` with `timestampPeriod==0` crashes/faults the driver immediately at device init — causing the black-screen-then-crash seen after "shadow resolution capped at 1024" log line.
All four usage sites in video.cpp must be guarded with `if (g_capabilities.queryPools)`:
- pool creation loop (after Mali workarounds)
- `resetQueryPool` + `writeTimestamp` in `BeginCommandList`
- `queryResults()` + `getResults()` in frame-start fence wait
- `writeTimestamp` at end of frame

## Root cause 3 — presentWait not disabled for ARM
Mali may advertise `VK_KHR_present_wait` but fault inside `vkWaitForPresentKHR`.

**Fix:** `capabilities.presentWait = presentWaitSupported && (description.vendor != RenderDeviceVendor::ARM);`
Engine falls back to fence-based frame pacing, which is stable.

## Root cause 4 — VK_IMAGE_USAGE_SAMPLED_BIT not in surfaceCapabilities.supportedUsageFlags
`resize()` in plume_vulkan.cpp hardcoded `imageUsage = COLOR_ATTACHMENT | TRANSFER_DST | SAMPLED_BIT`. On Mali (Galaxy Tab A9 SM-X110 Mali-G57), `vkGetPhysicalDeviceSurfaceCapabilitiesKHR` reports `supportedUsageFlags` that does NOT include `VK_IMAGE_USAGE_SAMPLED_BIT`. Passing an unsupported usage flag to `vkCreateSwapchainKHR` causes a Mali driver crash instead of returning a clean error code.

**Fix:** Mask `requestedUsage` against `surfaceCapabilities.supportedUsageFlags`. Bail with error if `COLOR_ATTACHMENT_BIT` is missing. Note: swapchain textures are never sampled by shaders (they are blit targets only; `g_intermediaryBackBufferTexture` is what gets sampled), so stripping `SAMPLED_BIT` is safe.

## Root cause 5 — preTransform hardcoded to VK_SURFACE_TRANSFORM_IDENTITY_BIT_KHR
`resize()` hardcoded `createInfo.preTransform = VK_SURFACE_TRANSFORM_IDENTITY_BIT_KHR`. On Samsung Galaxy Tab A9 SM-X110 (portrait device, landscape app), `currentTransform` from the surface capabilities is `VK_SURFACE_TRANSFORM_ROTATE_90_BIT_KHR`. Some Mali drivers crash inside `vkCreateSwapchainKHR` when `preTransform` doesn't match `currentTransform`.

**Fix:** Use `surfaceCapabilities.currentTransform` directly.

**Why:** All five had to be fixed together; any one alone still left a crash path.
**How to apply:** Root causes 1-3: see specific inline comments. Root causes 4-5: both fixed in `VulkanSwapChain::resize()` in `thirdparty/plume/plume_vulkan.cpp`. If Plume is ever updated from upstream, re-check all five sites.

## Settings not persisting (Android config path split)
`Config::GetConfigPath()` used `GetUserPath()` which on Android falls through to the Linux branch (`getenv("HOME")` / `getpwuid`) and returns a wrong internal path. Java's `GameSettings.writeConfigToml()` writes to `AppStorage.dataRoot()` = external files dir / "MarathonRecomp". The two paths never agreed.
- **Fix:** `Config::GetConfigPath()` overridden for Android to return `os::android::GetDataRoot() / "config.toml"`.
- `Config::Save()` dir-creation also fixed to use `GetConfigPath().parent_path()` instead of `GetUserPath()`.
- `GetSavePath()` in paths.h similarly overridden for Android.

## Settings reverting on re-entry (LauncherActivity unconditional overwrite)
`LauncherActivity.onCreate()` called `GameSettings.writeConfigToml(this)` **unconditionally every launch**. This silently overwrote config.toml (written by `Config::Save()` or manual edits) with stale SharedPreferences defaults.
- **Fix:** Guard the write — only call `writeConfigToml` if the config file doesn't already exist (first-launch init only). `LauncherActivity.java`, inside `onCreate`, wraps the call in `if (!configFile.exists())`.
- **Why:** After this fix, config.toml is the single source of truth; the launcher only seeds it once and never clobbers it.

## Spinner skipCount race (SettingsActivity)
`addSpinnerRow` used `skipCount[1]` to skip the initial `onItemSelected` fired by `setSelection`. This fails when the initial index is 0: Android may not fire `onItemSelected` for position-0 on a freshly created spinner, leaving skipCount=1; the first REAL user selection is then silently dropped.
- **Fix:** Replace skipCount with a `committedValue[]` string comparison — skip the callback only if the selected value equals the last committed value.
- **Why:** Value comparison is reliable regardless of Android version or initial spinner position.

## Root cause 6 — descriptorIndexing flags applied without capability guard (NEW — 2026-07-21)
`VulkanDescriptorSetLayout`, `VulkanDescriptorSet` constructor, and `createDescriptorPool` in `plume_vulkan.cpp` all applied `VK_DESCRIPTOR_BINDING_UPDATE_AFTER_BIND_BIT | PARTIALLY_BOUND | VARIABLE_DESCRIPTOR_COUNT` and `VK_DESCRIPTOR_SET_LAYOUT_CREATE_UPDATE_AFTER_BIND_POOL_BIT` / `VK_DESCRIPTOR_POOL_CREATE_UPDATE_AFTER_BIND_BIT` unconditionally when `lastRangeIsBoundless == true`, without checking `device->capabilities.descriptorIndexing`. On Mali-G57, the descriptor indexing extension features are disabled in the logical device (root cause listed above at line 4399 of plume_vulkan), so passing those flags to `vkCreateDescriptorSetLayout` immediately faults the driver. This produced the "black screen → launcher after 'creating swap chain'" crash seen on Tab A9 SM-X110.

**Fix:** Four guards added in `plume_vulkan.cpp`:
1. `VulkanDescriptorSetLayout` ctor (~line 1221): `if (lastRangeIsBoundless && ... && device->capabilities.descriptorIndexing)`
2. `VulkanDescriptorSet` ctor (~line 1924): `if (desc.lastRangeIsBoundless && device->capabilities.descriptorIndexing)` — boundlessRangeSize/rangeCount block
3. `createDescriptorPool` (~line 2095): `if (lastRangeIsBoundless && device->capabilities.descriptorIndexing)` — UPDATE_AFTER_BIND pool flag
4. `VulkanDescriptorSet` ctor (~line 1958): `if (desc.lastRangeIsBoundless && device->capabilities.descriptorIndexing)` — VkDescriptorSetVariableDescriptorCountAllocateInfo

When `!descriptorIndexing` the last range falls through to the regular fixed-size loop (count = TEXTURE_DESCRIPTOR_SIZE), producing a plain non-bindless descriptor set. This is safe because shaders only access slots that have been explicitly written via `setTexture`/`setSampler`.

## Root cause 7 — 5 descriptor sets exceed maxBoundDescriptorSets=4 on Mali (NEW — 2026-07-23)
`CreateHostDevice()` in `video.cpp` builds a pipeline layout with **5 descriptor sets** (sets 0–2: textures ×3, set 3: samplers, set 4: conditional survey RW buffer). `VkPhysicalDeviceLimits::maxBoundDescriptorSets` on Mali-G57 (and many other mobile Vulkan parts) is **4**. Passing 5 set layouts to `vkCreatePipelineLayout` causes a hard GPU driver kill rather than returning a clean `VK_ERROR_*` code. This was the crash site: the log ended at `"VkInit: creating pipeline layout"` with no further output.

**Fix:** Three-layer defence:
1. **`plume_render_interface_types.h`** — added `uint32_t maxBoundDescriptorSets = 8` to `RenderDeviceCapabilities` (default 8 is safe for D3D12/Metal which have no such limit; Vulkan overrides it with the real hardware value).
2. **`plume_vulkan.cpp`** — `capabilities.maxBoundDescriptorSets = physicalDeviceProperties.limits.maxBoundDescriptorSets` in the fill section; guard in `VulkanPipelineLayout::VulkanPipelineLayout()` that returns early if `setLayoutCount > maxBoundDescriptorSets`; null-handle guards in `VulkanGraphicsPipeline` and `VulkanComputePipeline` constructors that return early if `pipelineLayout->vk == VK_NULL_HANDLE`.
3. **`video.cpp`** — `g_conditionalSurveyEnabled` static bool; if `g_capabilities.maxBoundDescriptorSets < 5`, skip adding set 4 to the pipeline layout builder, suppress `setGraphicsDescriptorSet(…, 4)` in `BeginCommandList`, and clamp `enableConditionalSurvey` to false in the `setConditionalSurvey` command handler. Conditional survey is an optimisation, not core rendering — disabling it is safe.
4. `RenderPipelineLayout::isValid()` virtual added to the interface (default `true`); `VulkanPipelineLayout` overrides with `vk != VK_NULL_HANDLE`; `video.cpp` checks it after pipeline layout creation and returns false from `CreateHostDevice` if invalid.

**Why:** A 5-set layout is smaller than the Vulkan spec minimum of 4 only by assumption; some mobile drivers hard-kill on validation rather than returning an error code.
**How to apply:** Any new descriptor set added to the main pipeline layout must check whether the total set count stays ≤ `g_capabilities.maxBoundDescriptorSets`; if it may exceed it on mobile, wrap it in a `g_conditionalSurveyEnabled`-style capability gate.

## Root cause 8 — vkAcquireNextImageKHR with UINT64_MAX can hang render thread forever (NEW — 2026-07-24)
`VulkanSwapChain::acquireTexture()` called `vkAcquireNextImageKHR` with `UINT64_MAX` as timeout. On Mali-G57 (and likely other mobile Mali parts), a GPU driver fault silently kills the GPU context without ever signalling the acquire semaphore. `vkAcquireNextImageKHR(UINT64_MAX)` then blocks the render thread indefinitely — visible as a frozen app that never crashes cleanly.

**Fix:** Replace `UINT64_MAX` with a 2-second finite timeout (`kAcquireTimeoutNs = 2000000000ULL`). On `VK_TIMEOUT`, log the event and return `false` so the caller (`CheckSwapChain` in `video.cpp`) marks the swapchain invalid and triggers the 500ms retry path — same recovery mechanism already in place for resize failures.

**Why:** Matches the pattern already used in `waitForCommandFence()` (5-second timeout) for the same class of "GPU context silently lost" failure mode on Mali.
**How to apply:** `VulkanSwapChain::acquireTexture()` in `thirdparty/plume/plume_vulkan.cpp`. If Plume is updated from upstream, check that the UINT64_MAX is not re-introduced.

## Crash-sentinel (black screen → launcher with no message)
GPU driver crash kills process; Android returns silently to launcher. Added a `_crash_sentinel` file written before rendering starts, deleted on clean exit. `LauncherActivity.checkCrashSentinel()` shows an error dialog with settings advice when the file is found on resume.

## Volk Android load order
Volk tried `libvulkan.so.1` first on Android (doesn't exist), causing a spurious dlopen failure log. Fixed order to try `libvulkan.so` first.
