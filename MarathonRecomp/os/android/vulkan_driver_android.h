#pragma once

// Custom Vulkan ICD (Mesa Turnip) loading via libadrenotools, ported from
// SansNope/UnleashedRecomp-Android and trimmed to the user-import flow:
// the launcher (Java) unpacks an AdrenoTools-style driver zip into the
// internal-storage turnip/ directory and leaves a driver_name.txt selector;
// this side validates the selection, keeps a crash-recovery marker so a bad
// driver can't wedge the boot, and hands the custom vkGetInstanceProcAddr to
// plume (plume_vulkan.cpp) instead of the system Vulkan driver.
//
// Returns a vkGetInstanceProcAddr function pointer (cast to
// PFN_vkGetInstanceProcAddr by the caller) if a custom driver is installed,
// selected and loaded successfully, or nullptr if none is present or loading
// failed - callers must fall back to the default loading path
// (volkInitialize()) in that case.
// extern "C" linkage so it can be forward-declared and called from within
// plume's "plume" namespace (plume_vulkan.cpp) without needing to
// match/qualify a C++ namespace across the translation unit boundary.
extern "C" void *AndroidGetCustomVulkanLoader();

// Called by Video only after both the Vulkan device and a usable swapchain
// exist. This is deliberately separate from AndroidGetCustomVulkanLoader():
// dlopen/vkGetInstanceProcAddr succeeding does not prove that the selected
// driver can finish Vulkan startup. Also removes the _crash_sentinel once
// the first frame has been presented. Idempotent on both counts.
void AndroidMarkVulkanStartupSuccessful();
