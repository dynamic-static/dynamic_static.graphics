
/*
==========================================
  Copyright (c) 2016-2018 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#include "Dynamic_Static/Graphics/Vulkan/DebugReportCallbackEXT.hpp"
#include "Dynamic_Static/Graphics/Vulkan/Instance.hpp"

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    #if defined(DYNAMIC_STATIC_MSVC)
    #pragma warning(push)
    #pragma warning(disable : 4100) // NOTE : unreferenced formal parameter
    #pragma warning(disable : 4189) // NOTE : local variable is initialized but not referenced
    #endif

    static VKAPI_ATTR VkBool32 VKAPI_CALL debug_report_callback(
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
        std::cout << "{";
        bool flagCombo = false;
        if (flags & VK_DEBUG_REPORT_INFORMATION_BIT_EXT) {
            std::cout << "INFORMATION";
        }
        if (flags & VK_DEBUG_REPORT_WARNING_BIT_EXT) {
            std::cout << "WARNING";
            #ifdef DYNAMIC_STATIC_MSVC
            __debugbreak();
            #endif
        }
        if (flags & VK_DEBUG_REPORT_PERFORMANCE_WARNING_BIT_EXT) {
            std::cout << "PERFORMANCE_WARNING";
            #ifdef DYNAMIC_STATIC_MSVC
            __debugbreak();
            #endif
        }
        if (flags & VK_DEBUG_REPORT_ERROR_BIT_EXT) {
            std::cout << "ERROR";
            #ifdef DYNAMIC_STATIC_MSVC
            __debugbreak();
            #endif
        }
        if (flags & VK_DEBUG_REPORT_DEBUG_BIT_EXT) {
            std::cout << "DEBUG";
        }
        std::cout << "} - " << layerPrefix << "[" << std::to_string(messageCode) << "] - " << message << std::endl;
        return VK_FALSE;
    }

    #if defined(DYNAMIC_STATIC_MSVC)
    #pragma warning(pop)
    #endif

    DebugReportCallbackEXT::DebugReportCallbackEXT(
        Instance* instance,
        CreateInfo createInfo
    )
        : InstanceChild(instance)
    {
        set_name("DebugReportCallbackEXT");
        get_instance().get_function_pointer("vkDebugReportMessageEXT", mPfnVkDebugReportMessageEXT);
        get_instance().get_function_pointer("vkCreateDebugReportCallbackEXT", mPfnVkCreateDebugReportCallbackEXT);
        get_instance().get_function_pointer("vkDestroyDebugReportCallbackEXT", mPfnVkDestroyDebugReportCallbackEXT);
        createInfo.pfnCallback = debug_report_callback;
        createInfo.pUserData = this;
        dst_vk(mPfnVkCreateDebugReportCallbackEXT(get_instance(), &createInfo, nullptr, &mHandle));
    }

    DebugReportCallbackEXT::~DebugReportCallbackEXT()
    {
        if (mHandle) {
            mPfnVkDestroyDebugReportCallbackEXT(get_instance(), mHandle, nullptr);
        }
    }

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
