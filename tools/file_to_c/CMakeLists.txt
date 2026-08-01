cmake_minimum_required(VERSION 3.20)
# This is a HOST code-generation tool. When cross-compiling to Android (ANDROID + CMAKE_CROSSCOMPILING),
# it must NOT be built for the Android ABI - use prebuilt host binary instead.
# When building natively on Android (e.g. Termux, no cross-compile) allow the build.
if (ANDROID AND CMAKE_CROSSCOMPILING AND NOT DEFINED MARATHON_RECOMP_HOST_TOOLS_ONLY)
    message(STATUS "file_to_c: Skipping Android cross-compile - host tool, use prebuilt binary via MARATHON_RECOMP_HOST_*")
    project("file_to_c")
    return()
endif()


include(CMakeParseArguments)

project("file_to_c")
set(CMAKE_CXX_STANDARD 17)

add_executable(file_to_c "file_to_c.cpp")

target_link_libraries(file_to_c PRIVATE $<IF:$<TARGET_EXISTS:libzstd_static>,libzstd_static,libzstd_shared>)
