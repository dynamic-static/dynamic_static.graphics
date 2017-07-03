
# CMake configuration for Dynamic_Static.Graphics.Sandbox

set(INCLUDE_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/include/)
set(INCLUDE_FILES
)

set(SOURCE_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/source/)
set(SOURCE_FILES
    ${SOURCE_DIRECTORY}/Main.cpp
)

include_directories(
    ${INCLUDE_DIRECTORY}
    ${DST_GFX_INCLUDE}
    # "${Dynamic_Static.Core_SOURCE_DIR}/Dynamic_Static.Core/include/"
)

add_executable(
    Dynamic_Static.Graphics.Sandbox
    ${INCLUDE_FILES}
    ${SOURCE_FILES}
)

target_link_libraries(
    Dynamic_Static.Graphics.Sandbox
    Dynamic_Static.Graphics
    ${DST_GFX_DEPENDENCIES}
    # "${Dynamic_Static.Core_BINARY_DIR}/Dynamic_Static.Core"
)

create_file_group("${INCLUDE_FILES}")
create_file_group("${SOURCE_FILES}")
