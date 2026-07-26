cmake_minimum_required (VERSION 3.20)

option(MARATHON_RECOMP_HOST_TOOLS_ONLY "Only build the host code-generation tools (XenonRecomp, XenosRecomp, file_to_c, u8extract, x_decompress), skipping the game executable and its platform-specific dependencies. Used to produce host binaries for cross-compiling to another target platform (e.g. Android)." OFF)

if(NOT MARATHON_RECOMP_HOST_TOOLS_ONLY AND NOT DEFINED ENV{VCPKG_ROOT})
    message(FATAL_ERROR "VCPKG_ROOT is not defined!")
endif()

set(MARATHON_RECOMP_THIRDPARTY_ROOT ${CMAKE_SOURCE_DIR}/thirdparty)
set(MARATHON_RECOMP_TOOLS_ROOT ${CMAKE_SOURCE_DIR}/tools)
set(CMAKE_CXX_STANDARD 20)
set(BUILD_SHARED_LIBS OFF)

# When cross-compiling (e.g. to Android), the in-tree tool targets below would be
# built for the (unrunnable, on the host) target architecture, so these instead
# point at prebuilt host executables produced by a MARATHON_RECOMP_HOST_TOOLS_ONLY
# pass run natively on the build machine beforehand.
set(MARATHON_RECOMP_HOST_XENON_RECOMP "" CACHE FILEPATH "Path to a prebuilt host XenonRecomp executable")
set(MARATHON_RECOMP_HOST_XENOS_RECOMP "" CACHE FILEPATH "Path to a prebuilt host XenosRecomp executable")
set(MARATHON_RECOMP_HOST_FILE_TO_C "" CACHE FILEPATH "Path to a prebuilt host file_to_c executable")
set(MARATHON_RECOMP_HOST_U8EXTRACT "" CACHE FILEPATH "Path to a prebuilt host u8extract executable")
set(MARATHON_RECOMP_HOST_X_DECOMPRESS "" CACHE FILEPATH "Path to a prebuilt host x_decompress executable")

if (MARATHON_RECOMP_HOST_XENON_RECOMP AND MARATHON_RECOMP_HOST_XENOS_RECOMP AND MARATHON_RECOMP_HOST_FILE_TO_C AND MARATHON_RECOMP_HOST_U8EXTRACT)
    set(MARATHON_RECOMP_USE_PREBUILT_HOST_TOOLS ON)
else()
    set(MARATHON_RECOMP_USE_PREBUILT_HOST_TOOLS OFF)
endif()

# Enable Hot Reload for MSVC compilers if supported.
if (POLICY CMP0141)
  cmake_policy(SET CMP0141 NEW)
  set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
endif()

set(CMAKE_MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>")

project("MarathonRecomp-ALL")

if (APPLE)
    enable_language(OBJC OBJCXX)
endif()

if (CMAKE_OSX_ARCHITECTURES)
    set(MARATHON_RECOMP_ARCHITECTURE ${CMAKE_OSX_ARCHITECTURES})
elseif(CMAKE_SYSTEM_PROCESSOR)
    set(MARATHON_RECOMP_ARCHITECTURE ${CMAKE_SYSTEM_PROCESSOR})
else()
    set(MARATHON_RECOMP_ARCHITECTURE ${CMAKE_HOST_SYSTEM_PROCESSOR})
endif()
string(TOLOWER "${MARATHON_RECOMP_ARCHITECTURE}" MARATHON_RECOMP_ARCHITECTURE)
message(STATUS "Detected architecture: ${MARATHON_RECOMP_ARCHITECTURE}")

if (MARATHON_RECOMP_ARCHITECTURE STREQUAL "x86_64" OR MARATHON_RECOMP_ARCHITECTURE STREQUAL "amd64")
    # Target Sandy Bridge for all projects
    add_compile_options(
        -march=sandybridge
    )
endif()

if (CMAKE_BUILD_TYPE STREQUAL "Debug")
    # Normally only defined by Visual Studio, added for consistency
    add_compile_definitions(_DEBUG)
endif()

if (MARATHON_RECOMP_HOST_TOOLS_ONLY)
    add_subdirectory(${MARATHON_RECOMP_TOOLS_ROOT})
else()
    add_subdirectory(${MARATHON_RECOMP_THIRDPARTY_ROOT})

    # tools/ also provides shared thirdparty libraries (fmt, zstd, xxHash) that
    # MarathonRecomp links against directly, so it's always added even when the
    # recompiler executables themselves are swapped out for prebuilt host binaries above.
    add_subdirectory(${MARATHON_RECOMP_TOOLS_ROOT})

    # Include sub-projects.
    add_subdirectory("MarathonRecompLib")
    add_subdirectory("MarathonRecomp")
endif()
