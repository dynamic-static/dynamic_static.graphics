
# CMake configuration for Dynamic_Static.Core

ExternalProject_Add(
    Dynamic_Static.Core
    PREFIX external
    DOWNLOAD_DIR external/Dynamic_Static.Core

    URL https://github.com/DynamicStatic/Dynamic_Static.Core/archive/master.zip
    # URL_HASH SHA1=ED05B1B4C82FC7EBF9C451352EB7B4CF887B80B2

    # GIT_REPOSITORY https://github.com/DynamicStatic/Dynamic_Static.Core.git
    # GIT_TAG master

    CMAKE_ARGS
        -DDST_CORE_BUILD_SANDBOX=OFF
        -DDST_CORE_BUILD_TESTS=OFF
    INSTALL_COMMAND ""
)

ExternalProject_Get_Property(Dynamic_Static.Core SOURCE_DIR)
ExternalProject_Get_Property(Dynamic_Static.Core SOURCE_SUBDIR)
ExternalProject_Get_Property(Dynamic_Static.Core BINARY_DIR)

message("Dynamic_Static.Core SOURCE_DIR ${SOURCE_DIR}")
message("Dynamic_Static.Core SOURCE_SUBDIR ${SOURCE_SUBDIR}")
message("Dynamic_Static.Core BINARY_DIR ${BINARY_DIR}")

# get_filename_component(PARENT_DIR "${FILE}" DIRECTORY)
# string(REPLACE "${CMAKE_SOURCE_DIR}" "" GROUP "${PARENT_DIR}")
get_filename_component(PARENT_DIR "${SOURCE_DIR}" DIRECTORY)

set(DST_CORE_INCLUDE "${SOURCE_DIR}/include/")
if (MSVC)
    set(DST_CORE_LIBRARY "${BINARY_DIR}/source/$(Configuration)/Dynamic_Static.Core.lib")
else()
    set(DST_CORE_LIBRARY "${BINARY_DIR}/source/Dynamic_Static.Core.a")
endif()
