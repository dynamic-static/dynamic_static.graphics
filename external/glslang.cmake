
# ==========================================
#   Copyright (c) 2017-2020 dynamic_static
#     Patrick Purcell
#       Licensed under the MIT license
#     http://opensource.org/licenses/MIT
# ==========================================

include(FetchContent)
set(ENABLE_GLSLANG_INSTALL OFF CACHE BOOL "" FORCE)
set(ENABLE_GLSLANG_JS      OFF CACHE BOOL "" FORCE)
set(ENABLE_GLSLANG_WEBMIN  OFF CACHE BOOL "" FORCE)
FetchContent_Declare(
    glslang GIT_REPOSITORY
    "https://github.com/KhronosGroup/glslang.git"
    GIT_TAG 10-11.0.0
    GIT_PROGRESS TRUE
    FETCHCONTENT_UPDATES_DISCONNECTED
)
FetchContent_MakeAvailable(glslang)
set_target_properties(HLSL                            PROPERTIES FOLDER "external/glslang/hlsl/")
set_target_properties(glslang-build-info              PROPERTIES FOLDER "external/glslang/tools/")
set_target_properties(glslangValidator                PROPERTIES FOLDER "external/glslang/tools/")
set_target_properties(spirv-remap                     PROPERTIES FOLDER "external/glslang/tools/")
set_target_properties(GenericCodeGen                  PROPERTIES FOLDER "external/glslang/")
set_target_properties(glslang                         PROPERTIES FOLDER "external/glslang/")
set_target_properties(glslang-default-resource-limits PROPERTIES FOLDER "external/glslang/")
set_target_properties(MachineIndependent              PROPERTIES FOLDER "external/glslang/")
set_target_properties(OGLCompiler                     PROPERTIES FOLDER "external/glslang/")
set_target_properties(OSDependent                     PROPERTIES FOLDER "external/glslang/")
set_target_properties(SPIRV                           PROPERTIES FOLDER "external/glslang/")
set_target_properties(SPVRemapper                     PROPERTIES FOLDER "external/glslang/")
add_library(glslang_ INTERFACE)
target_link_libraries(
    glslang_ INTERFACE
    HLSL
    GenericCodeGen
    glslang
    glslang-default-resource-limits
    MachineIndependent
    OGLCompiler
    OSDependent
    SPIRV
    SPVRemapper
)
