
# CMake configuration for Dynamic_Static.Graphics

cmake_minimum_required(VERSION 3.2)
project(dst.gfx CXX)
option(DST_GFX_BUILD_EXAMPLES "Build Dynamic_Static.Graphics.Examples" ON)
option(DST_GFX_BUILD_TESTS "Build Dynamic_Static.Graphics.Tests" ON)

include(CheckCXXCompilerFlag)
function(set_cxx_flag CXX_FLAG)
    CHECK_CXX_COMPILER_FLAG(CXX_FLAG CXX_FLAG_AVAILABLE)
    if (CXX_FLAG_AVAILABLE)
        set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} CXX_FLAG")
    endif()
endfunction()

set(CMAKE_CXX_STANDARD 14)
set_cxx_flag(-W4)
set_cxx_flag(-Wall)
set_cxx_flag(-Wextra)
set_cxx_flag(-Wuninitialized)
set_cxx_flag(-Wwrite-strings)
set_cxx_flag(-Wpointer-arith)
set_cxx_flag(-Wunreachable-code)
set_cxx_flag(-Wstrict_prototypes)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

add_definitions(-DUNICODE -D_UNICODE)

set_property(GLOBAL PROPERTY USE_FOLDERS ON)
function(create_file_group FILE_GROUP)
    foreach(FILE ${FILE_GROUP})
        get_filename_component(PARENT_DIR "${FILE}" DIRECTORY)
        string(REPLACE "${CMAKE_SOURCE_DIR}" "" GROUP "${PARENT_DIR}")
        if (MSVC)
            string(REPLACE "/" "\\" GROUP "${GROUP}")
        endif()
        source_group("${GROUP}" FILES "${FILE}")
    endforeach()
endfunction()

include(ExternalProject)
include("${CMAKE_SOURCE_DIR}/external/Dynamic_Static.Core.cmake")
include("${CMAKE_SOURCE_DIR}/external/GLFW.cmake")
include("${CMAKE_SOURCE_DIR}/external/glslang.cmake")
include("${CMAKE_SOURCE_DIR}/external/imgui.cmake")
include("${CMAKE_SOURCE_DIR}/external/SPIRV-Cross.cmake")
include("${CMAKE_SOURCE_DIR}/external/VulkanSDK.cmake")

add_subdirectory("source/")
if (DST_GFX_BUILD_EXAMPLES)
    add_subdirectory("examples/")
endif()
if (DST_GFX_BUILD_TESTS)
    add_subdirectory("tests/")
endif()

# NOTE : This configuration will generate some files in the project's root directory...this is a known issue in VS2017.
#        https://gitlab.kitware.com/cmake/cmake/issues/16458
#        https://developercommunity.visualstudio.com/content/problem/25240/inconsistent-behaviour-with-output-directory-and-i.html
