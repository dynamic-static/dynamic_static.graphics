
/*
==========================================
    Copyright (c) 2017 Dynamic_Static 
    Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#include "Dynamic_Static/Graphics/Vulkan/DebugReport.hpp"
#include "Dynamic_Static/Core/ToString.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Instance.hpp"

#include <iostream>
#include <string>

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    static VKAPI_ATTR VkBool32 VKAPI_CALL debug_report_callback(
        VkDebugReportFlagsEXT flags,
        VkDebugReportObjectTypeEXT objectType,
        uint64_t object,
        size_t location,
        int32_t messageCode,
        const char* layerPrefix,
        const char* message,
        void* userData
    );

    DebugReport::DebugReport(Instance& instance, VkDebugReportFlagsEXT flags)
        : mInstance { &instance }
    {
        mInstance->get_function_pointer("vkDebugReportMessageEXT", vkDebugReportMessageEXT);
        mInstance->get_function_pointer("vkCreateDebugReportCallbackEXT", vkCreateDebugReportCallbackEXT);
        mInstance->get_function_pointer("vkDestroyDebugReportCallbackEXT", vkDestroyDebugReportCallbackEXT);

        auto info = CreateInfo;
        info.flags = flags;
        info.pfnCallback = debug_report_callback;
        info.pUserData = this;
        validate(vkCreateDebugReportCallbackEXT(*mInstance, &info, nullptr, &mHandle));
        name("DebugReport");
    }

    DebugReport::~DebugReport()
    {
        if (mHandle) {
            vkDestroyDebugReportCallbackEXT(*mInstance, mHandle, nullptr);
        }
    }

    const Instance& DebugReport::instance() const
    {
        return *mInstance;
    }

    #if defined(DYNAMIC_STATIC_MSVC)
    #pragma warning(push)
    #pragma warning(disable : 4100) // NOTE : unreferenced formal parameter
    #pragma warning(disable : 4189) // NOTE : local variable is initialized but not referenced
    #endif

    VKAPI_ATTR VkBool32 VKAPI_CALL debug_report_callback(
        VkDebugReportFlagsEXT flags,
        VkDebugReportObjectTypeEXT objectType,
        uint64_t object,
        size_t location,
        int32_t messageCode,
        const char* layerPrefix,
        const char* message,
        void* userData
    )
    {
        const auto& debugReport = *static_cast<DebugReport*>(userData);
        thread_local std::string tlStr;
        tlStr.clear();
        if (flags) {
            if (flags & VK_DEBUG_REPORT_INFORMATION_BIT_EXT) {
                tlStr += tlStr.empty() ? std::string() : "|";
                tlStr += "Information";
            }

            if (flags & VK_DEBUG_REPORT_DEBUG_BIT_EXT) {
                tlStr += tlStr.empty() ? std::string() : "|";
                tlStr += "Debug      ";
            }

            if (flags & VK_DEBUG_REPORT_PERFORMANCE_WARNING_BIT_EXT) {
                tlStr += tlStr.empty() ? std::string() : "|";
                tlStr += "Performance";
            }

            if (flags & VK_DEBUG_REPORT_WARNING_BIT_EXT) {
                tlStr += tlStr.empty() ? std::string() : "|";
                tlStr += "Warning    ";
            }

            if (flags & VK_DEBUG_REPORT_ERROR_BIT_EXT) {
                tlStr += tlStr.empty() ? std::string() : "|";
                tlStr += "Error      ";
            }
        } else {
            tlStr = "----";
        }

        tlStr = "{ " + tlStr + " } - " + std::string(layerPrefix) + "[" + dst::to_string(messageCode) + "]-" + std::string(message) + "\n";
        std::cout << tlStr;
        return VK_FALSE;
    }

    #if defined(DYNAMIC_STATIC_MSVC)
    #pragma warning(pop)
    #endif

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
