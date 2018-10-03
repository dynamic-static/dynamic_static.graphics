
# ==========================================
#   Copyright (c) 2018-2018 Dynamic_Static
#     Patrick Purcell
#       Licensed under the MIT license
#     http://opensource.org/licenses/MIT
# ==========================================

macro(CreateExample target)
    DstCreateExecutable(
        target ${target}
        folder Dynamic_Static.Graphics/examples/
        staticLibraries Dynamic_Static.Graphics
        sourceFiles "${CMAKE_CURRENT_LIST_DIR}/${target}.cpp"
    )
endmacro()
CreateExample(Vk.00.PhysicalDevice)
CreateExample(Vk.01.Triangle)
CreateExample(Vk.02.VertexAndIndexBuffers)
CreateExample(Vk.03.UniformBuffer)
CreateExample(Vk.04.PushConstants)
CreateExample(Vk.05.TextureMapping)
CreateExample(Vk.06.DepthBuffering)
CreateExample(Vk.07.OffScreenRendering)
CreateExample(Vk.08.TextRendering)
add_subdirectory(Vk.ShapeBlaster)
