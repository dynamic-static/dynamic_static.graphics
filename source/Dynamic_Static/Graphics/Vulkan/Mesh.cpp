
/*
==========================================
    Copyright (c) 2017 Dynamic_Static 
    Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#include "Dynamic_Static/Graphics/Vulkan/Mesh.hpp"

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    void Mesh::draw(Command::Buffer& commandBuffer)
    {
        commandBuffer.bind_vertex_buffer(*vertexBuffer);
        commandBuffer.bind_index_buffer(*indexBuffer);
        commandBuffer.draw_indexed(indexCount);
    }

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
