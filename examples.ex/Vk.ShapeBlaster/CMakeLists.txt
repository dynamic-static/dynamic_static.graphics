
# ==========================================
#   Copyright (c) 2017-2018 Dynamic_Static
#     Patrick Purcell
#       Licensed under the MIT license
#     http://opensource.org/licenses/MIT
# ==========================================

set(target Vk.ShapeBlaster)
set(includeDirectory "${CMAKE_CURRENT_LIST_DIR}/include/")
set(includePath "${includeDirectory}/ShapeBlaster/")
set(sourcePath "${CMAKE_CURRENT_LIST_DIR}/source/ShapeBlaster/")
DstCreateExecutable(
    target ${target}
    folder Dynamic_Static.Graphics/examples/
    staticLibraries Dynamic_Static.Graphics
    includeDirectories "${includeDirectory}"
    includeFiles
        "${includePath}/BlackHole.hpp"
        "${includePath}/Bullet.hpp"
        "${includePath}/Enemy.hpp"
        "${includePath}/Entity.hpp"
        "${includePath}/Entity.Manager.hpp"
        "${includePath}/Entity.Pool.hpp"
        "${includePath}/Entity.Spawner.hpp"
        "${includePath}/GameInfo.hpp"
        "${includePath}/Grid.hpp"
        "${includePath}/Player.hpp"
        "${includePath}/Pool.hpp"
        "${includePath}/ScoreBoard.hpp"
        "${includePath}/Seeker.hpp"
        "${includePath}/Sprite.hpp"
        "${includePath}/Sprite.Pool.hpp"
        "${includePath}/Wanderer.hpp"
    sourceFiles
        "${sourcePath}/Entity.cpp"
        "${sourcePath}/Sprite.cpp"
        "${sourcePath}/${target}.Main.cpp"
)
