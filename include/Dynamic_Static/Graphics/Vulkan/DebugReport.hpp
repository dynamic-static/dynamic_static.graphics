
/*
==========================================
    Copyright (c) 2017 Dynamic_Static 
    Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#pragma once

#include "Dynamic_Static/Graphics/Vulkan/Defines.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Object.hpp"

#include <array>

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    /**
     * Provides high level control over a Vulkan DebugReportCallback.
     */
    class DebugReport final
        : public Object<VkDebugReportCallbackEXT>
    {
        friend class Instance;

    public:
        /**
         * Configuration paramaters for DebugReport construction.
         */
        struct Info final
            : public VkDebugReportCallbackCreateInfoEXT
        {
            /**
             * Constructs an instnace of DebugReport::Info with default paramaters.
             */
            Info()
            {
                sType = VK_STRUCTURE_TYPE_DEBUG_REPORT_CALLBACK_CREATE_INFO_EXT;
                pNext = nullptr;
                flags = 0;
                pfnCallback = nullptr;
                pUserData = nullptr;
            }
        };

    private:
        Instance* mInstance { nullptr };

    private:
        PFN_vkDebugReportMessageEXT vkDebugReportMessageEXT { nullptr };
        PFN_vkCreateDebugReportCallbackEXT vkCreateDebugReportCallbackEXT { nullptr };
        PFN_vkDestroyDebugReportCallbackEXT vkDestroyDebugReportCallbackEXT { nullptr };

    private:
        DebugReport(Instance& instance, VkDebugReportFlagsEXT flags);

    public:
        /**
         * Destroys this instance of DebugReport.
         */
        ~DebugReport();

    public:
        /**
         * Gets this DebugReport's Instance.
         * @return This DebugReport's Instance
         */
        const Instance& instance() const;
    };

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
