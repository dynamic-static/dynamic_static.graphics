
# CMake configuration for Dynamic_Static.Graphics.Tests

set(SOURCE_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/source/)
set(SOURCE_FILES
    ${SOURCE_DIRECTORY}/Main.cpp
)

create_file_group("${SOURCE_FILES}")

set(TARGET Dynamic_Static.Graphics.Tests)
add_executable(${TARGET} ${SOURCE_FILES})
target_include_directories(${TARGET} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(${TARGET} Dynamic_Static.Graphics)
add_dependencies(${TARGET} Dynamic_Static.Graphics)
