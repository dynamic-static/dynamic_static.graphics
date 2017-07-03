
# CMake configuration for Dynamic_Static.Graphics

cmake_minimum_required(VERSION 3.2)
project(Dynamic_Static.Graphics)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

option(DST_GFX_BUILD_SANDBOX "Build Dynamic_Static.Graphics.Sandbox" ON)
option(DST_GFX_BUILD_TESTS "Build Dynamic_Static.Graphics.Tests" ON)

include(CheckCXXCompilerFlag)
function(set_cxx_flag CXX_FLAG)
    CHECK_CXX_COMPILER_FLAG(CXX_FLAG CXX_FLAG_AVAILABLE)
    if (CXX_FLAG_AVAILABLE)
        set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} CXX_FLAG")
    endif()
endfunction()

set_cxx_flag(-W4)
set_cxx_flag(-Wall)
set_cxx_flag(-Wextra)
set_cxx_flag(-Wuninitialized)
set_cxx_flag(-Wwrite-strings)
set_cxx_flag(-Wpointer-arith)
set_cxx_flag(-Wunreachable-code)
set_cxx_flag(-Wstrict_prototypes)

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
################################################################################################################################
ExternalProject_Add(
    GLFW
    URL "D:/Dynamic_Static_Redux/Dynamic_Static.Graphics.Ex/external/glfw-3.2.1.zip"
    URL_MD5 "35A0672885AD4CA59C8EBE7550176276"
    CMAKE_ARGS
        -DGLFW_BUILD_EXAMPLES=OFF
        -DGLFW_BUILD_TESTS=OFF
        -DGLFW_BUILD_DOCS=OFF
    INSTALL_COMMAND ""
)

ExternalProject_Get_Property(GLFW SOURCE_DIR)
set(GLFW_INCLUDE "${SOURCE_DIR}/include/")
set(GLFW_LIBRARY "${SOURCE_DIR}/../GLFW-build/src/Debug/glfw3.lib")
################################################################################################################################
ExternalProject_Add(
    Dynamic_Static.Core
    URL "D:/Dynamic_Static_Redux/Dynamic_Static.Graphics.Ex/external/Dynamic_Static.Core-1.0.0.zip"
    URL_MD5 "BB7761F3A24CD65676F51006764427ED"
    CMAKE_ARGS
        -DST_CORE_BUILD_SANDBOX=OFF
        -DST_CORE_BUILD_TESTS=OFF
    INSTALL_COMMAND ""
)

ExternalProject_Get_Property(Dynamic_Static.Core SOURCE_DIR)
set(DST_CORE_INCLUDE "${SOURCE_DIR}/include/")
set(DST_CORE_LIBRARY "${SOURCE_DIR}/../Dynamic_Static.Core-build/source/Debug/Dynamic_Static.Core.lib")
################################################################################################################################

set(DST_GFX_INCLUDE "${CMAKE_SOURCE_DIR}/include/")
include_directories("${DST_CORE_INCLUDE}")
include_directories("${DST_GFX_INCLUDE}")
add_subdirectory(source/)
if (DST_GFX_BUILD_SANDBOX)
    add_subdirectory(sandbox/)
endif()
if (DST_GFX_BUILD_TESTS)
    add_subdirectory(tests/)
endif()

# NOTE : This configuration will generate directories in the project's root directory for
#        ALL_BUILD and / or ZERO_CHECK in VS2017 projects...this is a known issue in VS2017.
#        https://gitlab.kitware.com/cmake/cmake/issues/16458
#        https://developercommunity.visualstudio.com/content/problem/25240/inconsistent-behaviour-with-output-directory-and-i.html
