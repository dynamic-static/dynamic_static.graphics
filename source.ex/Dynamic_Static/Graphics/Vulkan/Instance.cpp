
/*
==========================================
  Copyright (c) 2016-2018 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#pragma once

#include "Dynamic_Static/Graphics/Vulkan/Instance.hpp"
#include "Dynamic_Static/Graphics/Vulkan/DebugReportCallbackEXT.hpp"
#include "Dynamic_Static/Graphics/Vulkan/PhysicalDevice.hpp"

#include <set>

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    Instance::Instance(
        CreateInfo createInfo,
        VkDebugReportFlagsEXT debugReportFlags
    )
    {
        set_name("Instance");
        std::set<std::string> enabledLayersSet;
        mEnabledLayers.reserve(createInfo.enabledLayerCount);
        for (uint32_t i = 0; i < createInfo.enabledLayerCount; ++i) {
            if (enabledLayersSet.insert(createInfo.ppEnabledLayerNames[i]).second) {
                mEnabledLayers.push_back(createInfo.ppEnabledLayerNames[i]);
            }
        }
        if (debugReportFlags) {
            auto standardValidation = "VK_LAYER_LUNARG_standard_validation";
            if (enabledLayersSet.find(standardValidation) == enabledLayersSet.end()) {
                mEnabledLayers.push_back(standardValidation);
            }
        }
        std::set<std::string> enabledExtensionsSet;
        mEnabledExtensions.reserve(createInfo.enabledExtensionCount);
        for (uint32_t i = 0; i < createInfo.enabledExtensionCount; ++i) {
            if (enabledExtensionsSet.insert(createInfo.ppEnabledExtensionNames[i]).second) {
                mEnabledExtensions.push_back(createInfo.ppEnabledExtensionNames[i]);
            }
        }

        auto StrToCStr = [](const std::string& str) { return str.c_str(); };
        auto requestedLayers = dst::convert<std::string, const char*>(mEnabledLayers, StrToCStr);
        createInfo.enabledLayerCount = static_cast<uint32_t>(requestedLayers.size());
        createInfo.ppEnabledLayerNames = requestedLayers.data();
        dst_vk(vkCreateInstance(&createInfo, nullptr, &mHandle));
        if (debugReportFlags) {
            DebugReportCallbackEXT::CreateInfo debugReportCreateInfo { };
            debugReportCreateInfo.flags = debugReportFlags;
            mDebugReport.reset(new DebugReportCallbackEXT(this, debugReportCreateInfo));
        }

        uint32_t physicalDeviceCount;
        dst_vk(vkEnumeratePhysicalDevices(mHandle, &physicalDeviceCount, nullptr));
        std::vector<VkPhysicalDevice> physicalDevices(physicalDeviceCount);
        dst_vk(vkEnumeratePhysicalDevices(mHandle, &physicalDeviceCount, physicalDevices.data()));
        mPhysicalDevices.reserve(physicalDeviceCount);
        for (const auto& physicalDevice : physicalDevices) {
            mPhysicalDevices.push_back(
                std::unique_ptr<PhysicalDevice>(new PhysicalDevice(this, physicalDevice))
            );
        }
    }

    Instance::~Instance()
    {
        if (mHandle) {
            mDebugReport.reset();
            mPhysicalDevices.clear();
            vkDestroyInstance(mHandle, nullptr);
        }
    }

    DebugReportCallbackEXT* Instance::get_debug_report()
    {
        return mDebugReport.get();
    }

    const DebugReportCallbackEXT* Instance::get_debug_report() const
    {
        return mDebugReport.get();
    }

    const std::vector<std::unique_ptr<PhysicalDevice>>& Instance::get_physical_devices() const
    {
        return mPhysicalDevices;
    }

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
