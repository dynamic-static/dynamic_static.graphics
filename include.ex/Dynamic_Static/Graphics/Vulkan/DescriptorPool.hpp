
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
    Provides high level control over a Vulkan descriptor pool.
    */
    class DescriptorPool final
        : public Object<VkDescriptorPool>
        , public SharedObject<DescriptorPool>
        , public DeviceChild
    {
    public:
        /*!
        Configuration parameters for DescriptorPool construction.
        */
        struct CreateInfo final
            : public VkDescriptorPoolCreateInfo
        {
            /*!
            Constructs an instance of DescriptorPool::CreateInfo.
            */
            inline CreateInfo()
            {
                sType = VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_CREATE_INFO;
                pNext = nullptr;
                flags = 0;
                maxSets = 0;
                poolSizeCount = 0;
                pPoolSizes = nullptr;
                static_assert(
                    sizeof(DescriptorPool::CreateInfo) == sizeof(VkDescriptorPoolCreateInfo),
                    "sizeof(DescriptorPool::CreateInfo) != sizeof(VkDescriptorPoolCreateInfo)"
                );
            }
        };

    private:
        /*!
        Constructs an instance of DescriptorPool.
        @param [in] device This DescriptorPool's Device
        @param [in] createInfo This DescriptorPool's DescriptorPool::CreateInfo (optional = { })
        */
        DescriptorPool(
            const std::shared_ptr<Device>& device,
            DescriptorPool::CreateInfo createInfo = { }
        );

    public:
        /*!
        Destroys this instance of DescriptorPool.
        */
        ~DescriptorPool();

    public:
        /*!
        Allocates a new object of a given type.
        @param <ObjectType> The type of object to allocate
        @param <Args> The construction arguments for the object to allocate
        @return The newly allocated object
        */
        template <typename ObjectType, typename ...Args>
        inline std::shared_ptr<ObjectType> allocate(Args&&... args)
        {
            return std::shared_ptr<ObjectType>(
                new ObjectType(get_shared_ptr(), std::forward<Args>(args)...)
            );
        }

    private:
        friend class Device;
    };

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
