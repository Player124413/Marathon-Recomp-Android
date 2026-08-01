# This is a HOST code-generation tool. When cross-compiling to Android (ANDROID + CMAKE_CROSSCOMPILING),
# it must NOT be built for the Android ABI - use prebuilt host binary instead.
# When building natively on Android (e.g. Termux, no cross-compile) allow the build.
if (ANDROID AND CMAKE_CROSSCOMPILING AND NOT DEFINED MARATHON_RECOMP_HOST_TOOLS_ONLY)
    message(STATUS "x_decompress: Skipping Android cross-compile - host tool, use prebuilt binary via MARATHON_RECOMP_HOST_*")
    project("x_decompress")
    return()
endif()


project("x_decompress")
set(CMAKE_CXX_STANDARD 17)

add_executable(x_decompress
    "x_decompress.cpp"
    "${MARATHON_RECOMP_TOOLS_ROOT}/XenonRecomp/thirdparty/libmspack/libmspack/mspack/lzxd.c"
)

target_include_directories(x_decompress
    PRIVATE "${MARATHON_RECOMP_TOOLS_ROOT}/XenonRecomp/thirdparty/libmspack/libmspack/mspack"
)
