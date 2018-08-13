
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
#include "Dynamic_Static/Graphics/Vulkan/Object.hpp"
#include "Dynamic_Static/Graphics/Vulkan/DeviceChild.hpp"

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    /*
    * Provides high level control over a Vulkan swapchain.
    */
    class SwapchainKHR final
        : public Object<VkSwapchainKHR>
    {
    private:
        
    };

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
