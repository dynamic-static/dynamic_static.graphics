
# CMake configuration for Dynamic_Static.Core.Tests

set(SOURCE_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/source/)
set(SOURCE_PATH ${SOURCE_DIRECTORY}Dynamic_Static/Graphics/)
set(SOURCE_FILES
    ${SOURCE_DIRECTORY}/Main.cpp
)

include_directories(
    ${CMAKE_CURRENT_SOURCE_DIR}
)

add_executable(
    Dynamic_Static.Graphics.Tests
    ${SOURCE_FILES}
)

target_link_libraries(
    Dynamic_Static.Graphics.Tests
    Dynamic_Static.Graphics
    ${DST_GFX_BINARY_DEPENDENCIES}
)

create_file_group("${INCLUDE_FILES}")
create_file_group("${SOURCE_FILES}")
