
cmake_minimum_required(VERSION 3.3)
include(ExternalProject)
ExternalProject_Add(
    glslang
    PREFIX external
    DOWNLOAD_DIR external/glslang
    URL https://github.com/KhronosGroup/glslang/archive/master.zip
    CMAKE_ARGS
        -DSKIP_GLSLANG_INSTALL=ON
        -DENABLE_GLSLANG_BINARIES=OFF
    INSTALL_COMMAND ""
)

# ExternalProject_Get_Property(glslang SOURCE_DIR)
# ExternalProject_Get_Property(glslang BINARY_DIR)
# file(REMOVE_RECURSE "${SOURCE_DIR}/External")
# file(REMOVE_RECURSE "${SOURCE_DIR}/StandAlone")
# file(REMOVE_RECURSE "${SOURCE_DIR}/Test")
# file(REMOVE_RECURSE "${SOURCE_DIR}/gtests")
# set(glslang.include "${SOURCE_DIR}/")
# if (MSVC)
#     set(glslang.library
#         "${BINARY_DIR}/glslang/$(Configuration)/glslang*.lib"
#         "${BINARY_DIR}/glslang/OSDependent/Windows/$(Configuration)/OSDependent*.lib"
#         "${BINARY_DIR}/hlsl/$(Configuration)/HLSL*.lib"
#         "${BINARY_DIR}/OGLCompilersDLL/$(Configuration)/OGLCompiler*.lib"
#         "${BINARY_DIR}/SPIRV/$(Configuration)/SPIRV*.lib"
#         "${BINARY_DIR}/SPIRV/$(Configuration)/SPVRemapper*.lib"
#     )
# else()
#     set(glslang.library
#         "${BINARY_DIR}/glslang/libglslang.a"
#         "${BINARY_DIR}/glslang/OSDependent/Unix/libOSDependent.a"
#         "${BINARY_DIR}/hlsl/libHLSL.a"
#         "${BINARY_DIR}/OGLCompilersDLL/libOGLCompiler.a"
#         "${BINARY_DIR}/SPIRV/libSPIRV.a"
#         "${BINARY_DIR}/SPIRV/libSPVRemapper.a"
#     )
# endif()
