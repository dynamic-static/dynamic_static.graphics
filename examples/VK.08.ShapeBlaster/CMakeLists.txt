
# CMake configuration for Example.VK.08.ShapeBlaster

set(INCLUDE_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/include/)
set(INCLUDE_FILES
)

set(SOURCE_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/source/)
set(SOURCE_FILES
    ${SOURCE_DIRECTORY}/Ex/BlackHole_ex.hpp
    ${SOURCE_DIRECTORY}/Ex/Bullet_ex.hpp
    ${SOURCE_DIRECTORY}/Ex/Enemy_ex.hpp
    ${SOURCE_DIRECTORY}/Ex/Entity_ex.hpp
    ${SOURCE_DIRECTORY}/Ex/Entity_ex.Manager.hpp
    ${SOURCE_DIRECTORY}/Ex/Main_ex.hpp
    ${SOURCE_DIRECTORY}/Ex/Player_ex.hpp
    ${SOURCE_DIRECTORY}/Ex/Pool_ex.hpp
    ${SOURCE_DIRECTORY}/Ex/Seeker_ex.hpp
    ${SOURCE_DIRECTORY}/Ex/Sprite_ex.hpp
    ${SOURCE_DIRECTORY}/Ex/Sprite_ex.Pipeline.hpp
    ${SOURCE_DIRECTORY}/Ex/Sprite_ex.Pool.hpp
    ${SOURCE_DIRECTORY}/Ex/Wanderer_ex.hpp

    ${SOURCE_DIRECTORY}/BlackHole.hpp
    ${SOURCE_DIRECTORY}/BloomComponent.hpp
    ${SOURCE_DIRECTORY}/BloomSettings.hpp
    ${SOURCE_DIRECTORY}/Bullet.hpp
    ${SOURCE_DIRECTORY}/Cursor.hpp
    ${SOURCE_DIRECTORY}/Enemy.hpp
    ${SOURCE_DIRECTORY}/Enemy.Behavior.hpp
    # ${SOURCE_DIRECTORY}/Enemy.Spawner.hpp
    ${SOURCE_DIRECTORY}/Entity.hpp
    ${SOURCE_DIRECTORY}/Entity.Manager.hpp
    ${SOURCE_DIRECTORY}/Game.hpp
    ${SOURCE_DIRECTORY}/Game.Status.hpp
    ${SOURCE_DIRECTORY}/Main.cpp
    ${SOURCE_DIRECTORY}/PlayerShip.hpp
    ${SOURCE_DIRECTORY}/Resources.hpp
    ${SOURCE_DIRECTORY}/Seeker.hpp
    ${SOURCE_DIRECTORY}/Sound.hpp
    # ${SOURCE_DIRECTORY}/tinysound.h
    # ${SOURCE_DIRECTORY}/TinySoundInclude.hpp
    # ${SOURCE_DIRECTORY}/TinySoundInclude.cpp
    ${SOURCE_DIRECTORY}/Wanderer.hpp
)

create_file_group("${INCLUDE_FILES}")
create_file_group("${SOURCE_FILES}")

set(TARGET Example.VK.08.ShapeBlaster)
add_executable(${TARGET} ${INCLUDE_FILES} ${SOURCE_FILES})
target_include_directories(${TARGET} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(${TARGET} Dynamic_Static.Graphics)
set_target_properties(${TARGET} PROPERTIES FOLDER Examples)
add_dependencies(${TARGET} Dynamic_Static.Graphics)
