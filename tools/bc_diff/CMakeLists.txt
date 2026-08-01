cmake_minimum_required(VERSION 3.20)
# This is a HOST code-generation tool. When cross-compiling to Android (ANDROID + CMAKE_CROSSCOMPILING),
# it must NOT be built for the Android ABI - use prebuilt host binary instead.
# When building natively on Android (e.g. Termux, no cross-compile) allow the build.
if (ANDROID AND CMAKE_CROSSCOMPILING AND NOT DEFINED MARATHON_RECOMP_HOST_TOOLS_ONLY)
    message(STATUS "bc_diff: Skipping Android cross-compile - host tool, use prebuilt binary via MARATHON_RECOMP_HOST_*")
    project("bc_diff")
    return()
endif()


project("bc_diff")
set(CMAKE_CXX_STANDARD 17)

add_executable(bc_diff "bc_diff.cpp")
add_compile_definitions(bc_diff PRIVATE _CRT_SECURE_NO_WARNINGS)

target_link_libraries(bc_diff PRIVATE xxHash::xxhash)
