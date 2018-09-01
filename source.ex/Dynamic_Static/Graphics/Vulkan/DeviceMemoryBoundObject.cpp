
/*
==========================================
  Copyright (c) 2016-2018 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#include "Dynamic_Static/Graphics/Vulkan/DeviceMemoryBoundObject.hpp"
#include "Dynamic_Static/Graphics/Vulkan/DeviceMemory.hpp"

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    DeviceMemoryBoundObject::~DeviceMemoryBoundObject()
    {
    }

    const std::shared_ptr<DeviceMemory>& DeviceMemoryBoundObject::get_memory() const
    {
        return mMemory;
    }

    VkDeviceSize DeviceMemoryBoundObject::get_memory_offset() const
    {
        return mMemoryOffset;
    }

    void DeviceMemoryBoundObject::bind_memory(
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
