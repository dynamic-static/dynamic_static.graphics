
# CMake configuration for Example.VK.07.ShapeBlaster

set(DST_GFX_EXAMPLE Example.VK.07.ShapeBlaster)

set(INCLUDE_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/include/)
set(INCLUDE_FILES
)

set(SOURCE_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/source/)
set(SOURCE_FILES
    ${SOURCE_DIRECTORY}/Bullet.hpp
    ${SOURCE_DIRECTORY}/Cursor.hpp
    ${SOURCE_DIRECTORY}/Enemy.hpp
    ${SOURCE_DIRECTORY}/Entity.hpp
    ${SOURCE_DIRECTORY}/Entity.Manager.hpp
    ${SOURCE_DIRECTORY}/Main.cpp
    ${SOURCE_DIRECTORY}/PlayerShip.hpp
    ${SOURCE_DIRECTORY}/Resources.hpp
    ${SOURCE_DIRECTORY}/Seeker.hpp
    ${SOURCE_DIRECTORY}/Wanderer.hpp
)

include_directories(
    ${INCLUDE_DIRECTORY}
    ${DST_GFX_INCLUDE}
)

add_executable(
    ${DST_GFX_EXAMPLE}
    ${INCLUDE_FILES}
    ${SOURCE_FILES}
)

add_dependencies(${DST_GFX_EXAMPLE} Dynamic_Static.Graphics)
target_link_libraries(
    ${DST_GFX_EXAMPLE}
    Dynamic_Static.Graphics
    ${DST_GFX_BINARY_DEPENDENCIES}
)

create_file_group("${INCLUDE_FILES}")
create_file_group("${SOURCE_FILES}")
