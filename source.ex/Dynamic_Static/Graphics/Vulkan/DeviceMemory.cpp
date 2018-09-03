
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
            dst_vk(vkMapMemory(get_device(), mHandle, offset, size, flags, &mMappedPtr));
        }
        return mMappedPtr;
    }

    void DeviceMemory::unmap()
    {
        if (mMappedPtr) {
            vkUnmapMemory(get_device(), mHandle);
            mMappedPtr = nullptr;
        }
    }

    void* DeviceMemory::get_mapped_ptr() const
    {
        return mMappedPtr;
    }

    std::shared_ptr<DeviceMemory> DeviceMemory::allocate_resource_memory(
        DeviceMemoryResource* resource,
        VkMemoryPropertyFlags memoryPropertyFlags
    )
    {
        std::array<DeviceMemoryResource*, 1> resources { resource };
        return allocate_resource_memory(resources, memoryPropertyFlags);
    }

    std::shared_ptr<DeviceMemory> DeviceMemory::allocate_resource_memory(
        dst::Span<DeviceMemoryResource*> resources,
        VkMemoryPropertyFlags memoryPropertyFlags
    )
    {
        std::shared_ptr<DeviceMemory> memory;
        if (!resources.empty()) {
            uint32_t memoryTypeBits = -1;
            DeviceMemory::AllocateInfo allocateInfo { };
            for (auto resource : resources) {
                if (resource) {
                    auto memoryRequirements = resource->get_memory_requirements();
                    auto minmax = std::minmax(memoryRequirements.alignment, allocateInfo.allocationSize);
                    auto padding = minmax.first - minmax.first % minmax.second;
                    allocateInfo.allocationSize += padding + memoryRequirements.size;
                    // TODO : Validate that alignment is handled correctly...
                    memoryTypeBits &= memoryRequirements.memoryTypeBits;
                }
            }
            assert(memoryTypeBits && "DeviceMemoryResources have incompatible VkMemoryRequirements");
            auto& device = resources[0]->get_device();
            const auto& physicalDevice = device.get_physical_device();
            auto success = physicalDevice.get_memory_type_index(
                memoryTypeBits, memoryPropertyFlags, &allocateInfo.memoryTypeIndex
            );
            assert(success && "No DeviceMemoryResource compatible VkMemoryType supports the requested VkMemoryPropertyFlags");
            memory = device.allocate<DeviceMemory>(allocateInfo);
            VkDeviceSize offset = 0;
            for (auto resource : resources) {
                if (resource) {
                    resource->bind_memory(memory, offset);
                    auto memoryRequirements = resource->get_memory_requirements();
                    auto minmax = std::minmax(memoryRequirements.alignment, allocateInfo.allocationSize);
                    auto padding = minmax.first - minmax.first % minmax.second;
                    // TODO : Validate that alignment is handled correctly...
                    offset += padding + memoryRequirements.size;
                }
            }
        }
        return memory;
    }

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
