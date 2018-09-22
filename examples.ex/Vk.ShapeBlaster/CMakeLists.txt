
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
        "${includePath}/Components/Transform.Component.hpp"
        "${includePath}/BlackHole.hpp"
        "${includePath}/Bullet.hpp"
        "${includePath}/Enemy.hpp"
        "${includePath}/Enemy.Spawner.hpp"
        "${includePath}/Entity.hpp"
        "${includePath}/Entity.Component.hpp"
        "${includePath}/Entity.Component.System.hpp"
        "${includePath}/Entity.Manager.hpp"
        "${includePath}/Grid.hpp"
        "${includePath}/Player.hpp"
        "${includePath}/ScoreBoard.hpp"
        "${includePath}/Sprite.hpp"
        "${includePath}/Sprite.Pool.hpp"
    sourceFiles
        "${sourcePath}/Entity.cpp"
        "${sourcePath}/Sprite.cpp"
        "${sourcePath}/${target}.Main.cpp"
)
