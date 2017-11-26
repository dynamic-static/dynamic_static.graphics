
# CMake configuration for Dynamic_Static.Graphics
cmake_minimum_required(VERSION 3.3)

set(Dynamic_Static.cmake "${CMAKE_BINARY_DIR}/Dynamic_Static.cmake")
file(
    DOWNLOAD
    https://raw.githubusercontent.com/DynamicStatic/Dynamic_Static.CMake/master/Dynamic_Static.cmake
    ${Dynamic_Static.cmake}
)

include(${Dynamic_Static.cmake})
dst_create_project(Dynamic_Static.Graphics)
set(CMAKE_CXX_STANDARD 14)
add_subdirectory("source/")

option(BUILD_EXAMPLES "Build Dynamic_Static.Graphics examples" ON)
if (BUILD_EXAMPLES)
    add_subdirectory("examples/")
endif()

option(BUILD_TESTS "Build Dynamic_Static.Graphics tests" ON)
if (BUILD_TESTS)
    add_subdirectory("tests/")
endif()
