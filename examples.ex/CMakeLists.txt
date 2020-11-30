
# ==========================================
#   Copyright (c) 2017-2020 dynamic_static
#     Patrick Purcell
#       Licensed under the MIT license
#     http://opensource.org/licenses/MIT
# ==========================================

macro(dst_add_example target)
    dst_add_executable(
        target ${target}
        folder dynamic_static.graphics/examples
        linkLibraries dynamic_static.graphics
        includeDirectories "${CMAKE_CURRENT_SOURCE_DIR}/"
        sourceFiles "${CMAKE_CURRENT_SOURCE_DIR}/${target}.cpp"
    )
endmacro()
dst_add_example(vk.01.triangle)
dst_add_example(vk.02.vertex-buffer)
dst_add_example(vk.03.uniform-buffer)
dst_add_example(vk.04.texture-mapping)
dst_add_example(vk.05.depth-buffering)
# dst_add_example(vk.06.gltf)
