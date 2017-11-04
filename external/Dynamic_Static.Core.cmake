
# CMake configuration for Dynamic_Static.Core

ExternalProject_Add(
    Dynamic_Static.Core
    PREFIX external
    DOWNLOAD_DIR external/Dynamic_Static.Core
    URL https://github.com/DynamicStatic/Dynamic_Static.Core/archive/master.zip
    CMAKE_ARGS
        -DDST_CORE_BUILD_SANDBOX=OFF
        -DDST_CORE_BUILD_TESTS=OFF
    INSTALL_COMMAND ""
)

ExternalProject_Get_Property(Dynamic_Static.Core SOURCE_DIR)
ExternalProject_Get_Property(Dynamic_Static.Core BINARY_DIR)
set(Dynamic_Static.Core.INCLUDE "${SOURCE_DIR}/include/")
if (MSVC)
    set(Dynamic_Static.Core.LIBRARY "${BINARY_DIR}/source/$(Configuration)/Dynamic_Static.Core.lib")
else()
    set(Dynamic_Static.Core.LIBRARY "${BINARY_DIR}/source/Dynamic_Static.Core.a")
endif()
