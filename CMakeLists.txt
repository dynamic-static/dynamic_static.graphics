
# CMake configuration for Dynamic_Static.Graphics

cmake_minimum_required(VERSION 3.2)
project(Dynamic_Static.Graphics CXX)
option(DST_GFX_BUILD_EXAMPLES "Build Dynamic_Static.Graphics.Examples" ON)
option(DST_GFX_BUILD_SANDBOX "Build Dynamic_Static.Graphics.Sandbox" ON)
option(DST_GFX_BUILD_TESTS "Build Dynamic_Static.Graphics.Tests" ON)

include(CheckCXXCompilerFlag)
function(set_cxx_flag CXX_FLAG)
    message("== About to call CHECK_CXX_COMPILER_FLAG() with ${CXX_FLAG}")
    CHECK_CXX_COMPILER_FLAG(CXX_FLAG CXX_FLAG_AVAILABLE)
    message("== Returned from CHECK_CXX_COMPILER_FLAG() with ${CXX_FLAG}")
    if (CXX_FLAG_AVAILABLE)
        message("-- Setting CXX Flag ${CXX_FLAG}")
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
################################################################################################################################
# TODO : DRY...
ExternalProject_Add(
    GLFW
    PREFIX external

    # URL "${CMAKE_SOURCE_DIR}/external/glfw-3.2.1.zip"
    # URL_MD5 35A0672885AD4CA59C8EBE7550176276

    URL https://github.com/glfw/glfw/archive/3.2.1.zip
    URL_HASH SHA1=3578BEFA2B96A6A2286F33C3A92E08E9F2F834F8

    # GIT_REPOSITORY https://github.com/glfw/glfw.git
    # GIT_TAG 3.2.1

    CMAKE_ARGS
        -DGLFW_BUILD_EXAMPLES=OFF
        -DGLFW_BUILD_TESTS=OFF
        -DGLFW_BUILD_DOCS=OFF
    INSTALL_COMMAND ""
)

ExternalProject_Get_Property(GLFW SOURCE_DIR)
ExternalProject_Get_Property(GLFW BINARY_DIR)
set(GLFW_INCLUDE "${SOURCE_DIR}/include/")
if (MSVC)
    set(GLFW_LIBRARY "${BINARY_DIR}/src/$(Configuration)/glfw3.lib")
else()
    set(GLFW_LIBRARY "${BINARY_DIR}/src/libglfw3.a")
endif()
################################################################################################################################
################################################################################################################################
ExternalProject_Add(
    glslang
    PREFIX external

    URL https://github.com/KhronosGroup/glslang/archive/master.zip
    # URL_HASH SHA1=ED05B1B4C82FC7EBF9C451352EB7B4CF887B80B2
    CMAKE_ARGS
        -DSKIP_GLSLANG_INSTALL=ON
        -DENABLE_GLSLANG_BINARIES=OFF
    INSTALL_COMMAND ""
)

ExternalProject_Get_Property(glslang SOURCE_DIR)
ExternalProject_Get_Property(glslang BINARY_DIR)
file(REMOVE_RECURSE "${SOURCE_DIR}/External")
file(REMOVE_RECURSE "${SOURCE_DIR}/StandAlone")
file(REMOVE_RECURSE "${SOURCE_DIR}/Test")
file(REMOVE_RECURSE "${SOURCE_DIR}/gtests")
set(glslang_INCLUDE "${SOURCE_DIR}/")
if (MSVC)
    set(CMAKE_DEBUG_POSTFIX "d")
    set(glslang_LIBRARY
        "${BINARY_DIR}/glslang/$(Configuration)/glslang.lib"
        "${BINARY_DIR}/hlsl/$(Configuration)/HLSL.lib"
        "${BINARY_DIR}/OGLCompilersDLL/$(Configuration)/OGLCompiler.lib"
        "${BINARY_DIR}/SPIRV/$(Configuration)/SPIRV.lib"
        "${BINARY_DIR}/SPIRV/$(Configuration)/SPVRemapper.lib"
    )
else()
endif()
################################################################################################################################
################################################################################################################################
ExternalProject_Add(
    Dynamic_Static.Core
    PREFIX external/

    URL https://github.com/DynamicStatic/Dynamic_Static.Core/archive/master.zip
    # URL_HASH SHA1=ED05B1B4C82FC7EBF9C451352EB7B4CF887B80B2

    # GIT_REPOSITORY https://github.com/DynamicStatic/Dynamic_Static.Core.git
    # GIT_TAG master

    CMAKE_ARGS
        -DDST_CORE_BUILD_SANDBOX=OFF
        -DDST_CORE_BUILD_TESTS=OFF
    INSTALL_COMMAND ""
)

ExternalProject_Get_Property(Dynamic_Static.Core SOURCE_DIR)
ExternalProject_Get_Property(Dynamic_Static.Core BINARY_DIR)
set(DST_CORE_INCLUDE "${SOURCE_DIR}/include/")
if (MSVC)
    set(DST_CORE_LIBRARY "${BINARY_DIR}/source/$(Configuration)/Dynamic_Static.Core.lib")
else()
    set(DST_CORE_LIBRARY "${BINARY_DIR}/source/Dynamic_Static.Core.a")
endif()
################################################################################################################################


set(VULKAN_LIBRARY "$ENV{VULKAN_SDK}/Lib/vulkan-1.lib")
set(GLEW_LIBRARY "${CMAKE_CURRENT_SOURCE_DIR}/external/glew-2.0.0/lib/Release/x64/glew32s.lib")
set(GLEW_INCLUDE "${CMAKE_CURRENT_SOURCE_DIR}/external/glew-2.0.0/include/")

set(DST_GFX_INCLUDE "${CMAKE_SOURCE_DIR}/include/")
include_directories("${CMAKE_CURRENT_SOURCE_DIR}/external/VulkanSDK/Include/")
include_directories("${CMAKE_CURRENT_SOURCE_DIR}/external/glew-2.0.0/include/")
include_directories("${glslang_INCLUDE}")
include_directories("${DST_CORE_INCLUDE}")
include_directories("${DST_GFX_INCLUDE}")
add_subdirectory(source/)
if (DST_GFX_BUILD_EXAMPLES)
    add_subdirectory(examples/)
endif()
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
