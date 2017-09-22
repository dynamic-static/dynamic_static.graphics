
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
         * Default parameters for DeubgReport creation.
         */
        static constexpr VkDebugReportCallbackCreateInfoEXT CreateInfo {
            /* sType       */ VK_STRUCTURE_TYPE_DEBUG_REPORT_CALLBACK_CREATE_INFO_EXT,
            /* pNext       */ nullptr,
            /* flags       */ 0,
            /* pfnCallback */ nullptr,
            /* pUserData   */ nullptr,
        };

    private:
        Instance* mInstance { nullptr };
        bool mStandardErrorEnabled { false };

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

        /**
         * Gets a value indicating whether or not this DebugReport's standard error output is enabled.
         * @return Whether or not this DebugReport's standard error output is enabled
         */
        bool standard_error_enabled() const;

        /**
         * Sets a value indicating whether or not this DebugReport's standard error output is enabled.
         * @param [in] standardErrorEnabled Whether or not this DebugReport's standard error output is enabled
         */
        void standard_error_enabled(bool standardErrorEnabled);
    };

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
