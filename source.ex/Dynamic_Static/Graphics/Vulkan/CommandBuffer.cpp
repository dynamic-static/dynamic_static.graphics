
/*
==========================================
  Copyright (c) 2016-2018 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#include "Dynamic_Static/Graphics/Vulkan/CommandBuffer.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Device.hpp"
#include "Dynamic_Static/Graphics/Vulkan/CommandPool.hpp"

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    CommandBuffer::CommandBuffer(
        const std::shared_ptr<CommandPool>& commandPool,
        CommandBuffer::AllocateInfo allocateInfo
    )
        : CommandPoolChild(commandPool)
    {
        set_name("CommandBuffer");
        allocateInfo.commandPool = *commandPool;
        allocateInfo.commandBufferCount = 1;
        dst_vk(vkAllocateCommandBuffers(get_command_pool().get_device(), &allocateInfo, &mHandle));
    }

    CommandBuffer::~CommandBuffer()
    {
        if (mHandle) {
            vkFreeCommandBuffers(get_command_pool().get_device(), get_command_pool(), 1, &mHandle);
        }
    }

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
