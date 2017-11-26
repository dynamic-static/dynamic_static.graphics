
# CMake configuration for Dynamic_Static.Core

ExternalProject_Add(
    Dynamic_Static.Core.package
    PREFIX external
    # DOWNLOAD_DIR external/Dynamic_Static.Core
    # URL https://github.com/DynamicStatic/Dynamic_Static.Core/archive/master.zip
    SOURCE_DIR "D:/Dynamic_Static/Dynamic_Static.Core"
    CMAKE_ARGS
        -DBUILD_SANDBOX=OFF
        -DBUILD_TESTS=OFF
    INSTALL_COMMAND ""
)

# TODO : Why doesn't transitive linking work when we let CMake auto link and include Dynamic_Static.Core?
#        It's OK to do it explicitly for now, but this will need to be addressed sooner or later.
# NOTE : This comment is duplicated in Dynamic_Static.Graphics/source/CMakeLists.txt
# ExternalProject_Get_Property(Dynamic_Static.Core.package BINARY_DIR)
# set(Dynamic_Static.Core.PACKAGE ${BINARY_DIR}/Dynamic_Static.Core.package.cmake)
# if (EXISTS ${Dynamic_Static.Core.PACKAGE})
#     include(${Dynamic_Static.Core.PACKAGE})
# endif()

ExternalProject_Get_Property(Dynamic_Static.Core.package SOURCE_DIR)
ExternalProject_Get_Property(Dynamic_Static.Core.package BINARY_DIR)
set(Dynamic_Static.Core.INCLUDE "${SOURCE_DIR}/include/")
if (MSVC)
    set(Dynamic_Static.Core.LIBRARY "${BINARY_DIR}/source/$(Configuration)/Dynamic_Static.Core.lib")
else()
    set(Dynamic_Static.Core.LIBRARY "${BINARY_DIR}/source/Dynamic_Static.Core.a")
endif()
