
/*
==========================================
  Copyright (c) 2016-2018 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#include "Dynamic_Static/Graphics/Vulkan/DeviceMemoryResource.hpp"
#include "Dynamic_Static/Graphics/Vulkan/DeviceMemory.hpp"

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    DeviceMemoryResource::DeviceMemoryResource(const std::shared_ptr<Device>& device)
        : DeviceChild(device)
    {
    }

    DeviceMemoryResource::~DeviceMemoryResource()
    {
    }

    const std::shared_ptr<DeviceMemory>& DeviceMemoryResource::get_memory() const
    {
        return mMemory;
    }

    VkDeviceSize DeviceMemoryResource::get_memory_offset() const
    {
        return mMemoryOffset;
    }

    VkDeviceSize DeviceMemoryResource::get_memory_size() const
    {
        return get_memory_requirements().size;
    }

    VkDeviceSize DeviceMemoryResource::get_memory_alignment() const
    {
        return get_memory_requirements().alignment;
    }

    void DeviceMemoryResource::bind_memory(
        const std::shared_ptr<DeviceMemory>& memory,
        VkDeviceSize memoryOffset
    )
    {
        mMemory = memory;
        mMemoryOffset = memoryOffset;
    }

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
