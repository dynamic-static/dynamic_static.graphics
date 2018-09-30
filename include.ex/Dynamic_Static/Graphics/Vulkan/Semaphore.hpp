
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
    class Semaphore final
        : public Object<VkSemaphore>
        , public SharedObject<Semaphore>
        , public DeviceChild
    {
    public:
        /*!
        Configuration parameters for Semaphore construction.
        */
        struct CreateInfo final
            : public VkSemaphoreCreateInfo
        {
            /*!
            Constructs an instance of Semaphore::CreateInfo.
            */
            CreateInfo()
            {
                sType = VK_STRUCTURE_TYPE_SEMAPHORE_CREATE_INFO;
                pNext = nullptr;
                flags = 0;
                static_assert(
                    sizeof(Semaphore::CreateInfo) == sizeof(VkSemaphoreCreateInfo),
                    "sizeof(Semaphore::CreateInfo) != sizeof(VkSemaphoreCreateInfo)"
                );
            }
        };

    private:
        /*!
        Constructs an instance of Semaphore.
        @param [in] device This Semaphore's Device
        @param [in] createInfo This Semaphore's Semaphore::CreateInfo (optional = { })
        */
        Semaphore(
            const std::shared_ptr<Device>& device,
            Semaphore::CreateInfo createInfo = { }
        );

    public:
        /*!
        Destroys this instance of Semaphore.
        */
        ~Semaphore();

    private:
        friend class Device;
    };

} // namespace vk
} // namespace gfx
} // namespace dst
