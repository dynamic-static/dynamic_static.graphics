
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

set(glslang_sourceDirectory "${externalDirectory}/glslang/")
set(glslang_buildDirectory "${CMAKE_BINARY_DIR}/external/glslang/")
dst_add_external_cmake_project(
    project glslang
    sourceDirectory "${glslang_sourceDirectory}"
    buildDirectory "${glslang_buildDirectory}"
)
target_include_directories(glslang INTERFACE "${externalDirectory}/")
target_link_libraries(
    glslang INTERFACE
    "${glslang_buildDirectory}/glslang/$(Configuration)/GenericCodeGen*.lib"
    "${glslang_buildDirectory}/glslang/$(Configuration)/glslang*.lib"
    "${glslang_buildDirectory}/glslang/$(Configuration)/MachineIndependent*.lib"
    "${glslang_buildDirectory}/glslang/OSDependent/Windows/$(Configuration)/OSDependent*.lib"
    "${glslang_buildDirectory}/hlsl/$(Configuration)/HLSL*.lib"
    "${glslang_buildDirectory}/OGLCompilersDLL/$(Configuration)/OGLCompiler*.lib"
    "${glslang_buildDirectory}/SPIRV/$(Configuration)/SPIRV*.lib"
    "${glslang_buildDirectory}/SPIRV/$(Configuration)/SPVRemapper*.lib"
)
