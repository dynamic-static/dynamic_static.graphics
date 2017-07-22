
/*
================================================================================

  MIT License

  Copyright (c) 2017 Dynamic_Static

  Permission is hereby granted, free of charge, to any person obtaining a copy
  of this software and associated documentation files (the "Software"), to deal
  in the Software without restriction, including without limitation the rights
  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
  copies of the Software, and to permit persons to whom the Software is
  furnished to do so, subject to the following conditions:

  The above copyright notice and this permission notice shall be included in all
  copies or substantial portions of the Software.

  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
  SOFTWARE.

================================================================================
*/

#pragma once

#include "Dynamic_Static/Core/Collection.hpp"
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

    static_assert(
        sizeof(DebugReport::Info) == sizeof(VkDebugReportCallbackCreateInfoEXT),
        "sizeof(DebugReport::Info) must equal sizeof(VkDebugReportCallbackCreateInfoEXT)"
    );

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
