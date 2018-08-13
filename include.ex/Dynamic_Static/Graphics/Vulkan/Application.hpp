
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

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    /*
    * Provides high level control over a Vulkan application.
    */
    class Application final
    {
    public:
        /*
        * Configuration parameters for an Application.
        */
        struct Info final
            : public VkApplicationInfo
        {
            /*
            * Consructs an instance of Application::Info.
            */
            Info()
            {
                sType = VK_STRUCTURE_TYPE_APPLICATION_INFO;
                pNext = nullptr;
                pApplicationName = "Dynamic_Static Application";
                applicationVersion = VK_MAKE_VERSION(1, 0, 0);
                pEngineName = "Dynamic_Static";
                engineVersion = VK_MAKE_VERSION(1, 0, 0);
                apiVersion = VK_MAKE_VERSION(1, 1, 0);
            }
        };
    };

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
