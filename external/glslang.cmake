
# ==========================================
#   Copyright (c) 2017-2018 Dynamic_Static
#     Patrick Purcell
#       Licensed under the MIT license
#     http://opensource.org/licenses/MIT
# ==========================================

# =============================================================================
# TODO : Refactor this into Dynamic_Static.CMake
set(glslang.sourceDirectory "${CMAKE_CURRENT_LIST_DIR}/glslang/")
set(glslang.buildDirectory "${CMAKE_BINARY_DIR}/external/glslang/")
file(MAKE_DIRECTORY "${glslang.buildDirectory}")
execute_process(
    COMMAND
        ${CMAKE_COMMAND} -G "${CMAKE_GENERATOR}" "${glslang.sourceDirectory}"
    WORKING_DIRECTORY "${glslang.buildDirectory}"
    RESULT_VARIABLE error
)
if(error)
    message(FATAL_ERROR "CMake step for glslang failed [${error}]")
endif()
execute_process(
    # TODO : /verbosity:minimal is for MSBUILD, this will have to be handled on other platforms
    COMMAND "${CMAKE_COMMAND}" --build . -- /verbosity:minimal
    WORKING_DIRECTORY "${glslang.buildDirectory}"
    RESULT_VARIABLE error
)
if(error)
    message(FATAL_ERROR "Build step for glslang failed [${error}]")
endif()
if(MSVC)
    if(NOT TARGET glslang.build)
        add_custom_target(glslang.build ALL)
        set_property(GLOBAL PROPERTY USE_FOLDERS ON)
        set_target_properties(glslang.build PROPERTIES FOLDER external)
        add_custom_command(
            PRE_BUILD
            TARGET glslang.build
            COMMAND "${CMAKE_COMMAND}" --build . --config $<CONFIG> -- /verbosity:minimal
            WORKING_DIRECTORY "${glslang.buildDirectory}"
        )
    endif()
endif()
# =============================================================================

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
