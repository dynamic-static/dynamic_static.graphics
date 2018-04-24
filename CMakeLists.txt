
#==========================================
#    Copyright 2011-2018 Dynamic_Static
#        Patrick Purcell
#    Licensed under the MIT license
#    http://opensource.org/licenses/MIT
#==========================================

# CMake configuration for Dynamic_Static.Graphics
cmake_minimum_required(VERSION 3.3)
option(SDK_BUILD "TODO : This shouldn't be the default" ON)
if(SDK_BUILD)
    include("$ENV{DYNAMIC_STATIC_SDK}/Dynamic_Static.CMake/.cmake")
else()
    include("external/Dynamic_Static.CMake/.cmake")
endif()
DstCreateProject(Dynamic_Static.Graphics)

include("external/Dynamic_Static.Core.cmake")
include("external/Dynamic_Static.System.cmake")

set(includePath "${CMAKE_CURRENT_LIST_DIR}/include.ex/Dynamic_Static/Graphics/")
set(sourcePath "${CMAKE_CURRENT_LIST_DIR}/source.ex/Dynamic_Static/Graphics/")
DstCreateStaticLibrary(
    target Dynamic_Static.Graphics
    folder Dynamic_Static.Graphics/
    includeDirectories
        "${CMAKE_CURRENT_LIST_DIR}/include.ex/"

    staticLinkLibraries
        Dynamic_Static.Core
        Dynamic_Static.System

    includeFiles
        ${includePath}/Application.hpp
        ${includePath}/Defines.hpp

    sourceFiles
        ${sourcePath}/Application.cpp
)

option(BUILD_TESTS "Build Dynamic_Static.Graphics.Tests" OFF)
if(BUILD_TESTS)
    set(testsPath "${CMAKE_CURRENT_LIST_DIR}/tests.ex/")
    DstCreateTests(
        target Dynamic_Static.Graphics
        folder Dynamic_Static.Graphics/
        sourceFiles
    )
endif()

option(BUILD_EXAMPLES "" ON)
if(BUILD_EXAMPLES)
    add_subdirectory("${CMAKE_CURRENT_LIST_DIR}/examples.ex/")
endif()
