
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

        // /*!
        // TODO : Documentation.
        // */
        // static std::shared_ptr<DeviceMemory> allocate_resource_memory(
        //     DeviceMemoryResource* resource,
        //     VkMemoryPropertyFlags memoryPropertyFlags
        // );
        // 
        // /*!
        // TODO : Documentation.
        // */
        // static std::shared_ptr<DeviceMemory> allocate_resource_memory(
        //     dst::Span<DeviceMemoryResource*> resources,
        //     VkMemoryPropertyFlags memoryPropertyFlags
        // );

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
                bool success = physicalDevice.get_memory_type_index(
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

    private:
        friend class Device;
    };

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
