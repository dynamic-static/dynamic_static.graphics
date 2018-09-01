
/*
==========================================
  Copyright (c) 2016-2018 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#pragma once

#include "Dynamic_Static/Graphics/Vulkan/Defines.hpp"

#include <memory>

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    /*!
    Provides high level control over a Vulkan device memory bound object.
    */
    class DeviceMemoryBoundObject
    {
    private:
        std::shared_ptr<DeviceMemory> mMemory;
        VkDeviceSize mMemoryOffset { 0 };

    public:
        /*!
        Destroys this instance of DeviceMemoryBoundObject.
        */
        virtual ~DeviceMemoryBoundObject();

    public:
        /*!
        Gets this DeviceMemoryBoundObject's bound DeviceMemory allocation.
        @return This DeviceMemoryBoundObject's bound DeviceMemory allocation
        */
        const std::shared_ptr<DeviceMemory>& get_memory() const;

        /*!
        Gets this DeviceMemoryBoundObject's offset in bytes from the start of its bound DeviceMemory allocation.
        @return This DeviceMemoryBoundObject's offset in bytes from the start of its bound DeviceMemory allocation
        */
        VkDeviceSize get_memory_offset() const;

        /*!
        Gets this DeviceMemoryBoundObject's VkMemoryRequirements.
        @return This DeviceMemoryBoundObject's VkMemoryRequirements
        */
        virtual VkMemoryRequirements get_memory_requirements() const = 0;

        /*!
        Binds this DeviceMemoryBoundObject to a given DeviceMemory allocation.
        @param [in] memory The DeviceMemory allocation to bind this DeviceMemoryBoundObject to
        @param [in] memoryOffset The offset in bytes from the start of the given DeviceMemory allocation at which to bind this DeviceMemoryBoundObject (optional = 0)
        */
        virtual void bind_memory(
            const std::shared_ptr<DeviceMemory>& memory,
            VkDeviceSize memoryOffset = 0
        ) = 0;
    };

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
