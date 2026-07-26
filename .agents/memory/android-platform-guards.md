---
name: Android platform guards needed in this codebase
description: Which files need __ANDROID__ guards and what the correct Android equivalents are.
---
## XMA decoder (xma_decoder.h / xma_decoder.cpp)
- Requires libavcodec (ffmpeg); no Android prebuilts exist
- Entire .h content (after #pragma once) and entire .cpp guarded with #ifndef __ANDROID__ / #endif
- XMACreateContext in imports.cpp is already a stub — missing hooks on Android is acceptable

## Native file dialog (nfd) in installer_wizard.cpp
- nfd::nfd is a stub INTERFACE target on Android (thirdparty/CMakeLists.txt); no headers shipped
- Guard `#include <nfd.h>` with #ifndef __ANDROID__
- Guard ConvertPathSet() and PickerThreadProcess() with #ifndef __ANDROID__
- PickerStart() has an Android-specific stub: immediately sets g_currentPickerResultsReady=true with empty results
- NFD_Init() and NFD_Quit() call sites guarded with #ifndef __ANDROID__

## Window/surface (game_window.cpp)
- Android != Linux for CMake; PLUME_SDL_VULKAN_ENABLED forced OFF by cmake_dependent_option (IS_LINUX check)
- plume::RenderWindow on Android is ANativeWindow* (see plume_render_interface_types.h)
- Get ANativeWindow from SDL_SysWMinfo: info.info.android.window (SDL_syswm.h defines android.window field)
- Added explicit `#elif defined(__ANDROID__)` branch before the `#elif defined(__linux__)` branch

**Why:** Android's CMAKE_SYSTEM_NAME is "Android" not "Linux" so IS_LINUX is false; and SDL's SysWMinfo.info.android is the correct union member.
