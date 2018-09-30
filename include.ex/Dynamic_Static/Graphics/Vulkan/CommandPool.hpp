
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

namespace dst {
namespace gfx {
namespace vk {

    /*!
    Provides high level control over a Vulkan command pool.
    */
    class CommandPool final
        : public Object<VkCommandPool>
        , public SharedObject<CommandPool>
        , public DeviceChild
    {
    public:
        /*!
        Configuration parameters for CommandPool creation.
        */
        struct CreateInfo final
            : public VkCommandPoolCreateInfo
        {
            /*!
            Constructs an instance of CommandPool::CreateInfo.
            */
            CreateInfo()
            {
                sType = VK_STRUCTURE_TYPE_COMMAND_POOL_CREATE_INFO;
                pNext = nullptr;
                flags = 0;
                queueFamilyIndex = 0;
                static_assert(
                    sizeof(CommandPool::CreateInfo) == sizeof(VkCommandPoolCreateInfo),
                    "sizeof(CommandPool::CreateInfo) != sizeof(VkCommandPoolCreateInfo)"
                );
            }
        };

    private:
        /*!
        Constructs an instance of CommandPool.
        @param [in] device This CommandPool's Device
        @param [in] createInfo This CommandPool's CommandPool::CreateInfo (optional = { })
        */
        CommandPool(
            const std::shared_ptr<Device>& device,
            CommandPool::CreateInfo createInfo = { }
        );

    public:
        /*!
        Destroys this instance of CommandPool.
        */
        ~CommandPool();

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

} // namespace vk
} // namespace gfx
} // namespace dst
