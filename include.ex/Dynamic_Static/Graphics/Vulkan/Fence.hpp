
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
    Provides high level control over a Vulkan semaphore.
    */
    class Fence final
        : public Object<VkFence>
        , public SharedObject<Fence>
        , public DeviceChild
    {
    public:
        /*!
        Configuration parameters for Fence construction.
        */
        struct CreateInfo final
            : public VkFenceCreateInfo
        {
            /*!
            Constructs an instance of Fence::CreateInfo.
            */
            inline CreateInfo()
            {
                sType = VK_STRUCTURE_TYPE_FENCE_CREATE_INFO;
                pNext = nullptr;
                flags = 0;
                static_assert(
                    sizeof(Fence::CreateInfo) == sizeof(VkFenceCreateInfo),
                    "sizeof(Semaphore::CreateInfo) != sizeof(VkFenceCreateInfo)"
                );
            }
        };

    private:
        VkFenceCreateFlags mCreateFlags { 0 };

    private:
        /*!
        Constructs an instance of Fence.
        @param [in] device This Fence's Device
        @param [in] createInfo This Fence's Fence::CreateInfo (optional = { })
        */
        Fence(
            const std::shared_ptr<Device>& device,
            Fence::CreateInfo createInfo = { }
        );

    public:
        /*!
        Destroys this instance of Fence.
        */
        ~Fence();

    public:
        /*!
        Gets this Fence's VkFenceCreateFlags.
        @return This Fence's VkFenceCreateFlags
        */
        VkFenceCreateFlags get_create_flags() const;

        /*!
        Causes the calling thread to hold execution until this Fence is signaled.
        @param [in] reset Whether or not to reset this Fence after waiting (optional = true)
        */
        void wait(bool reset = true) const;

    private:
        friend class Device;
    };

} // namespace vk
} // namespace gfx
} // namespace dst
