
# CMake configuration for Dynamic_Static.Core

ExternalProject_Add(
    Dynamic_Static.Core.package
    PREFIX external
    DOWNLOAD_DIR external/Dynamic_Static.Core
    URL https://github.com/DynamicStatic/Dynamic_Static.Core/archive/master.zip
    CMAKE_ARGS
        -DBUILD_SANDBOX=OFF
        -DBUILD_TESTS=OFF
    INSTALL_COMMAND ""
)

ExternalProject_Get_Property(Dynamic_Static.Core.package BINARY_DIR)
set(Dynamic_Static.Core.PACKAGE ${BINARY_DIR}/Dynamic_Static.Core.package.cmake)
if (EXISTS ${Dynamic_Static.Core.PACKAGE})
    include(${Dynamic_Static.Core.PACKAGE})
endif()
