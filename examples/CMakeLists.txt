
#==========================================
#    Licensed under the MIT license
#    Copyright (c) 2017 Dynamic_Static
#       Patrick Purcell
#    http://opensource.org/licenses/MIT
#==========================================

macro(create_example target)
    dst_add_executable(
        target ${target}
        folder examples
        buildDependencies Dynamic_Static.Graphics
        linkLibraries Dynamic_Static.Graphics
        sourceFiles "${CMAKE_CURRENT_SOURCE_DIR}/${target}.cpp"
    )
endmacro()

create_example(VK.00.PhysicalDevice)
create_example(VK.01.Triangle)
create_example(VK.02.VertexBuffer)
create_example(VK.03.UniformBuffer)
create_example(VK.04.TextureMapping)
create_example(VK.05.DepthBuffering)
create_example(VK.06.OffscreenRendering)
create_example(VK.07.ComputeFluid2D)
add_subdirectory(VK.08.ShapeBlaster/)
