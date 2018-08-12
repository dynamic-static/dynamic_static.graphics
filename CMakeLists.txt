
# ==========================================
#   Copyright (c) 2016-2018 Dynamic_Static
#     Patrick Purcell
#       Licensed under the MIT license
#     http://opensource.org/licenses/MIT
# ==========================================

# CMake configuration for Dynamic_Static.Graphics

cmake_minimum_required(VERSION 3.3)
if(DEFINED ENV{DYNAMIC_STATIC_SDK})
    include("$ENV{DYNAMIC_STATIC_SDK}/Dynamic_Static.Cmake/.cmake")
else()
    include("external/Dynamic_Static.cmake/.cmake")
endif()

DstCreateProject(Dynamic_Static.Core)

include("external/Dynamic_Static.Core.cmake")
include("external/Dynamic_Static.System.cmake")
include("external/Vulkan.cmake")

set(includePath "${CMAKE_CURRENT_LIST_DIR}/include.ex/Dynamic_Static/Graphics/")
set(sourcePath "${CMAKE_CURRENT_LIST_DIR}/source.ex/Dynamic_Static/Graphics/")
DstCreateStaticLibrary(
    target Dynamic_Static.Graphics
    folder Dynamic_Static.Graphics/

    staticLibraries
        Dynamic_Static.System

    includeDirectories
        "${CMAKE_CURRENT_LIST_DIR}/include.ex/"
        ${Dynamic_Static.Core.includeDirectories}

    includeFiles
        ${includePath}/Application.hpp
        ${includePath}/Defines.hpp

    sourceFiles
        ${sourcePath}/Application.cpp
)

option(BUILD_EXAMPLES "Build Dynamic_Static.Graphics.Examples" ON)
if(BUILD_EXAMPLES)
    add_subdirectory("${CMAKE_CURRENT_LIST_DIR}/examples.ex/")
endif()
