cmake_policy(SET CMP0077 NEW)

set(MSDF_ATLAS_BUILD_STANDALONE OFF)
set(MSDF_ATLAS_USE_SKIA OFF)
set(MSDF_ATLAS_NO_ARTERY_FONT ON)
set(MSDFGEN_DISABLE_PNG ON)

set(SDL2MIXER_DEPS_SHARED OFF)
# SDL2MIXER_VENDORED=ON would require cloning ogg/vorbis external submodules.
# Use STB for Vorbis (single-header, no submodule needed) and disable vendored.
set(SDL2MIXER_VENDORED OFF)
set(SDL2MIXER_FLAC OFF)
set(SDL2MIXER_MOD OFF)
set(SDL2MIXER_MP3 OFF)
set(SDL2MIXER_MIDI OFF)
set(SDL2MIXER_OPUS OFF)
set(SDL2MIXER_VORBIS "STB")
set(SDL2MIXER_WAVPACK OFF)


if (CMAKE_SYSTEM_NAME MATCHES "Linux" AND NOT ANDROID)
    set(PLUME_SDL_VULKAN_ENABLED ON CACHE BOOL "")
endif()

# SDL's Vulkan helper must stay OFF on Android: SDL_Vulkan_CreateSurface loads
# the *system* libvulkan.so loader and resolves surface functions from it,
# which only works while the instance also comes from the system loader. That
# breaks the custom Turnip driver path (libadrenotools isolated namespace),
# where the instance is created by a different loader instance. On Android
# plume creates VkSurfaceKHR directly from the ANativeWindow instead. FORCE so
# a stale build directory that cached the previous ON value is corrected.
if (ANDROID)
    set(PLUME_SDL_VULKAN_ENABLED OFF CACHE BOOL "" FORCE)
endif()

if (WIN32)
    set(PLUME_D3D12_AGILITY_SDK_ENABLED ON CACHE BOOL "")
endif()

if (APPLE AND CMAKE_OSX_ARCHITECTURES)
    set(BASE_ARCHITECTURE "${CMAKE_OSX_ARCHITECTURES}")
elseif (CMAKE_SYSTEM_PROCESSOR)
    set(BASE_ARCHITECTURE "${CMAKE_SYSTEM_PROCESSOR}")
else()
    set(BASE_ARCHITECTURE "${CMAKE_HOST_SYSTEM_PROCESSOR}")
endif()

# Next, match common architecture strings down to a known common value.
if (BASE_ARCHITECTURE MATCHES "(x86)|(X86)|(amd64)|(AMD64)")
    set(ARCHITECTURE "x86_64")
elseif (BASE_ARCHITECTURE MATCHES "(aarch64)|(AARCH64)|(arm64)|(ARM64)")
    set(ARCHITECTURE "arm64")
else()
    message(FATAL_ERROR "Unsupported CPU architecture: ${BASE_ARCHITECTURE}")
endif()

add_subdirectory("${MARATHON_RECOMP_THIRDPARTY_ROOT}/msdf-atlas-gen")
add_subdirectory("${MARATHON_RECOMP_THIRDPARTY_ROOT}/o1heap")
add_subdirectory("${MARATHON_RECOMP_THIRDPARTY_ROOT}/SDL")
add_subdirectory("${MARATHON_RECOMP_THIRDPARTY_ROOT}/SDL_mixer")
add_subdirectory("${MARATHON_RECOMP_THIRDPARTY_ROOT}/plume")

if (ANDROID)
    # nativefiledialog-extended has no Android backend (requires GTK3 on Linux).
    # Create a stub nfd::nfd interface so CMake targets can link against it
    # without pulling in GTK headers that don't exist on Android.
    if (NOT TARGET nfd)
        add_library(nfd INTERFACE)
        add_library(nfd::nfd ALIAS nfd)
    endif()

    # ffmpeg-core has no Android prebuilts; create a stub interface target.
    if (NOT TARGET ffmpeg)
        add_library(ffmpeg INTERFACE)
    endif()

    # libadrenotools: loads a custom Vulkan ICD (Mesa Turnip) into an isolated
    # linker namespace with the platform loader's driver lookup hooked. Used by
    # MarathonRecomp/os/android/vulkan_driver_android.cpp.
    add_subdirectory("${MARATHON_RECOMP_THIRDPARTY_ROOT}/libadrenotools")
else()
    add_subdirectory("${MARATHON_RECOMP_THIRDPARTY_ROOT}/nativefiledialog-extended")
    add_subdirectory("${MARATHON_RECOMP_THIRDPARTY_ROOT}/ffmpeg-core")
endif()

if (APPLE)
    add_subdirectory("${MARATHON_RECOMP_THIRDPARTY_ROOT}/MoltenVK")
endif()
