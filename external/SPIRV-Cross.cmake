
# ==========================================
#   Copyright (c) 2017-2018 Dynamic_Static
#     Patrick Purcell
#       Licensed under the MIT license
#     http://opensource.org/licenses/MIT
# ==========================================

set(SPIRV-Cross.sourceDirectory "${CMAKE_CURRENT_LIST_DIR}/SPIRV-Cross/")
set(SPIRV-Cross.buildDirectory "${CMAKE_BINARY_DIR}/external/SPIRV-Cross/")
file(MAKE_DIRECTORY "${SPIRV-Cross.buildDirectory}")
message("SPIRV-Cross.sourceDirectory=${SPIRV-Cross.sourceDirectory}")
execute_process(
    COMMAND
        ${CMAKE_COMMAND}
        -G${CMAKE_GENERATOR}
        -DCMAKE_MAKE_PROGRAM:FILE=${CMAKE_MAKE_PROGRAM}
        "${SPIRV-Cross.sourceDirectory}"
    WORKING_DIRECTORY "${SPIRV-Cross.buildDirectory}"
    RESULT_VARIABLE error
)
if(error)
    message(FATAL_ERROR "CMake step for SPIRV-Cross failed [${error}]")
endif()
# execute_process(
#     COMMAND "${CMAKE_COMMAND}" --build .
#     WORKING_DIRECTORY "${SPIRV-Cross.buildDirectory}"
#     RESULT_VARIABLE error
# )
# if(error)
#     message(FATAL_ERROR "Build step for SPIRV-Cross failed [${error}]")
# endif()

# message("bd=${dir}")
# file(MAKE_DIRECTORY ${dir})
# add_subdirectory("${CMAKE_CURRENT_LIST_DIR}/SPIRV-Cross" ${dir})
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
