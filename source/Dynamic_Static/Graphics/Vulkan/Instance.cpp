
/*
================================================================================

  MIT License

  Copyright (c) 2016 Dynamic_Static

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

#include "Dynamic_Static/Graphics/Vulkan/Instance.hpp"
#include "Dynamic_Static/Core/VectorUtilities.hpp"
#include "Dynamic_Static/Graphics/Vulkan/DebugReport.hpp"
#include "Dynamic_Static/Graphics/Vulkan/PhysicalDevice.hpp"

namespace Dynamic_Static {
namespace Graphics {
namespace Vulkan {

    Instance::Instance(
        const dst::Collection<std::string>& layers,
        const dst::Collection<std::string>& extensions,
        VkDebugReportFlagsEXT debugFlags)
        : mLayers(layers.begin(), layers.end())
        , mExtensions(extensions.begin(), extensions.end())
    {
        if (debugFlags) {
            // TODO : Make debug layers configurable...
            mLayers.push_back("VK_LAYER_LUNARG_standard_validation");
            // NOTE : Enabling VK_LAYER_LUNARG_standard_validation enables the following layers...
            //        "VK_LAYER_GOOGLE_threading",
            //        "VK_LAYER_LUNARG_parameter_validation",
            //        "VK_LAYER_LUNARG_object_tracker",
            //        "VK_LAYER_LUNARG_image",
            //        "VK_LAYER_LUNARG_core_validation",
            //        "VK_LAYER_LUNARG_swapchain",
            //        "VK_LAYER_GOOGLE_unique_objects",
            mLayers.push_back("VK_LAYER_LUNARG_api_dump");
            mLayers.push_back("VK_LAYER_LUNARG_monitor");
            mExtensions.push_back(VK_EXT_DEBUG_REPORT_EXTENSION_NAME);
        }

        // NOTE : This code is duplicated in Device.cpp.
        auto validate_requests =
        [](std::vector<std::string>& requests)
        {
            dst::remove_duplicates(requests);
            return dst::convert<std::string, const char*>(
                requests,
                [](const std::string& str)
                {
                    return str.c_str();
                }
            );
        };

        auto requestedLayers = validate_requests(mLayers);
        auto requestedExtensions = validate_requests(mExtensions);

        VkApplicationInfo applicationInfo { };
        applicationInfo.sType = VK_STRUCTURE_TYPE_APPLICATION_INFO;
        applicationInfo.pApplicationName = "Dynamic_Static";
        applicationInfo.applicationVersion = VK_MAKE_VERSION(0, 0, 1);
        applicationInfo.pEngineName = "Dynamic_Static";
        applicationInfo.engineVersion = VK_MAKE_VERSION(0, 0, 1);
        applicationInfo.apiVersion = VK_API_VERSION_1_0;

        VkInstanceCreateInfo instanceInfo { };
        instanceInfo.sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
        instanceInfo.pApplicationInfo = &applicationInfo;
        instanceInfo.enabledLayerCount = static_cast<uint32_t>(requestedLayers.size());
        instanceInfo.ppEnabledLayerNames = requestedLayers.data();
        instanceInfo.enabledExtensionCount = static_cast<uint32_t>(requestedExtensions.size());
        instanceInfo.ppEnabledExtensionNames = requestedExtensions.data();
        Validate(vkCreateInstance(&instanceInfo, nullptr, &mHandle));
        if (debugFlags) {
            mDebugReport.reset(new DebugReport(*this, debugFlags));
        }

        uint32_t physicalDeviceCount;
        Validate(vkEnumeratePhysicalDevices(mHandle, &physicalDeviceCount, nullptr));
        std::vector<VkPhysicalDevice> physicalDeviceHandles(physicalDeviceCount);
        Validate(vkEnumeratePhysicalDevices(mHandle, &physicalDeviceCount, physicalDeviceHandles.data()));

        mPhysicalDevices.reserve(physicalDeviceCount);
        for (const auto& handle : physicalDeviceHandles) {
            std::unique_ptr<PhysicalDevice> physcialDevice;
            physcialDevice.reset(new PhysicalDevice(*this, handle));
            mPhysicalDevices.push_back(std::move(physcialDevice));
        }

        name("Dynamic_Static::Vulkan::Instance");
    }

    Instance::~Instance()
    {
        if (mHandle) {
            mPhysicalDevices.clear();
            mDebugReport.reset();
            vkDestroyInstance(mHandle, nullptr);
        }
    }

    std::shared_ptr<Instance> Instance::make_shared()
    {
        return shared_from_this();
    }

    const dst::Collection<std::unique_ptr<PhysicalDevice>> Instance::physical_devices() const
    {
        return mPhysicalDevices;
    }

    bool Instance::validation_enabled() const
    {
        return !!mDebugReport;
    }

    std::shared_ptr<Instance> Instance::create(
        const dst::Collection<std::string>& layers,
        const dst::Collection<std::string>& extensions,
        VkDebugReportFlagsEXT debugFlags)
    {
        return std::shared_ptr<Instance>(new Instance(layers, extensions, debugFlags));
    }

} // namespace Vulkan
} // namespace Graphics
} // namespace Dynamic_Static
