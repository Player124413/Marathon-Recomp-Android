# This is a HOST code-generation tool. When cross-compiling to Android (ANDROID + CMAKE_CROSSCOMPILING),
# it must NOT be built for the Android ABI - use prebuilt host binary instead.
# When building natively on Android (e.g. Termux, no cross-compile) allow the build.
if (ANDROID AND CMAKE_CROSSCOMPILING AND NOT DEFINED MARATHON_RECOMP_HOST_TOOLS_ONLY)
    message(STATUS "fshasher: Skipping Android cross-compile - host tool, use prebuilt binary via MARATHON_RECOMP_HOST_*")
    project("fshasher")
    return()
endif()


project("fshasher")

add_executable(fshasher "fshasher.cpp")

target_link_libraries(fshasher PRIVATE xxHash::xxhash)
