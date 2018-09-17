
# ==========================================
#   Copyright (c) 2017-2018 Dynamic_Static
#     Patrick Purcell
#       Licensed under the MIT license
#     http://opensource.org/licenses/MIT
# ==========================================

set(target Vk.ShapeBlaster)
DstCreateExecutable(
    target ${target}
    folder Dynamic_Static.Graphics/examples/
    staticLibraries Dynamic_Static.Graphics
    includeDirectories "${CMAKE_CURRENT_LIST_DIR}"
    includeFiles
        "${CMAKE_CURRENT_LIST_DIR}/BlackHole.hpp"
        "${CMAKE_CURRENT_LIST_DIR}/Bullet.hpp"
        "${CMAKE_CURRENT_LIST_DIR}/Enemy.hpp"
        "${CMAKE_CURRENT_LIST_DIR}/Enemy.Spawner.hpp"
        "${CMAKE_CURRENT_LIST_DIR}/Entity.hpp"
        "${CMAKE_CURRENT_LIST_DIR}/Entity.Manager.hpp"
        "${CMAKE_CURRENT_LIST_DIR}/Player.hpp"
        "${CMAKE_CURRENT_LIST_DIR}/Sprite.hpp"
        "${CMAKE_CURRENT_LIST_DIR}/Sprite.Pool.hpp"
    sourceFiles
        "${CMAKE_CURRENT_LIST_DIR}/Sprite.cpp"
        "${CMAKE_CURRENT_LIST_DIR}/${target}.Main.cpp"
)
