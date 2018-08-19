
# ==========================================
#   Copyright (c) 2017-2018 Dynamic_Static
#     Patrick Purcell
#       Licensed under the MIT license
#     http://opensource.org/licenses/MIT
# ==========================================

set(glslang.sourceDirectory "${CMAKE_CURRENT_LIST_DIR}/glslang/")
set(glslang.buildDirectory "${CMAKE_BINARY_DIR}/external/glslang/") 
DstBuildExternalCMakeProject(
    target glslang
    folder external
    sourceDirectory "${glslang.sourceDirectory}"
    buildDirectory "${glslang.buildDirectory}"
)
# file(REMOVE_RECURSE "${glslang.sourceDirectory}/External")
# file(REMOVE_RECURSE "${glslang.sourceDirectory}/gtests")
# file(REMOVE_RECURSE "${glslang.sourceDirectory}/StandAlone")
# file(REMOVE_RECURSE "${glslang.sourceDirectory}/Test")
set(glslang.includeDirectories "${glslang.sourceDirectory}/")
if (MSVC)
    set(glslang.staticLibraries
        "${glslang.buildDirectory}/glslang/$(Configuration)/glslang*.lib"
        "${glslang.buildDirectory}/glslang/OSDependent/Windows/$(Configuration)/OSDependent*.lib"
        "${glslang.buildDirectory}/hlsl/$(Configuration)/HLSL*.lib"
        "${glslang.buildDirectory}/OGLCompilersDLL/$(Configuration)/OGLCompiler*.lib"
        "${glslang.buildDirectory}/SPIRV/$(Configuration)/SPIRV*.lib"
        "${glslang.buildDirectory}/SPIRV/$(Configuration)/SPVRemapper*.lib"
    )
else()
    set(glslang.staticLibraries
        "${glslang.buildDirectory}/glslang/libglslang.a"
        "${glslang.buildDirectory}/glslang/OSDependent/Unix/libOSDependent.a"
        "${glslang.buildDirectory}/hlsl/libHLSL.a"
        "${glslang.buildDirectory}/OGLCompilersDLL/libOGLCompiler.a"
        "${glslang.buildDirectory}/SPIRV/libSPIRV.a"
        "${glslang.buildDirectory}/SPIRV/libSPVRemapper.a"
    )
endif()
