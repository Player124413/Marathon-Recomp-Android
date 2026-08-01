# This is a HOST code-generation tool. When cross-compiling to Android (ANDROID + CMAKE_CROSSCOMPILING),
# it must NOT be built for the Android ABI - use prebuilt host binary instead.
# When building natively on Android (e.g. Termux, no cross-compile) allow the build.
if (ANDROID AND CMAKE_CROSSCOMPILING AND NOT DEFINED MARATHON_RECOMP_HOST_TOOLS_ONLY)
    message(STATUS "u8extract: Skipping Android cross-compile - host tool, use prebuilt binary via MARATHON_RECOMP_HOST_*")
    project("u8extract")
    return()
endif()


project("u8extract")
set(CMAKE_CXX_STANDARD 17)

find_package(ZLIB REQUIRED)

add_executable(u8extract
    "u8extract.cpp"
)

target_link_libraries(u8extract PRIVATE
    ZLIB::ZLIB
)
