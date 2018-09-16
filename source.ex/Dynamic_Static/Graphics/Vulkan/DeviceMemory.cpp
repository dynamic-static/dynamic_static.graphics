
/*
==========================================
  Copyright (c) 2016-2018 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#include "Dynamic_Static/Graphics/Vulkan/DeviceMemory.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Device.hpp"
#include "Dynamic_Static/Graphics/Vulkan/DeviceMemoryResource.hpp"
#include "Dynamic_Static/Graphics/Vulkan/PhysicalDevice.hpp"

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    DeviceMemory::DeviceMemory(
        const std::shared_ptr<Device>& device,
        DeviceMemory::AllocateInfo createInfo
    )
        : DeviceChild(device)
    {
        set_name("DeviceMemory");
        dst_vk(vkAllocateMemory(get_device(), &createInfo, nullptr, &mHandle));
    }

    DeviceMemory::~DeviceMemory()
    {
        if (mHandle) {
            vkFreeMemory(get_device(), mHandle, nullptr);
        }
    }

    void* DeviceMemory::map(
        VkDeviceSize offset,
        VkDeviceSize size,
        VkMemoryMapFlags flags
    )
    {
        if (!mMappedPtr) {
            mMappedOffset = offset;
            mMappedSize = size;
            dst_vk(vkMapMemory(get_device(), mHandle, mMappedOffset, mMappedSize, flags, &mMappedPtr));
        }
        return mMappedPtr;
    }

    void DeviceMemory::unmap()
    {
        if (mMappedPtr) {
            vkUnmapMemory(get_device(), mHandle);
            mMappedPtr = nullptr;
            mMappedOffset = 0;
            mMappedSize = 0;
        }
    }

    void* DeviceMemory::get_mapped_ptr() const
    {
        return mMappedPtr;
    }

    VkDeviceSize DeviceMemory::get_mapped_offset() const
    {
        return mMappedOffset;
    }

    VkDeviceSize DeviceMemory::get_mapped_size() const
    {
        return mMappedSize;
    }

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
