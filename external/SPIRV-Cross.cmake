
cmake_minimum_required(VERSION 3.3)
include(ExternalProject)
ExternalProject_Add(
    SPIRV-Cross
    PREFIX external
    DOWNLOAD_DIR external/SPIRV-Cross
    URL https://github.com/KhronosGroup/SPIRV-Cross/archive/master.zip
    INSTALL_COMMAND ""
)

# ExternalProject_Get_Property(SPIRV-Cross SOURCE_DIR)
# ExternalProject_Get_Property(SPIRV-Cross BINARY_DIR)
# set(SPIRV-Cross.INCLUDE "${SOURCE_DIR}/")
# if (MSVC)
#     set(SPIRV-Cross.LIBRARY
#         "${BINARY_DIR}/$(Configuration)/spirv-cross-core.lib"
#         "${BINARY_DIR}/$(Configuration)/spirv-cross-cpp.lib"
#         "${BINARY_DIR}/$(Configuration)/spirv-cross-glsl.lib"
#         "${BINARY_DIR}/$(Configuration)/spirv-cross-hlsl.lib"
#         "${BINARY_DIR}/$(Configuration)/spirv-cross-msl.lib"
#     )
# else()
#     set(SPIRV-Cross.LIBRARY
#         "${BINARY_DIR}/libspirv-cross-core.a"
#         "${BINARY_DIR}/libspirv-cross-cpp.a"
#         "${BINARY_DIR}/libspirv-cross-glsl.a"
#         "${BINARY_DIR}/libspirv-cross-hlsl.a"
#         "${BINARY_DIR}/libspirv-cross-msl.a"
#     )
# endif()
