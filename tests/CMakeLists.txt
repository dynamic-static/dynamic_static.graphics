
set(sourcePath "${PROJECT_SOURCE_DIR}/tests/source/")
set(sourceFiles
    ${sourcePath}/Main.cpp
)

set(catch.include "${CMAKE_BINARY_DIR}/tests/external/catch/")
file(
    DOWNLOAD
    https://github.com/catchorg/Catch2/releases/download/v2.0.1/catch.hpp
    ${catch.include}/catch.hpp
)

set(target Dynamic_Static.Graphics.Tests)
add_executable(${target} "${sourceFiles}")
add_dependencies(${target} Dynamic_Static.Graphics)
dst_setup_target(${target} "" "${sourceFiles}")
target_include_directories(${target} PUBLIC ${catch.include})
target_link_libraries(${target} Dynamic_Static.Graphics)
