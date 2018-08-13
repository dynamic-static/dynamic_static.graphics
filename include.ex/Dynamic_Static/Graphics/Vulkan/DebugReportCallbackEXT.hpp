
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
#include "Dynamic_Static/Graphics/Vulkan/InstanceChild.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Object.hpp"

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    class DebugReportCallbackEXT final
        : public Object<VkDebugReportCallbackEXT>
        , public InstanceChild
    {
    public:
        /*
        * Configuration parameters for DebugReportCallbackEXT construction.
        */
        struct CreateInfo final
            : public VkDebugReportCallbackCreateInfoEXT
        {
            /*
            * Constructs an instance of DebugReportCallbackEXT::CreateInfo.
            */
            CreateInfo()
            {
                sType = VK_STRUCTURE_TYPE_DEBUG_REPORT_CALLBACK_CREATE_INFO_EXT;
                pNext = nullptr;
                flags = 0;
                pfnCallback = nullptr;
                pUserData = nullptr;
            }
        };

    private:
        PFN_vkDebugReportMessageEXT mPfnVkDebugReportMessageEXT { nullptr };
        PFN_vkCreateDebugReportCallbackEXT mPfnVkCreateDebugReportCallbackEXT { nullptr };
        PFN_vkDestroyDebugReportCallbackEXT mPfnVkDestroyDebugReportCallbackEXT { nullptr };

    private:
        /*
        * Constructs an instance of DebugReportCallbackEXT.
        * @param [in] instance This DebugReportCallbackEXT's Instance
        * @param [in] createInfo This DebugReportCallbackEXT's DebugReportCallbackEXT::CreateInfo
        */
        DebugReportCallbackEXT(
            Instance* instance,
            CreateInfo createInfo
        );

    public:
        /*
        * Destroys this instance of DebugReportCallbackEXT.
        */
        ~DebugReportCallbackEXT();

    private:
        friend class Instance;
    };

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
