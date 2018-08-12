
# dst_add_external_project(
#     target glslang
#     URL https://github.com/KhronosGroup/glslang/archive/master.zip
#     CMAKE_ARGS
#         -DENABLE_GLSLANG_BINARIES=OFF
#         -DSKIP_GLSLANG_INSTALL=ON
# )
# 
# file(REMOVE_RECURSE "${glslang.sourceDirectory}/External")
# file(REMOVE_RECURSE "${glslang.sourceDirectory}/gtests")
# file(REMOVE_RECURSE "${glslang.sourceDirectory}/StandAlone")
# file(REMOVE_RECURSE "${glslang.sourceDirectory}/Test")
# set(glslang.includeDirectories "${glslang.sourceDirectory}/")
# if (MSVC)
#     set(glslang.linkLibraries
#         "${glslang.buildDirectory}/glslang/$(Configuration)/glslang*.lib"
#         "${glslang.buildDirectory}/glslang/OSDependent/Windows/$(Configuration)/OSDependent*.lib"
#         "${glslang.buildDirectory}/hlsl/$(Configuration)/HLSL*.lib"
#         "${glslang.buildDirectory}/OGLCompilersDLL/$(Configuration)/OGLCompiler*.lib"
#         "${glslang.buildDirectory}/SPIRV/$(Configuration)/SPIRV*.lib"
#         "${glslang.buildDirectory}/SPIRV/$(Configuration)/SPVRemapper*.lib"
#     )
# else()
#     set(glslang.linkLibraries
#         "${glslang.buildDirectory}/glslang/libglslang.a"
#         "${glslang.buildDirectory}/glslang/OSDependent/Unix/libOSDependent.a"
#         "${glslang.buildDirectory}/hlsl/libHLSL.a"
#         "${glslang.buildDirectory}/OGLCompilersDLL/libOGLCompiler.a"
#         "${glslang.buildDirectory}/SPIRV/libSPIRV.a"
#         "${glslang.buildDirectory}/SPIRV/libSPVRemapper.a"
#     )
# endif()
