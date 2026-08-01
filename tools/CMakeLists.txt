option(MARATHON_RECOMP_OPTIMIZE_TOOLS "Apply compiler optimizations to build tools." ON)
if (MARATHON_RECOMP_OPTIMIZE_TOOLS)
    if (WIN32)
        add_compile_options(/O2)
    else()
        add_compile_options(-O3)
    endif()
    set(CMAKE_INTERPROCEDURAL_OPTIMIZATION ON)
endif()

# When this directory is processed as part of the top-level MarathonRecomp build,
# MARATHON_RECOMP_TOOLS_ROOT and the HOST flags are set by the root CMakeLists.
# When processed as a standalone project (XenosRecomp-only build) they may not exist,
# so provide sensible defaults.
if (NOT DEFINED MARATHON_RECOMP_TOOLS_ROOT)
    set(MARATHON_RECOMP_TOOLS_ROOT ${CMAKE_CURRENT_SOURCE_DIR})
endif()

# Host-tools-only pass (native build, produces binaries that will run on this machine
# during the Android cross-compilation). Build every host executable.
if (DEFINED MARATHON_RECOMP_HOST_TOOLS_ONLY AND MARATHON_RECOMP_HOST_TOOLS_ONLY)
    add_subdirectory(${MARATHON_RECOMP_TOOLS_ROOT}/bc_diff)
    add_subdirectory(${MARATHON_RECOMP_TOOLS_ROOT}/file_to_c)
    add_subdirectory(${MARATHON_RECOMP_TOOLS_ROOT}/fshasher)
    add_subdirectory(${MARATHON_RECOMP_TOOLS_ROOT}/u8extract)
    add_subdirectory(${MARATHON_RECOMP_TOOLS_ROOT}/x_decompress)
    add_subdirectory(${MARATHON_RECOMP_TOOLS_ROOT}/XenonRecomp)
    add_subdirectory(${MARATHON_RECOMP_TOOLS_ROOT}/XenosRecomp)
    return()
endif()

# Android cross-compilation: the code-generators (XenonRecomp, XenosRecomp, file_to_c, u8extract, ...)
# must NOT be built for the Android ABI when cross-compiling - they are host executables that run
# during the build. When MARATHON_RECOMP_USE_PREBUILT_HOST_TOOLS is ON (set by build-android.sh) we
# already have their native binaries, so this directory only needs to provide the shared third-party
# libraries (fmt, zstd, xxHash) that MarathonRecomp itself links against.
# If the flag is OFF while cross-compiling, the user tried to configure the Android preset without
# the two-pass host-tools split and we must fail with a clear message instead of attempting to
# cross-compile the tools (which would either fail to link - no arm64 libdxcompiler.so - or produce
# un-runnable binaries).
# Note: native Android build (e.g. Termux, CMAKE_CROSSCOMPILING=OFF) is allowed to build the tools
# for the Android host itself.
if (ANDROID AND CMAKE_CROSSCOMPILING)
    if (NOT MARATHON_RECOMP_USE_PREBUILT_HOST_TOOLS)
        message(FATAL_ERROR
            "Android cross-compile requires prebuilt host tools (XenonRecomp, XenosRecomp, file_to_c, u8extract, x_decompress).\n"
            "Use build-android.sh which builds them natively first, or configure a host-tools-only build:\n"
            "  cmake -S . -B out/build/host-tools -DMARATHON_RECOMP_HOST_TOOLS_ONLY=ON\n"
            "and then pass their paths via -DMARATHON_RECOMP_HOST_XENON_RECOMP=... etc.\n"
            "See replit.md / .agents/memory/recomp-android-host-tools-split.md for details.")
    endif()

    # Provide fmt / xxHash / zstd for MarathonRecomp target. These are normally pulled in
    # via XenosRecomp/thirdparty, but since we skip building XenosRecomp itself on Android cross-compile,
    # add them directly. The checks avoid duplicate targets when thirdparty/CMakeLists.txt
    # already brought them (or when vcpkg provided them).
    set(_XENOS_THIRDPARTY_ROOT "${MARATHON_RECOMP_TOOLS_ROOT}/XenosRecomp/thirdparty")
    if (EXISTS "${_XENOS_THIRDPARTY_ROOT}/fmt/CMakeLists.txt" AND NOT TARGET fmt::fmt)
        add_subdirectory("${_XENOS_THIRDPARTY_ROOT}/fmt")
    endif()
    if (EXISTS "${_XENOS_THIRDPARTY_ROOT}/xxHash/cmake_unofficial/CMakeLists.txt" AND NOT TARGET xxHash::xxhash)
        add_subdirectory("${_XENOS_THIRDPARTY_ROOT}/xxHash/cmake_unofficial")
    endif()
    if (EXISTS "${_XENOS_THIRDPARTY_ROOT}/zstd/build/cmake/CMakeLists.txt" AND NOT TARGET libzstd_static AND NOT TARGET libzstd_shared)
        add_subdirectory("${_XENOS_THIRDPARTY_ROOT}/zstd/build/cmake")
    endif()

    # Nothing else to build for Android cross-compile in this directory - host tools come from prebuilt binaries.
    return()
endif()

# Desktop / non-Android build: original behavior - build all host tools plus their third-party deps.
add_subdirectory(${MARATHON_RECOMP_TOOLS_ROOT}/bc_diff)
add_subdirectory(${MARATHON_RECOMP_TOOLS_ROOT}/file_to_c)
add_subdirectory(${MARATHON_RECOMP_TOOLS_ROOT}/fshasher)
add_subdirectory(${MARATHON_RECOMP_TOOLS_ROOT}/u8extract)
add_subdirectory(${MARATHON_RECOMP_TOOLS_ROOT}/x_decompress)
add_subdirectory(${MARATHON_RECOMP_TOOLS_ROOT}/XenonRecomp)
add_subdirectory(${MARATHON_RECOMP_TOOLS_ROOT}/XenosRecomp)
