
# ==========================================
#   Copyright (c) 2017-2018 Dynamic_Static
#     Patrick Purcell
#       Licensed under the MIT license
#     http://opensource.org/licenses/MIT
# ==========================================

# =============================================================================
# TODO : Refactor this into Dynamic_Static.CMake
set(SPIRV-Cross.sourceDirectory "${CMAKE_CURRENT_LIST_DIR}/SPIRV-Cross/")
set(SPIRV-Cross.buildDirectory "${CMAKE_BINARY_DIR}/external/SPIRV-Cross/")
file(MAKE_DIRECTORY "${SPIRV-Cross.buildDirectory}")
execute_process(
    COMMAND
        ${CMAKE_COMMAND} -G "${CMAKE_GENERATOR}" "${SPIRV-Cross.sourceDirectory}"
    WORKING_DIRECTORY "${SPIRV-Cross.buildDirectory}"
    RESULT_VARIABLE error
)
if(error)
    message(FATAL_ERROR "CMake step for SPIRV-Cross failed [${error}]")
endif()
execute_process(
    # TODO : /verbosity:minimal is for MSBUILD, this will have to be handled on other platforms
    COMMAND "${CMAKE_COMMAND}" --build . --config ${CMAKE_BUILD_TYPE} -- /verbosity:minimal
    WORKING_DIRECTORY "${SPIRV-Cross.buildDirectory}"
    RESULT_VARIABLE error
)
if(error)
    message(FATAL_ERROR "Build step for SPIRV-Cross failed [${error}]")
endif()
if(MSVC)
    if(NOT TARGET SPIRV-Cross.build)
        add_custom_target(SPIRV-Cross.build ALL)
        set_property(GLOBAL PROPERTY USE_FOLDERS ON)
        set_target_properties(SPIRV-Cross.build PROPERTIES FOLDER external)
        add_custom_command(
            PRE_BUILD
            TARGET SPIRV-Cross.build
            COMMAND "${CMAKE_COMMAND}" --build . --config $<CONFIG> -- /verbosity:minimal
            WORKING_DIRECTORY "${SPIRV-Cross.buildDirectory}"
        )
    endif()
endif()
# =============================================================================

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
