
# ==========================================
#   Copyright (c) 2017-2020 dynamic_static
#     Patrick Purcell
#       Licensed under the MIT license
#     http://opensource.org/licenses/MIT
# ==========================================

#file(REMOVE_RECURSE "${glslang.sourceDirectory}/External")
#file(REMOVE_RECURSE "${glslang.sourceDirectory}/gtests")
#file(REMOVE_RECURSE "${glslang.sourceDirectory}/StandAlone")
#file(REMOVE_RECURSE "${glslang.sourceDirectory}/Test")
#set(glslang.includeDirectories "${glslang.sourceDirectory}/")
#if (MSVC)
#    set(glslang.linkLibraries
#        "${glslang.buildDirectory}/glslang/$(Configuration)/glslang*.lib"
#        "${glslang.buildDirectory}/glslang/OSDependent/Windows/$(Configuration)/OSDependent*.lib"
#        "${glslang.buildDirectory}/hlsl/$(Configuration)/HLSL*.lib"
#        "${glslang.buildDirectory}/OGLCompilersDLL/$(Configuration)/OGLCompiler*.lib"
#        "${glslang.buildDirectory}/SPIRV/$(Configuration)/SPIRV*.lib"
#        "${glslang.buildDirectory}/SPIRV/$(Configuration)/SPVRemapper*.lib"
#    )
#else()
#    set(glslang.linkLibraries
#        "${glslang.buildDirectory}/glslang/libglslang.a"
#        "${glslang.buildDirectory}/glslang/OSDependent/Unix/libOSDependent.a"
#        "${glslang.buildDirectory}/hlsl/libHLSL.a"
#        "${glslang.buildDirectory}/OGLCompilersDLL/libOGLCompiler.a"
#        "${glslang.buildDirectory}/SPIRV/libSPIRV.a"
#        "${glslang.buildDirectory}/SPIRV/libSPVRemapper.a"
#    )
#endif()

set(glslangSourceDirectory "${externalDirectory}/glslang/")
set(glslangBuildDirectory "${CMAKE_BINARY_DIR}/external/glslang/")
dst_add_external_cmake_project(
    project glslang
    sourceDirectory "${glslangSourceDirectory}"
    buildDirectory "${glslangBuildDirectory}"
)
target_include_directories(glslang INTERFACE "${externalDirectory}/")
target_link_libraries(
    glslang INTERFACE
    "${glslangBuildDirectory}/glslang/$(Configuration)/GenericCodeGen*.lib"
    "${glslangBuildDirectory}/glslang/$(Configuration)/glslang*.lib"
    "${glslangBuildDirectory}/glslang/$(Configuration)/MachineIndependent*.lib"
    "${glslangBuildDirectory}/glslang/OSDependent/Windows/$(Configuration)/OSDependent*.lib"
    "${glslangBuildDirectory}/hlsl/$(Configuration)/HLSL*.lib"
    "${glslangBuildDirectory}/OGLCompilersDLL/$(Configuration)/OGLCompiler*.lib"
    "${glslangBuildDirectory}/SPIRV/$(Configuration)/SPIRV*.lib"
    "${glslangBuildDirectory}/SPIRV/$(Configuration)/SPVRemapper*.lib"
)
