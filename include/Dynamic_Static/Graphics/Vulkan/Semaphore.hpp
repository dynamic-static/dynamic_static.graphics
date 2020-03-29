
#if 0
/*
==========================================
    Copyright (c) 2017 Dynamic_Static
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

    /**
     * Provides high level control over a Vulkan Semaphore.
     */
    class Semaphore final
        : public Object<VkSemaphore>
        , public detail::DeviceChild
    {
        friend class Device;

    private:
        Semaphore(const std::shared_ptr<Device>& device);

    public:
        /**
         * Destroys this instance of Semaphore.
         */
        ~Semaphore();
    };

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
#endif
