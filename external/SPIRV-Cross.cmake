
# dst_add_external_project(
#     target SPIRV-Cross
#     URL https://github.com/KhronosGroup/SPIRV-Cross/archive/master.zip
# )
# 
# set(SPIRV-Cross.includeDirectories "${SPIRV-Cross.sourceDirectory}/")
# if (MSVC)
#     set(SPIRV-Cross.linkLibraries
#         "${SPIRV-Cross.buildDirectory}/$(Configuration)/spirv-cross-core.lib"
#         "${SPIRV-Cross.buildDirectory}/$(Configuration)/spirv-cross-cpp.lib"
#         "${SPIRV-Cross.buildDirectory}/$(Configuration)/spirv-cross-glsl.lib"
#         "${SPIRV-Cross.buildDirectory}/$(Configuration)/spirv-cross-hlsl.lib"
#         "${SPIRV-Cross.buildDirectory}/$(Configuration)/spirv-cross-msl.lib"
#     )
# else()
#     set(SPIRV-Cross.linkLibraries
#         "${SPIRV-Cross.buildDirectory}/libspirv-cross-core.a"
#         "${SPIRV-Cross.buildDirectory}/libspirv-cross-cpp.a"
#         "${SPIRV-Cross.buildDirectory}/libspirv-cross-glsl.a"
#         "${SPIRV-Cross.buildDirectory}/libspirv-cross-hlsl.a"
#         "${SPIRV-Cross.buildDirectory}/libspirv-cross-msl.a"
#     )
# endif()
