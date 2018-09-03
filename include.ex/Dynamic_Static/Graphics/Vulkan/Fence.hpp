
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

    private:
        friend class Device;
    };

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
