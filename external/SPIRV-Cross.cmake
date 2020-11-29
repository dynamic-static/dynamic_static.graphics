
# ==========================================
#   Copyright (c) 2020 dynamic_static
#     Patrick Purcell
#       Licensed under the MIT license
#     http://opensource.org/licenses/MIT
# ==========================================

include(FetchContent)
set(SPIRV_CROSS_CLI          OFF CACHE BOOL "" FORCE)
set(SPIRV_CROSS_ENABLE_TESTS OFF CACHE BOOL "" FORCE)
set(SPIRV_CROSS_FORCE_PIC    ON  CACHE BOOL "" FORCE)
set(SPIRV_CROSS_SKIP_INSTALL ON  CACHE BOOL "" FORCE)
FetchContent_Declare(
    SPIRV-Cross GIT_REPOSITORY
    "https://github.com/KhronosGroup/SPIRV-Cross.git"
    GIT_TAG 2020-09-17
    GIT_PROGRESS TRUE
    FETCHCONTENT_UPDATES_DISCONNECTED
)
FetchContent_MakeAvailable(SPIRV-Cross)
set_target_properties(spirv-cross-c       PROPERTIES FOLDER "external/SPIRV-Cross/")
set_target_properties(spirv-cross-core    PROPERTIES FOLDER "external/SPIRV-Cross/")
set_target_properties(spirv-cross-cpp     PROPERTIES FOLDER "external/SPIRV-Cross/")
set_target_properties(spirv-cross-glsl    PROPERTIES FOLDER "external/SPIRV-Cross/")
set_target_properties(spirv-cross-hlsl    PROPERTIES FOLDER "external/SPIRV-Cross/")
set_target_properties(spirv-cross-msl     PROPERTIES FOLDER "external/SPIRV-Cross/")
set_target_properties(spirv-cross-reflect PROPERTIES FOLDER "external/SPIRV-Cross/")
set_target_properties(spirv-cross-util    PROPERTIES FOLDER "external/SPIRV-Cross/")
add_library(SPIRV-Cross_ INTERFACE)
target_link_libraries(
    SPIRV-Cross_ INTERFACE
    spirv-cross-c
    spirv-cross-core
    spirv-cross-cpp
    spirv-cross-glsl
    spirv-cross-hlsl
    spirv-cross-msl
    spirv-cross-reflect
    spirv-cross-util
)
