
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
#include "Dynamic_Static/Graphics/Vulkan/PhysicalDevice.hpp"

#include <memory>

namespace dst {
namespace gfx {
namespace vk {

    /*!
    Provides high level control over Vulkan device memory.
    */
    class DeviceMemory final
        : public Object<VkDeviceMemory>
        , public SharedObject<DeviceMemory>
        , public DeviceChild
    {
    private:
        friend class Device;

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
        VkDeviceSize mAllocationSize { 0 };
        void* mMappedPtr { nullptr };
        VkDeviceSize mMappedOffset { 0 };
        VkDeviceSize mMappedSize { 0 };

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
        Gets this DeviceMemory's allocation size in bytes.
        @return This DeviceMemory's allocation size in bytes
        */
        VkDeviceSize get_allocation_size() const;

        /*!
        Gets this DeviceMemory's mapped ptr.
        @return This DeviceMemory's mapped ptr
        */
        void* get_mapped_ptr() const;

        /*!
        Gets the offset in bytes of this DeviceMemory's currently mapped range.
        @return The offset in bytes of this DeviceMemory's currently mapped range.
        */
        VkDeviceSize get_mapped_offset() const;

        /*!
        Gets the size in bytes of this DeviceMemory's currently mapped range.
        @return The size in bytes of this DeviceMemory's currently mapped range.
        */
        VkDeviceSize get_mapped_size() const;

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
        TODO : Documentation.
        */
        template <typename ResourceType>
        static inline std::shared_ptr<DeviceMemory> allocate_resource_memory(
            ResourceType& resource,
            VkMemoryPropertyFlags memoryPropertyFlags
        )
        {
            return allocate_multi_resource_memory(
                std::array<ResourceType, 1> { resource },
                memoryPropertyFlags
            );
        }

        /*!
        TODO : Documentation.
        */
        template <typename ResourceCollectionType>
        static inline std::shared_ptr<DeviceMemory> allocate_multi_resource_memory(
            ResourceCollectionType& resources,
            VkMemoryPropertyFlags memoryPropertyFlags
        )
        {
            auto getPadding =
            [](VkDeviceSize size, VkDeviceSize alignment)
            {
                auto padding = size % alignment;
                return padding ? alignment - padding : padding;
            };

            std::shared_ptr<DeviceMemory> memory;
            if (!resources.empty()) {
                uint32_t memoryTypeBits = -1;
                DeviceMemory::AllocateInfo allocateInfo { };
                for (auto resource : resources) {
                    if (resource) {
                        auto memoryRequirements = resource->get_memory_requirements();
                        auto size = allocateInfo.allocationSize;
                        auto alignment = memoryRequirements.alignment;
                        allocateInfo.allocationSize += getPadding(size, alignment);
                        allocateInfo.allocationSize += memoryRequirements.size;
                        memoryTypeBits &= memoryRequirements.memoryTypeBits;
                    }
                }
                assert(memoryTypeBits && "DeviceMemoryResources have incompatible VkMemoryRequirements");
                auto& device = resources[0]->get_device();
                const auto& physicalDevice = device.get_physical_device();
                bool success = physicalDevice.get_memory_type_index(
                    memoryTypeBits, memoryPropertyFlags, &allocateInfo.memoryTypeIndex
                );
                assert(success && "No available VkMemoryType supports the necessary VkMemoryRequirements and requested VkMemoryPropertyFlags");
                memory = device.allocate<DeviceMemory>(allocateInfo);
                VkDeviceSize offset = 0;
                for (auto resource : resources) {
                    if (resource) {
                        auto memoryRequirements = resource->get_memory_requirements();
                        offset += getPadding(offset, memoryRequirements.alignment);
                        resource->bind_memory(memory, offset);
                        offset += memoryRequirements.size;
                    }
                }
            }
            return memory;
        }
    };

} // namespace vk
} // namespace gfx
} // namespace dst
