
/*
==========================================
  Copyright (c) 2016-2018 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#include "Dynamic_Static/Graphics/Vulkan/Mesh.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Buffer.hpp"
#include "Dynamic_Static/Graphics/Vulkan/CommandBuffer.hpp"

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    void Mesh::record_draw_cmds(const CommandBuffer& commandBuffer)
    {
        VkDeviceSize offset = 0;
        vkCmdBindVertexBuffers(commandBuffer, 0, 1, &vertexBuffer->get_handle(), &offset);
        vkCmdBindIndexBuffer(commandBuffer, *indexBuffer, 0, indexType);
        vkCmdDrawIndexed(commandBuffer, indexCount, 1, 0, 0, 0);
    }

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
