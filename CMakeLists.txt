
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
include("${CMAKE_SOURCE_DIR}/external/GLFW.cmake")
include("${CMAKE_SOURCE_DIR}/external/SPIRV-Cross.cmake")
include("${CMAKE_SOURCE_DIR}/external/glslang.cmake")
include("${CMAKE_SOURCE_DIR}/external/imgui.cmake")
include("${CMAKE_SOURCE_DIR}/external/Dynamic_Static.Core.cmake")

# set(VULKAN_LIBRARY "$ENV{VULKAN_SDK}/Lib/vulkan-1.lib")
set(GLEW_LIBRARY "${CMAKE_CURRENT_SOURCE_DIR}/external/glew-2.0.0/lib/Release/x64/glew32s.lib")
set(GLEW_INCLUDE "${CMAKE_CURRENT_SOURCE_DIR}/external/glew-2.0.0/include/")

set(DST_GFX_INCLUDE "${CMAKE_SOURCE_DIR}/include/")
include_directories("${CMAKE_CURRENT_SOURCE_DIR}/external/VulkanSDK/Include/")
include_directories("${CMAKE_CURRENT_SOURCE_DIR}/external/glew-2.0.0/include/")
# add_subdirectory("${CMAKE_SOURCE_DIR}/external/")
# include_directories("${glslang_INCLUDE}")
# include_directories("${DST_CORE_INCLUDE}")
include_directories("${DST_GFX_INCLUDE}")
add_subdirectory(source/)
if (DST_GFX_BUILD_EXAMPLES)
    add_subdirectory(examples/)
endif()
if (DST_GFX_BUILD_SANDBOX)
#     add_subdirectory(sandbox/)
endif()
if (DST_GFX_BUILD_TESTS)
    add_subdirectory(tests/)
endif()

# NOTE : This configuration will generate directories in the project's root directory for
#        ALL_BUILD and / or ZERO_CHECK in VS2017 projects...this is a known issue in VS2017.
#        https://gitlab.kitware.com/cmake/cmake/issues/16458
#        https://developercommunity.visualstudio.com/content/problem/25240/inconsistent-behaviour-with-output-directory-and-i.html
