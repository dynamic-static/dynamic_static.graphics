
# CMake configuration for Example.VK.03.UniformBuffer

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
)

add_executable(
    Example.VK.03.UniformBuffer
    ${INCLUDE_FILES}
    ${SOURCE_FILES}
)

add_dependencies(Example.VK.03.UniformBuffer Dynamic_Static.Graphics)
target_link_libraries(
    Example.VK.03.UniformBuffer
    Dynamic_Static.Graphics
    ${DST_GFX_BINARY_DEPENDENCIES}
)

create_file_group("${INCLUDE_FILES}")
create_file_group("${SOURCE_FILES}")
