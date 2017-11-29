
get_filename_component(target "${CMAKE_CURRENT_SOURCE_DIR}" NAME)
set(sourcePath "${CMAKE_CURRENT_SOURCE_DIR}/source/")
dst_add_executable_ex(
    target ${target}
    folder examples
    buildDependencies Dynamic_Static.Graphics
    linkLibraries Dynamic_Static.Graphics
    sourceFiles
        ${sourcePath}/BlackHole_ex.hpp
        ${sourcePath}/Bullet_ex.hpp
        ${sourcePath}/Enemy_ex.hpp
        ${sourcePath}/Entity_ex.hpp
        ${sourcePath}/Entity_ex.Manager.hpp
        ${sourcePath}/Main.cpp
        ${sourcePath}/Player_ex.hpp
        ${sourcePath}/Pool_ex.hpp
        ${sourcePath}/Seeker_ex.hpp
        ${sourcePath}/Sprite_ex.hpp
        ${sourcePath}/Sprite_ex.Pipeline.hpp
        ${sourcePath}/Sprite_ex.Pool.hpp
        ${sourcePath}/Wanderer_ex.hpp
)
