
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
#include "Dynamic_Static/Graphics/Vulkan/Object.hpp"

#include <memory>

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    /*!
    Provides high level control over Vulkan device memory.
    */
    class DeviceMemory final
        : public Object<VkDeviceMemory>
        , public SharedObject<DeviceMemory>
        , public DeviceChild
    {
    public:
        /*!
        Configuration parameters for DeviceMemory allocation.
        */
        struct AllocateInfo final
            : public VkMemoryAllocateInfo
        {
            /*!
            Constructs an instance of DeviceMemory::AllocateInfo.
            */
            inline AllocateInfo()
            {
                sType = VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO;
                pNext = nullptr;
                allocationSize = 0;
                memoryTypeIndex = 0;
                static_assert(
                    sizeof(DeviceMemory::AllocateInfo) == sizeof(VkMemoryAllocateInfo),
                    "sizeof(DeviceMemory::AllocateInfo) != sizeof(VkMemoryAllocateInfo)"
                );
            }
        };

    private:
        void* mMappedPtr { nullptr };

    private:
        /*!
        Constructs an instance of DeviceMemory.
        @param [in] device This DeviceMemory's Device
        @param [in] createInfo This DeviceMemory's DeviceMemory::AllocateInfo
        */
        DeviceMemory(
            const std::shared_ptr<Device>& device,
            DeviceMemory::AllocateInfo allocateInfo
        );

    public:
        /*!
        Destroys this instance of DeviceMemory.
        */
        ~DeviceMemory();

    public:
        /*!
        Maps this DeviceMemory into application address space.
        @param [in] offset The byte offset from the beginning of this DeviceMemory's allocation (optional = 0)
        @param [in] size The size in bytes of the memory range to map (optional = VK_WHOLE_SIZE)
        \n NOTE : Pass VK_WHOLE_SIZE to map from offset to the end of the allocation
        @param [in] flags Reserved for future use
        @return This DeviceMemory's mapped ptr
        */
        void* map(
            VkDeviceSize offset = 0,
            VkDeviceSize size = VK_WHOLE_SIZE,
            VkMemoryMapFlags flags = 0
        );

        /*!
        Unmaps this DeviceMemory.
        */
        void unmap();

        /*!
        Gets this DeviceMemory's mapped ptr.
        @return This DeviceMemory's mapped ptr
        */
        void* get_mapped_ptr() const;

        /*!
        TODO : Documentation.
        */
        static std::shared_ptr<DeviceMemory> allocate_resource_memory(
            DeviceMemoryResource* resource,
            VkMemoryPropertyFlags memoryPropertyFlags
        );

        /*!
        TODO : Documentation.
        */
        static std::shared_ptr<DeviceMemory> allocate_resource_memory(
            dst::Span<DeviceMemoryResource*> resources,
            VkMemoryPropertyFlags memoryPropertyFlags
        );

    private:
        friend class Device;
    };

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
