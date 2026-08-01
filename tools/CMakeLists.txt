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

    # For Android cross-compile we must NOT build the host executables (XenonRecomp, XenosRecomp, etc.)
    # but we DO need the *library* parts that the game itself links:
    #   - XenonUtils (XEX parser, used at runtime to load default.xex)
    #   - its dependency disasm
    #   - fmt / tomlplusplus / xxHash / zstd (also needed by the game, normally pulled via XenosRecomp thirdparty)
    # The checks avoid duplicate targets when vcpkg or thirdparty/ already provided them.

    set(_XENON_THIRDPARTY_ROOT "${MARATHON_RECOMP_TOOLS_ROOT}/XenonRecomp/thirdparty")
    set(_XENOS_THIRDPARTY_ROOT "${MARATHON_RECOMP_TOOLS_ROOT}/XenosRecomp/thirdparty")

    # disasm (PPC disassembler) - static lib, needed by XenonUtils
    if (EXISTS "${_XENON_THIRDPARTY_ROOT}/disasm/CMakeLists.txt" AND NOT TARGET disasm)
        add_subdirectory("${_XENON_THIRDPARTY_ROOT}/disasm" "${CMAKE_BINARY_DIR}/tools_xenon_disasm")
    endif()

    # fmt
    if (EXISTS "${_XENOS_THIRDPARTY_ROOT}/fmt/CMakeLists.txt" AND NOT TARGET fmt::fmt)
        add_subdirectory("${_XENOS_THIRDPARTY_ROOT}/fmt")
    elseif (EXISTS "${_XENON_THIRDPARTY_ROOT}/fmt/CMakeLists.txt" AND NOT TARGET fmt::fmt)
        add_subdirectory("${_XENON_THIRDPARTY_ROOT}/fmt" "${CMAKE_BINARY_DIR}/tools_xenon_fmt")
    endif()

    # tomlplusplus (header-only, used by MarathonRecomp itself for config, not just by XenonRecomp)
    if (EXISTS "${_XENON_THIRDPARTY_ROOT}/tomlplusplus/CMakeLists.txt" AND NOT TARGET tomlplusplus::tomlplusplus)
        add_subdirectory("${_XENON_THIRDPARTY_ROOT}/tomlplusplus")
    endif()

    # xxHash
    if (EXISTS "${_XENOS_THIRDPARTY_ROOT}/xxHash/cmake_unofficial/CMakeLists.txt" AND NOT TARGET xxHash::xxhash)
        add_subdirectory("${_XENOS_THIRDPARTY_ROOT}/xxHash/cmake_unofficial")
    elseif (EXISTS "${_XENON_THIRDPARTY_ROOT}/xxHash/cmake_unofficial/CMakeLists.txt" AND NOT TARGET xxHash::xxhash)
        add_subdirectory("${_XENON_THIRDPARTY_ROOT}/xxHash/cmake_unofficial" "${CMAKE_BINARY_DIR}/tools_xenon_xxhash")
    endif()

    # zstd (needed by file_to_c BIN2C, but also used by game)
    if (EXISTS "${_XENOS_THIRDPARTY_ROOT}/zstd/build/cmake/CMakeLists.txt" AND NOT TARGET libzstd_static AND NOT TARGET libzstd_shared)
        add_subdirectory("${_XENOS_THIRDPARTY_ROOT}/zstd/build/cmake")
    endif()

    # XenonUtils - the actual XEX parsing library that MarathonRecomp links.
    # It expects THIRDPARTY_ROOT to be set (points to XenonRecomp/thirdparty)
    if (NOT TARGET XenonUtils)
        set(THIRDPARTY_ROOT "${_XENON_THIRDPARTY_ROOT}")
        # Ensure its private include dirs exist (libmspack, tiny-AES-c, TinySHA1 are part of XenonRecomp thirdparty)
        add_subdirectory("${MARATHON_RECOMP_TOOLS_ROOT}/XenonRecomp/XenonUtils" "${CMAKE_BINARY_DIR}/tools_xenon_utils")
    endif()

    # Nothing else to build for Android cross-compile in this directory - host executables come from prebuilt binaries.
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
