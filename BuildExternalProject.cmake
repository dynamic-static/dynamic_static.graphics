
# FROM : https://github.com/Crascit/DownloadProject

# TODO : Option to include external project in this project...

include(CMakeParseArguments)
function(build_external_project)
    set(options QUIET)
    set(oneValueArgs
        PROJ               # DL_ARGS_PROJ
        # PREFIX             # DL_ARGS_PREFIX
        # DOWNLOAD_DIR       # DL_ARGS_DOWNLOAD_DIR
        # SOURCE_DIR         # DL_ARGS_SOURCE_DIR
        # BINARY_DIR         # DL_ARGS_BINARY_DIR
    
        CONFIGURE_COMMAND  # DL_ARGS_CONFIGURE_COMMAND
        INSTALL_COMMAND    # DL_ARGS_INSTALL_COMMAND
        BUILD_COMMAND      # DL_ARGS_BUILD_COMMAND
        TEST_COMMAND       # DL_ARGS_TEST_COMMAND
    )
    set(multiValueArgs "")
    cmake_parse_arguments(FARGS "${options}" "${oneValueArgs}" "${multiValueArgs}" ${ARGN})

    set(PACKAGE_NAME "${FARGS_PROJ}")
    set(PACKAGE_STAGE_DIR "${CMAKE_BINARY_DIR}/${PACKAGE_NAME}/stage")
    set(PACKAGE_SOURCE_DIR "${CMAKE_BINARY_DIR}/${PACKAGE_NAME}/source")
    set(PACKAGE_BINARY_DIR "${CMAKE_BINARY_DIR}/${PACKAGE_NAME}/build")
    set(${PACKAGE_NAME}_SOURCE_DIR "${PACKAGE_SOURCE_DIR}" PARENT_SCOPE)
    set(${PACKAGE_NAME}_BINARY_DIR "${PACKAGE_BINARY_DIR}" PARENT_SCOPE)
    file(REMOVE "${PACKAGE_STAGE_DIR}/CMakeCache.txt")

    configure_file(
        "${CMAKE_CURRENT_LIST_DIR}/BuildExternalProject_Unpackage.CMakeLists.cmake.in"
        "${PACKAGE_STAGE_DIR}/CMakeLists.txt"
    )

    file(MAKE_DIRECTORY "${PACKAGE_BINARY_DIR}")
    
    execute_process(
        COMMAND ${CMAKE_COMMAND} -G "${CMAKE_GENERATOR}" -D "CMAKE_MAKE_PROGRAM:FILE=${CMAKE_MAKE_PROGRAM}" .
        RESULT_VARIABLE error
        # "OUTPUT_QUIET"
        WORKING_DIRECTORY "${PACKAGE_STAGE_DIR}"
    )
    if (error)
        message(FATAL_ERROR "CMake step for ${PACKAGE_NAME} failed : ${error}")
    endif()

    execute_process(
        COMMAND ${CMAKE_COMMAND} --build .
        RESULT_VARIABLE error
        # "OUTPUT_QUIET"
        WORKING_DIRECTORY "${PACKAGE_STAGE_DIR}"
    )
    if (error)
        message(FATAL_ERROR "Unpackage step for ${PACKAGE_NAME} failed : ${error}")
    endif()
    
    # configure_file(
    #     "${CMAKE_CURRENT_LIST_DIR}/BuildExternalProject_Build.CMakeLists.cmake.in"
    #     "${PACKAGE_STAGE_DIR}/CMakeLists.txt"
    # )
    # 
    # execute_process(
    #     COMMAND ${CMAKE_COMMAND} --build .
    #     RESULT_VARIABLE error
    #     # OUTPUT_QUIET
    #     WORKING_DIRECTORY "${PACKAGE_STAGE_DIR}"
    # )
    # if (error)
    #     message(FATAL_ERROR "Build step for ${PACKAGE_NAME} failed : ${error}")
    # endif()
    
    execute_process(
        COMMAND ${CMAKE_COMMAND} -G "${CMAKE_GENERATOR}" -D "CMAKE_MAKE_PROGRAM:FILE=${CMAKE_MAKE_PROGRAM}" ../source/
        RESULT_VARIABLE error
        # "OUTPUT_QUIET"
        WORKING_DIRECTORY "${PACKAGE_BINARY_DIR}"
    )
    if (error)
        message(FATAL_ERROR "---- step for ${PACKAGE_NAME} failed : ${error}")
    endif()
    
    execute_process(
        COMMAND ${CMAKE_COMMAND} --build .
        RESULT_VARIABLE error
        # "OUTPUT_QUIET"
        WORKING_DIRECTORY "${PACKAGE_BINARY_DIR}"
    )
    if (error)
        message(FATAL_ERROR "---- step for ${PACKAGE_NAME} failed : ${error}")
    endif()
endfunction()
