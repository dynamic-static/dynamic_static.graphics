
#==========================================
#    Copyright (c) 2017 Dynamic_Static
#    Licensed under the MIT license
#    http://opensource.org/licenses/MIT
#==========================================

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
            string(REPLACE "/" "\\" groupName "${fileGroup}")
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
    set(listArgs
        dependencies
        includeDirectories
        linkLibraries
        includeFiles
        sourceFiles
    )

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

    dst_create_file_group_ex(${args_includeFiles})
    dst_create_file_group_ex(${args_sourceFiles})

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
        dependencies
        includeDirectories
        linkLibraries
        includeFiles
        sourceFiles
    )

    cmake_parse_arguments(args "${options}" "${loneArgs}" "${listArgs}" ${ARGN})
    add_library(${target} STATIC ${args_includeFiles} ${args_sourceFiles})
    target_include_directories(${args_target} PUBLIC ${args_includeDirectories})
    target_link_libraries(${args_target} PUBLIC INTERFACE ${args_linkLibraries})
    add_dependencies(${args_target} ${args_dependencies})
    dst_setup_build_target_ex(
        target ${args_target}
        dependencies ${args_dependencies}
        includeDirectories ${args_includeDirectories}
        linkLibraries ${args_linkLibraries}
        includeFiles ${args_includeFiles}
        sourceFiles ${args_sourceFiles}
    )
endfunction()

################################################################################
# TODO : Documentation
################################################################################
function(dst_add_executable_ex)
    set(options)
    set(loneArgs target folder)
    set(listArgs
        dependencies
        includeDirectories
        linkLibraries
        includeFiles
        sourceFiles
    )

    cmake_parse_arguments(args "${options}" "${loneArgs}" "${listArgs}" ${ARGN})
    add_executable(${args_target} ${args_includeFiles} ${args_sourceFiles})
    target_include_directories(${args_target} PUBLIC ${args_includeDirectories})
    target_link_libraries(${args_target} PUBLIC ${args_linkLibraries})
    add_dependencies(${args_target} ${args_dependencies})
    dst_setup_build_target_ex(
        target ${args_target}
        folder ${args_folder}
        dependencies ${args_dependencies}
        includeDirectories ${args_includeDirectories}
        linkLibraries ${args_linkLibraries}
        includeFiles ${args_includeFiles}
        sourceFiles ${args_sourceFiles}
    )
endfunction()
