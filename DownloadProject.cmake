
# FROM : https://github.com/Crascit/DownloadProject
# Distributed under the OSI-approved MIT License.

function(download_project)
    set(options QUIET)
    set(oneValueArgs
        PROJ               # DL_ARGS_PROJ
        PREFIX             # DL_ARGS_PREFIX
        DOWNLOAD_DIR       # DL_ARGS_DOWNLOAD_DIR
        SOURCE_DIR         # DL_ARGS_SOURCE_DIR
        BINARY_DIR         # DL_ARGS_BINARY_DIR

        CONFIGURE_COMMAND  # DL_ARGS_CONFIGURE_COMMAND
        INSTALL_COMMAND    # DL_ARGS_INSTALL_COMMAND
        BUILD_COMMAND      # DL_ARGS_BUILD_COMMAND
        TEST_COMMAND       # DL_ARGS_TEST_COMMAND
    )
    set(multiValueArgs "")
    cmake_parse_arguments(DL_ARGS "${options}" "${oneValueArgs}" "${multiValueArgs}" ${ARGN})

    # Set where we'll put our temporary CMakeLists.txt file and the root for our
    # source and binary directories.  The prefix must always be an absolute path.
    if (NOT DL_ARGS_PREFIX)
        set(DL_ARGS_PREFIX "${CMAKE_BINARY_DIR}")
    else()
        get_filename_component(
            DL_ARGS_PREFIX "${DL_ARGS_PREFIX}" ABSOLUTE
            BASE_DIR "${CMAKE_CURRENT_BINARY_DIR}"
        )
    endif()
    if (NOT DL_ARGS_DOWNLOAD_DIR)
        set(DL_ARGS_DOWNLOAD_DIR "${DL_ARGS_PREFIX}/${DL_ARGS_PROJ}-download")
    endif()

    # Set the source and binary directories for the caller.
    if (NOT DL_ARGS_SOURCE_DIR)
        set(DL_ARGS_SOURCE_DIR "${DL_ARGS_PREFIX}/${DL_ARGS_PROJ}-source")
    endif()
    if (NOT DL_ARGS_BINARY_DIR)
        set(DL_ARGS_BINARY_DIR "${DL_ARGS_PREFIX}/${DL_ARGS_PROJ}-build")
    endif()
    set(${DL_ARGS_PROJ}_SOURCE_DIR "${DL_ARGS_SOURCE_DIR}" PARENT_SCOPE)
    set(${DL_ARGS_PROJ}_BINARY_DIR "${DL_ARGS_BINARY_DIR}" PARENT_SCOPE)
    file(REMOVE "${DL_ARGS_DOWNLOAD_DIR}/CMakeCache.txt")
    
    message("== ${DL_ARGS_PREFIX}")
    message("== ${DL_ARGS_PROJ}")
    message("== ${DL_ARGS_PREFIX}/${DL_ARGS_PROJ}-download")
    
    configure_file(
        "${CMAKE_CURRENT_LIST_DIR}/DownloadProject.CMakeLists.cmake.in"
        "${DL_ARGS_DOWNLOAD_DIR}/CMakeLists.txt"
    )

    # execute_process(
    #     COMMAND ${CMAKE_COMMAND} -G "${CMAKE_GENERATOR}" -D "CMAKE_MAKE_PROGRAM:FILE=${CMAKE_MAKE_PROGRAM}" .
    #     RESULT_VARIABLE error
    #     ${OUTPUT_QUIET}
    #     WORKING_DIRECTORY ${DL_ARGS_DOWNLOAD_DIR}
    # )
    # if (error)
    #     message(FATAL_ERROR "CMake step for ${DL_ARGS_PROJECT_NAME} failed : ${error}")
    # endif()

    # execute_process(
    #     COMMAND ${CMAKE_COMMAND} --build .
    #     ${OUTPUT_QUIET}
    #     WORKING_DIRECTORY "${DL_ARGS_DOWNLOAD_DIR}"
    # )
    # if (error)
    #     message(FATAL_ERROR "Build step for ${DL_ARGS_PROJECT_NAME} failed : ${error}")
    # endif()
endfunction()
