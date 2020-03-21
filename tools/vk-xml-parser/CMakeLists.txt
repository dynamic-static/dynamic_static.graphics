
# ==========================================
#   Copyright (c) 2020 Dynamic_Static
#     Patrick Purcell
#       Licensed under the MIT license
#     http://opensource.org/licenses/MIT
# ==========================================

# Dynamic_Static.Graphics CMake configuration
cmake_minimum_required(VERSION 3.3 FATAL_ERROR)
project(Dynamic_Static.Graphics.Tools.VkXmlParser VERSION 1.0.0)
set(CMAKE_CXX_STANDARD 17)
list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cmake/")
set(externalDirectory "${CMAKE_CURRENT_LIST_DIR}/external/")

add_subdirectory("${CMAKE_CURRENT_LIST_DIR}/tools/")

# Dynamic_Static.Graphics.Tools.VkXmlParser library
set(includeDirectory "${CMAKE_CURRENT_LIST_DIR}/include/")
set(includePath "${includeDirectory}/dynamic_static/vk-xml-parser/")
set(sourcePath "${CMAKE_CURRENT_LIST_DIR}/source.ex/dynamic_static/vk-xml-parser/")
DstAddStaticLibrary(
    target Dynamic_Static.Graphics.Tools.VkXmlParser
    target dynamic_static.graphics/tools/vk-xml-parser
    linkLibraries "${linkLibraries}"
    includeDirectories
        "${includeDirectory}"
        "${CMAKE_CURRENT_LIST_DIR}/include/"

    includeFiles
        "${includePath}/vulkan/defines.hpp"
        "${includePath}/defines.hpp"
        "${includePath}/vulkan.hpp"

    sourceFiles
)
