
# ==========================================
#   Copyright (c) 2020 Dynamic_Static
#     Patrick Purcell
#       Licensed under the MIT license
#     http://opensource.org/licenses/MIT
# ==========================================

# Dynamic_Static.Graphics CMake configuration
cmake_minimum_required(VERSION 3.3 FATAL_ERROR)
project(vk-xml-parser VERSION 1.0.0)
set(CMAKE_CXX_STANDARD 17)

# Dynamic_Static.Graphics.Tools.VkXmlParser library
set(includeDirectory "${CMAKE_CURRENT_LIST_DIR}/include/")
set(includePath "${includeDirectory}/vk-xml-parser/")
set(sourcePath "${CMAKE_CURRENT_LIST_DIR}/source/vk-xml-parser/")
DstAddStaticLibrary(
    target vk-xml-parser
    folder Dynamic_Static.Graphics/build-support/vk-xml-parser
    linkLibraries Dynamic_Static.Core
    includeDirectories
        "${includeDirectory}"

    includeFiles
        "${includePath}/api-element.hpp"
        "${includePath}/api-element.manifest.hpp"

    sourceFiles
        "${sourcePath}/api-element.cpp"
        "${sourcePath}/api-element.manifest.cpp"
)
