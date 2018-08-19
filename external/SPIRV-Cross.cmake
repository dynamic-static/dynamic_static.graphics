
# ==========================================
#   Copyright (c) 2017-2018 Dynamic_Static
#     Patrick Purcell
#       Licensed under the MIT license
#     http://opensource.org/licenses/MIT
# ==========================================

set(SPIRV-Cross.sourceDirectory "${CMAKE_CURRENT_LIST_DIR}/SPIRV-Cross/")
set(SPIRV-Cross.buildDirectory "${CMAKE_BINARY_DIR}/external/SPIRV-Cross/")
DstBuildExternalCMakeProject(
    target SPIRV-Cross
    folder external
    sourceDirectory "${SPIRV-Cross.sourceDirectory}"
    buildDirectory "${SPIRV-Cross.buildDirectory}"
)
set(SPIRV-Cross.includeDirectories "${SPIRV-Cross.sourceDirectory}/")
if (MSVC)
    set(SPIRV-Cross.staticLibraries
        "${SPIRV-Cross.buildDirectory}/$(Configuration)/spirv-cross-core.lib"
        "${SPIRV-Cross.buildDirectory}/$(Configuration)/spirv-cross-cpp.lib"
        "${SPIRV-Cross.buildDirectory}/$(Configuration)/spirv-cross-glsl.lib"
        "${SPIRV-Cross.buildDirectory}/$(Configuration)/spirv-cross-hlsl.lib"
        "${SPIRV-Cross.buildDirectory}/$(Configuration)/spirv-cross-msl.lib"
    )
else()
    set(SPIRV-Cross.staticLibraries
        "${SPIRV-Cross.buildDirectory}/libspirv-cross-core.a"
        "${SPIRV-Cross.buildDirectory}/libspirv-cross-cpp.a"
        "${SPIRV-Cross.buildDirectory}/libspirv-cross-glsl.a"
        "${SPIRV-Cross.buildDirectory}/libspirv-cross-hlsl.a"
        "${SPIRV-Cross.buildDirectory}/libspirv-cross-msl.a"
    )
endif()
