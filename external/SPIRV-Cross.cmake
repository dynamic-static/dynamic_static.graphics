
# CMake configuration for SPIRV-Cross

ExternalProject_Add(
    SPIRV-Cross
    PREFIX external
    DOWNLOAD_DIR external/SPIRV-Cross

    URL https://github.com/KhronosGroup/SPIRV-Cross/archive/master.zip
    # URL_HASH SHA1=ED05B1B4C82FC7EBF9C451352EB7B4CF887B80B2
    
    
    # CMAKE_ARGS
    #     -DSKIP_GLSLANG_INSTALL=ON
    #     -DENABLE_GLSLANG_BINARIES=OFF
    INSTALL_COMMAND ""
)

ExternalProject_Get_Property(SPIRV-Cross SOURCE_DIR)
ExternalProject_Get_Property(SPIRV-Cross BINARY_DIR)
message("SPIRV-Cross SOURCE_DIR ${SOURCE_DIR}")
message("SPIRV-Cross BINARY_DIR ${BINARY_DIR}")
set(SPIRV-Cross_INCLUDE "${SOURCE_DIR}/")
if (MSVC)
    set(SPIRV-Cross_LIBRARY
        "${BINARY_DIR}/$(Configuration)/spirv-cross-core.lib"
        "${BINARY_DIR}/$(Configuration)/spirv-cross-cpp.lib"
        "${BINARY_DIR}/$(Configuration)/spirv-cross-glsl.lib"
        "${BINARY_DIR}/$(Configuration)/spirv-cross-hlsl.lib"
        "${BINARY_DIR}/$(Configuration)/spirv-cross-msl.lib"
    )
else()
    set(SPIRV-Cross_LIBRARY
        "${BINARY_DIR}/spirv-cross-core.a"
        "${BINARY_DIR}/spirv-cross-cpp.a"
        "${BINARY_DIR}/spirv-cross-glsl.a"
        "${BINARY_DIR}/spirv-cross-hlsl.a"
        "${BINARY_DIR}/spirv-cross-msl.a"
    )
endif()
