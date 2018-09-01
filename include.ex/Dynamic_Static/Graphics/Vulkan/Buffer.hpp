
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
#include "Dynamic_Static/Graphics/Vulkan/DeviceChild.hpp"
#include "Dynamic_Static/Graphics/Vulkan/DeviceMemoryBoundObject.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Object.hpp"

#include <memory>

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    /*!
    Provides high level control over a Vulkan buffer.
    */
    class Buffer final
        : public Object<VkBuffer>
        , public SharedObject<Buffer>
        , public DeviceMemoryBoundObject
        , public DeviceChild
    {
    public:
        /*!
        Configuration parameters for Buffer construction.
        */
        struct CreateInfo final
            : public VkBufferCreateInfo
        {
            /*!
            Constructs an instance of Buffer::CreateInfo.
            */
            CreateInfo()
            {
                sType = VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO;
                pNext = nullptr;
                flags = 0;
                size = 0;
                usage = 0;
                sharingMode = VK_SHARING_MODE_EXCLUSIVE;
                queueFamilyIndexCount = 0;
                pQueueFamilyIndices = nullptr;
                static_assert(
                    sizeof(Buffer::CreateInfo) == sizeof(VkBufferCreateInfo),
                    "sizeof(Buffer::CreateInfo) != sizeof(VkBufferCreateInfo)"
                );
            }
        };

    private:
        std::shared_ptr<DeviceMemory> mMemory;
        VkDeviceSize offset { 0 };

    private:
        /*!
        Constructs an instance of Buffer.
        @param [in] device This Buffer's Device
        @param [in] createInfo This Buffer's Buffer::CreateInfo
        */
        Buffer(
            const std::shared_ptr<Device>& device,
            Buffer::CreateInfo createInfo
        );

    public:
        /*!
        Destroys this instance of Buffer.
        */
        ~Buffer();

    public:
        /*!
        Gets this Buffer's VkMemoryRequirements.
        @return This Buffer's VkMemoryRequirements
        */
        VkMemoryRequirements get_memory_requirements() const override;

        /*!
        Binds this Buffer to a given DeviceMemory allocation.
        @param [in] memory The DeviceMemory allocation to bind this Buffer to
        @param [in] memoryOffset The offset in bytes from the start of the given DeviceMemory allocation at which to bind this Buffer (optional = 0)
        */
        void bind_memory(
            const std::shared_ptr<DeviceMemory>& memory,
            VkDeviceSize memoryOffset = 0
        ) override;

    private:
        friend class Device;
    };

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
