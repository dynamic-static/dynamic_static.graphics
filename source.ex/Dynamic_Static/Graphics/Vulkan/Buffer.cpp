
/*
==========================================
  Copyright (c) 2016-2018 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#include "Dynamic_Static/Graphics/Vulkan/Buffer.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Device.hpp"
#include "Dynamic_Static/Graphics/Vulkan/DeviceMemory.hpp"

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    Buffer::Buffer(
        const std::shared_ptr<Device>& device,
        Buffer::CreateInfo createInfo
    )
        : DeviceMemoryResource(device)
        , mCreateInfo { createInfo }
    {
        set_name("Buffer");
        dst_vk(vkCreateBuffer(get_device(), &createInfo, nullptr, &mHandle));
    }

    Buffer::~Buffer()
    {
        if (mHandle) {
            vkDestroyBuffer(get_device(), mHandle, nullptr);
        }
    }

    VkBufferCreateFlags Buffer::get_create_flags() const
    {
        return mCreateInfo.flags;
    }

    VkBufferUsageFlags Buffer::get_usage_flags() const
    {
        return mCreateInfo.usage;
    }

    VkSharingMode Buffer::get_sharing_mode() const
    {
        return mCreateInfo.sharingMode;
    }

    VkMemoryRequirements Buffer::get_memory_requirements() const
    {
        VkMemoryRequirements memoryRequirements { };
        vkGetBufferMemoryRequirements(get_device(), mHandle, &memoryRequirements);
        return memoryRequirements;
    }

    void Buffer::bind_memory(
        const std::shared_ptr<DeviceMemory>& memory,
        VkDeviceSize memoryOffset
    )
    {
        dst_vk(vkBindBufferMemory(get_device(), mHandle, *memory, memoryOffset));
        DeviceMemoryResource::bind_memory(memory, memoryOffset);
    }

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
