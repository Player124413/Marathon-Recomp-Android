cmake_minimum_required(VERSION 3.20)

set(CMAKE_CXX_STANDARD 17)

# XenosRecomp is a HOST code-generator (runs during the build to produce shader_cache.cpp).
# It requires DirectXShaderCompiler (x64 host library) and must never be cross-compiled
# to Android ABI. When this project is included as part of an Android cross-compile,
# the top-level tools/CMakeLists.txt already skips it, but guard here as well for
# direct/stub configure attempts (e.g. cmake --preset android-debug without the host-tools split).
if (ANDROID AND CMAKE_CROSSCOMPILING AND NOT DEFINED MARATHON_RECOMP_HOST_TOOLS_ONLY)
    message(STATUS "XenosRecomp: Skipping Android target build - this is a host tool (use prebuilt host binary via MARATHON_RECOMP_HOST_XENOS_RECOMP)")
    project("XenosRecomp-ALL")
    return()
endif()

project("XenosRecomp-ALL")

set(XENOS_RECOMP_THIRDPARTY_ROOT "${CMAKE_CURRENT_SOURCE_DIR}/thirdparty")

add_subdirectory(${XENOS_RECOMP_THIRDPARTY_ROOT})
add_subdirectory("${CMAKE_CURRENT_SOURCE_DIR}/XenosRecomp")
