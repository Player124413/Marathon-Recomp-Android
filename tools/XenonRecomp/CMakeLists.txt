cmake_minimum_required (VERSION 3.20)

set(THIRDPARTY_ROOT ${CMAKE_CURRENT_SOURCE_DIR}/thirdparty)

set(CMAKE_CXX_STANDARD 17)
set(BUILD_SHARED_LIBS OFF)

# Enable Hot Reload for MSVC compilers if supported.
if (POLICY CMP0141)
  cmake_policy(SET CMP0141 NEW)
  set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
endif()

set(CMAKE_MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>")

# XenonRecomp is a HOST code-generator (PowerPC -> C++). It must NOT be built for Android ABI.
# See XenosRecomp/CMakeLists.txt and tools/CMakeLists.txt for the full rationale and the two-pass build.
if (ANDROID AND CMAKE_CROSSCOMPILING AND NOT DEFINED MARATHON_RECOMP_HOST_TOOLS_ONLY)
    message(STATUS "XenonRecomp: Skipping Android target build - this is a host tool (use prebuilt host binary via MARATHON_RECOMP_HOST_XENON_RECOMP)")
    project("XenonRecomp-ALL")
    return()
endif()

add_subdirectory(${THIRDPARTY_ROOT})
set(XENONANALYSE_ROOT ${CMAKE_CURRENT_SOURCE_DIR}/XenonAnalyse)
set(XENONUTILS_ROOT ${CMAKE_CURRENT_SOURCE_DIR}/XenonUtils)
set(XENONRECOMP_ROOT ${CMAKE_CURRENT_SOURCE_DIR}/XenonRecomp)

project ("XenonRecomp-ALL")

add_subdirectory(${XENONANALYSE_ROOT})
add_subdirectory(${XENONRECOMP_ROOT})
add_subdirectory(${XENONUTILS_ROOT})

# Only tests if this is the top level project
if (${CMAKE_CURRENT_SOURCE_DIR} STREQUAL ${CMAKE_SOURCE_DIR})
    add_subdirectory(XenonTests)
endif()
