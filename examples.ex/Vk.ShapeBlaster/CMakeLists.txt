
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
    sourceFiles
        "${CMAKE_CURRENT_LIST_DIR}/Entity.hpp"
        "${CMAKE_CURRENT_LIST_DIR}/Sprite.hpp"
        "${CMAKE_CURRENT_LIST_DIR}/Sprite.Pipeline.hpp"
        "${CMAKE_CURRENT_LIST_DIR}/Sprite.Pool.hpp"
        "${CMAKE_CURRENT_LIST_DIR}/${target}.Main.cpp"
)
