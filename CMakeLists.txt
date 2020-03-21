
# ==========================================
#   Copyright (c) 2017-2020 Dynamic_Static
#     Patrick Purcell
#       Licensed under the MIT license
#     http://opensource.org/licenses/MIT
# ==========================================

# Dynamic_Static.Graphics CMake configuration
cmake_minimum_required(VERSION 3.3 FATAL_ERROR)
project(Dynamic_Static.Graphics VERSION 2.0.0)
set(CMAKE_CXX_STANDARD 17)
list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cmake/")
set(externalDirectory "${CMAKE_CURRENT_LIST_DIR}/external/")

# Options
option(DST_GFX_BUILD_EXAMPLES "TODO : Documentation" OFF)

# External dependencies
add_subdirectory("${externalDirectory}/Dynamic_Static.System/")
include(glslang)
include(SPIRV-Cross)
list(APPEND linkLibraries Dynamic_Static.System)

# Dynamic_Static.Graphics library
set(includeDirectory "${CMAKE_CURRENT_LIST_DIR}/include.ex/")
set(includePath "${includeDirectory}/dynamic_static/system/")
set(sourcePath "${CMAKE_CURRENT_LIST_DIR}/source.ex/dynamic_static/graphics/")
DstAddStaticLibrary(
    target Dynamic_Static.Graphics
    target Dynamic_Static.Graphics/
    linkLibraries "${linkLibraries}"
    includeDirectories
        "${includeDirectory}"
        "${CMAKE_CURRENT_LIST_DIR}/include/"

    includeFiles
        "${includePath}/vulkan/defines.hpp"
        "${includePath}/defines.hpp"
        "${includePath}/vulkan.hpp"
)

# Examples
if(DST_GFX_BUILD_EXAMPLES)
    add_subdirectory("${CMAKE_CURRENT_LIST_DIR}/examples.ex/")
endif()
