
#==========================================
#    Copyright (c) 2017 Dynamic_Static
#    Licensed under the MIT license
#    http://opensource.org/licenses/MIT
#==========================================

################################################################################
# TODO : Documentation
################################################################################
include(CheckCXXCompilerFlag)
function(dst_set_cxx_flag_ex cxxFlag)
    CHECK_CXX_COMPILER_FLAG(cxxFlag CXX_FLAG_AVAILABLE)
    if (CXX_FLAG_AVAILABLE)
        set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} cxxFlag")
    endif()
endfunction()

################################################################################
# TODO : Documentation
################################################################################
macro(dst_create_project_ex projectName)
    project(${projectName} CXX)
    set(CMAKE_CXX_STANDARD 14)
    dst_set_cxx_flag_ex(-W4)
    dst_set_cxx_flag_ex(-Wall)
    dst_set_cxx_flag_ex(-Wextra)
    dst_set_cxx_flag_ex(-Wuninitialized)
    dst_set_cxx_flag_ex(-Wwrite-strings)
    dst_set_cxx_flag_ex(-Wpointer-arith)
    dst_set_cxx_flag_ex(-Wunreachable-code)
    dst_set_cxx_flag_ex(-Wstrict_prototypes)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")
    add_definitions(-DUNICODE -D_UNICODE)
    set_property(GLOBAL PROPERTY USE_FOLDERS ON)
endmacro()

################################################################################
# TODO : Documentation
################################################################################
function(dst_create_file_group_ex)
    set(options)
    set(loneArgs)
    set(listArgs fileGroup)
    cmake_parse_arguments(args "${options}" "${loneArgs}" "${listArgs}" ${ARGN})
    foreach(file ${args_fileGroup})
        get_filename_component(parentDirectory "${file}" DIRECTORY)
        string(REPLACE "${CMAKE_SOURCE_DIR}" "" groupName "${parentDirectory}")
        if(MSVC)
            string(REPLACE "/" "\\" groupName "${groupName}")
        endif()
        source_group("${groupName}" FILES "${file}")
    endforeach()
endfunction()

################################################################################
# TODO : Documentation
################################################################################
function(dst_setup_build_target_ex)
    set(options)
    set(loneArgs target folder)
    set(listArgs includeFiles sourceFiles externalSourceFiles)
    cmake_parse_arguments(args "${options}" "${loneArgs}" "${listArgs}" ${ARGN})

    set_target_properties(
        ${args_target}
        PROPERTIES
            PREFIX ""
            LINKER_LANGUAGE CXX
    )

    if(args_folder)
        set_target_properties(${args_target} PROPERTIES FOLDER ${args_folder})
        # TODO : Clean up the build directory...
        add_custom_command(
            TARGET ${args_target} POST_BUILD
            COMMAND ${CMAKE_COMMAND} -E copy
                "$<TARGET_FILE:${args_target}>"
                "${CMAKE_BINARY_DIR}/${args_folder}/$<TARGET_FILE_NAME:${args_target}>"
        )
    endif()

    dst_create_file_group_ex(fileGroup ${args_includeFiles})
    dst_create_file_group_ex(fileGroup ${args_sourceFiles})

    target_include_directories(
        ${args_target}
        PUBLIC "${PROJECT_SOURCE_DIR}/include/"
    )

    if(NOT MSVC)
        target_link_libraries(
            ${target}
            PUBLIC dl
            PUBLIC pthread
            PUBLIC stdc++fs
        )
    endif()
endfunction()

################################################################################
# TODO : Documentation
################################################################################
function(dst_add_static_library_ex)
    set(options)
    set(loneArgs target)
    set(listArgs
        buildDependencies
        includeDirectories
        linkLibraries
        includeFiles
        sourceFiles
    )

    cmake_parse_arguments(args "${options}" "${loneArgs}" "${listArgs}" ${ARGN})
    add_library(${args_target} STATIC ${args_includeFiles} ${args_sourceFiles})
    target_include_directories(${args_target} PUBLIC ${args_includeDirectories})
    target_link_libraries(${args_target} PUBLIC INTERFACE ${args_linkLibraries})
    add_dependencies(${args_target} ${args_buildDependencies})
    dst_setup_build_target_ex(
        target ${args_target}
        includeFiles ${args_includeFiles}
        sourceFiles ${args_sourceFiles}
    )

    export(
        TARGETS ${args_target}
        FILE ${CMAKE_BINARY_DIR}/${args_target}.package.cmake
    )
endfunction()

################################################################################
# TODO : Documentation
################################################################################
function(dst_add_executable_ex)
    set(options)
    set(loneArgs target folder)
    set(listArgs
        buildDependencies
        includeDirectories
        linkLibraries
        includeFiles
        sourceFiles
    )

    cmake_parse_arguments(args "${options}" "${loneArgs}" "${listArgs}" ${ARGN})
    add_executable(${args_target} ${args_includeFiles} ${args_sourceFiles})
    target_include_directories(${args_target} PUBLIC ${args_includeDirectories})
    target_link_libraries(${args_target} PUBLIC ${args_linkLibraries})
    add_dependencies(${args_target} ${args_buildDependencies})
    dst_setup_build_target_ex(
        target ${args_target}
        folder ${args_folder}
        includeFiles ${args_includeFiles}
        sourceFiles ${args_sourceFiles}
    )
endfunction()
