
get_filename_component(target "${CMAKE_CURRENT_SOURCE_DIR}" NAME)
set(includePath "${CMAKE_CURRENT_SOURCE_DIR}/include/")
set(includeFiles
)

set(sourcePath "${CMAKE_CURRENT_SOURCE_DIR}/source/")
set(sourceFiles
    ${sourcePath}/Ex/BlackHole_ex.hpp
    ${sourcePath}/Ex/Bullet_ex.hpp
    ${sourcePath}/Ex/Enemy_ex.hpp
    ${sourcePath}/Ex/Entity_ex.hpp
    ${sourcePath}/Ex/Entity_ex.Manager.hpp
    ${sourcePath}/Ex/Main_ex.hpp
    ${sourcePath}/Ex/Player_ex.hpp
    ${sourcePath}/Ex/Pool_ex.hpp
    ${sourcePath}/Ex/Seeker_ex.hpp
    ${sourcePath}/Ex/Sprite_ex.hpp
    ${sourcePath}/Ex/Sprite_ex.Pipeline.hpp
    ${sourcePath}/Ex/Sprite_ex.Pool.hpp
    ${sourcePath}/Ex/Wanderer_ex.hpp

    ${sourcePath}/BlackHole.hpp
    ${sourcePath}/BloomComponent.hpp
    ${sourcePath}/BloomSettings.hpp
    ${sourcePath}/Bullet.hpp
    ${sourcePath}/Cursor.hpp
    ${sourcePath}/Enemy.hpp
    ${sourcePath}/Enemy.Behavior.hpp
    # ${sourcePath}/Enemy.Spawner.hpp
    ${sourcePath}/Entity.hpp
    ${sourcePath}/Entity.Manager.hpp
    ${sourcePath}/Game.hpp
    ${sourcePath}/Game.Status.hpp
    ${sourcePath}/Main.cpp
    ${sourcePath}/PlayerShip.hpp
    ${sourcePath}/Resources.hpp
    ${sourcePath}/Seeker.hpp
    ${sourcePath}/Sound.hpp
    # ${sourcePath}/tinysound.h
    # ${sourcePath}/TinySoundInclude.hpp
    # ${sourcePath}/TinySoundInclude.cpp
    ${sourcePath}/Wanderer.hpp
)

add_executable(${target} "${includeFiles}" "${sourceFiles}")
dst_setup_target(${target} "${includeFiles}" "${sourceFiles}")
target_link_libraries(${target} Dynamic_Static.Graphics)
set_target_properties(${target} PROPERTIES FOLDER Examples)
add_dependencies(${target} Dynamic_Static.Graphics)
