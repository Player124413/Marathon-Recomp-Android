---
name: presentWait assert crash on swapchain retry
description: abort() crash on Mali when swapchain transitions invalid→valid after a retry and wait() is called without presentWait guard
---

## The bug

`VulkanSwapChain::wait()` had `assert(desc.enablePresentWait)` at the top. On ARM Mali, `desc.enablePresentWait = false` (root cause 3 fix). The assert fires → `abort()` → silent process kill.

**Trigger path:**
1. Init `CheckSwapChain()` → `resize()` fails (window size briefly 0) → `g_swapChainValid = false`, 500ms retry queued.
2. After 500ms during archive loading, `CheckSwapChain()` retries → `resize()` **succeeds** → `g_swapChainValid = true`.
3. Next `Present()` or `WaitOnSwapChain()` call (loading thread / `sub_825EA610`) checks `g_swapChainValid = true`, `g_pendingWaitOnSwapChain = true` → calls `g_swapChain->wait()`.
4. `assert(enablePresentWait)` fires → `abort()`.

**Symptom:** Log ends mid-archive-load (last archived logged = whichever was loading when the render thread aborted). No Vulkan error, no crash log — silent kill.

## Fix

Two layers:
1. **`video.cpp` — guard both call sites** with `g_capabilities.presentWait`:
   - `WaitOnSwapChain()`: `if (g_swapChainValid && g_capabilities.presentWait)`
   - `Present()`: `if (g_pendingWaitOnSwapChain && g_capabilities.presentWait)`
2. **`plume_vulkan.cpp` — harden `wait()` itself**: replace assert with `if (!desc.enablePresentWait) return;`

**Why:** The original comment "never gonna happen outside loading threads" was wrong — the swapchain can transition invalid→valid at any time during loading, and the next `WaitOnSwapChain` call will hit the assert.

**How to apply:** Any future `g_swapChain->wait()` call site must be guarded with `g_capabilities.presentWait`. If Plume is updated from upstream, verify `wait()` still has the early-return guard.
