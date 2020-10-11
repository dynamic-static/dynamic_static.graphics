
/*
==========================================
  Copyright (c) 2017-2020 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#include "dynamic_static/graphics/vulkan/application.hpp"
#include "dynamic_static/core/algorithm.hpp"

#include <optional>

#include <iostream>

namespace dst {
namespace vk {

Application::Application(const sys::Window::Info& windowInfo, const Info& applicationInfo)
    : gfx::Application(windowInfo)
{
    ////////////////////////////////////////////////////////////////////////////////
    // Create VkInstance
    VkInstanceCreateInfo instanceCreateInfo { };
    instanceCreateInfo.sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
    instanceCreateInfo.enabledLayerCount = (uint32_t)applicationInfo.instanceLayers.size();
    instanceCreateInfo.ppEnabledLayerNames = !applicationInfo.instanceLayers.empty() ? applicationInfo.instanceLayers.data() : nullptr;
    instanceCreateInfo.enabledExtensionCount = (uint32_t)applicationInfo.instanceExtensions.size();
    instanceCreateInfo.ppEnabledExtensionNames = !applicationInfo.instanceExtensions.empty() ? applicationInfo.instanceExtensions.data() : nullptr;
    dst_vk(create<Managed<VkInstance>>(&instanceCreateInfo, nullptr, &mInstance));
    mPhysicalDevices = mInstance.get<std::vector<Managed<VkPhysicalDevice>>>();
    std::sort(mPhysicalDevices.begin(), mPhysicalDevices.end(),
        [](const Managed<VkPhysicalDevice>& lhs, const Managed<VkPhysicalDevice>& rhs)
        {
            auto rankPhysicalDevice = [](const auto& physicalDevice)
            {
                VkPhysicalDeviceProperties physicalDeviceProperties { };
                vkGetPhysicalDeviceProperties(physicalDevice, &physicalDeviceProperties);
                VkPhysicalDeviceFeatures physicalDeviceFeatures { };
                uint32_t deviceTypeScore = 0;
                switch (physicalDeviceProperties.deviceType) {
                case VK_PHYSICAL_DEVICE_TYPE_DISCRETE_GPU:   ++deviceTypeScore;
                case VK_PHYSICAL_DEVICE_TYPE_INTEGRATED_GPU: ++deviceTypeScore;
                case VK_PHYSICAL_DEVICE_TYPE_VIRTUAL_GPU:    ++deviceTypeScore;
                case VK_PHYSICAL_DEVICE_TYPE_CPU:            ++deviceTypeScore;
                case VK_PHYSICAL_DEVICE_TYPE_OTHER:          ++deviceTypeScore;
                }
                return deviceTypeScore;
            };
            return rankPhysicalDevice(rhs) < rankPhysicalDevice(lhs);
        }
    );

    ////////////////////////////////////////////////////////////////////////////////
    // Create VkDevice
    uint32_t queueFamilyCount = 0;
    vkGetPhysicalDeviceQueueFamilyProperties(mPhysicalDevices[0], &queueFamilyCount, nullptr);
    std::vector<VkQueueFamilyProperties> queueFamilyProperties(queueFamilyCount);
    vkGetPhysicalDeviceQueueFamilyProperties(mPhysicalDevices[0], &queueFamilyCount, queueFamilyProperties.data());
    auto getQueueFamilyIndex = [&queueFamilyProperties](VkQueueFlags queueFlags)
    {
        std::optional<uint32_t> queueFamilyIndex;
        for (uint32_t i = 0; i < queueFamilyProperties.size(); ++i) {
            if (queueFamilyProperties[i].queueCount && (queueFamilyProperties[i].queueFlags & queueFlags)) {
                queueFamilyIndex = i;
                if (queueFamilyProperties[i].queueFlags == queueFlags) {
                    break;
                }
            }
        }
        return queueFamilyIndex;
    };
    auto generalQueueFamilyIndex = getQueueFamilyIndex(VK_QUEUE_COMPUTE_BIT | VK_QUEUE_GRAPHICS_BIT | VK_QUEUE_TRANSFER_BIT);
    auto computeQueueFamilyIndex = generalQueueFamilyIndex.has_value() ? generalQueueFamilyIndex : getQueueFamilyIndex(VK_QUEUE_COMPUTE_BIT);
    auto graphicsQueueFamilyIndex = generalQueueFamilyIndex.has_value() ? generalQueueFamilyIndex : getQueueFamilyIndex(VK_QUEUE_GRAPHICS_BIT);
    auto transferQueueFamilyIndex = generalQueueFamilyIndex.has_value() ? generalQueueFamilyIndex : getQueueFamilyIndex(VK_QUEUE_TRANSFER_BIT);
    assert(graphicsQueueFamilyIndex.has_value());
    assert(transferQueueFamilyIndex.has_value());
    std::vector<VkDeviceQueueCreateInfo> deviceQueueCreateInfos;
    auto addDeviceQueueCreateInfo = [&deviceQueueCreateInfos](std::optional<uint32_t> queueFamilyIndex)
    {
        if (queueFamilyIndex.has_value()) {
            for (const auto& deviceQueueCreateInfo : deviceQueueCreateInfos) {
                if (deviceQueueCreateInfo.queueFamilyIndex == queueFamilyIndex) {
                    return;
                }
            }
            VkDeviceQueueCreateInfo deviceQueueCreateInfo { };
            deviceQueueCreateInfo.sType = VK_STRUCTURE_TYPE_DEVICE_QUEUE_CREATE_INFO;
            deviceQueueCreateInfo.queueFamilyIndex = queueFamilyIndex.value();
            deviceQueueCreateInfo.queueCount = 1;
            static const float DefaultQueuePriority = 0.0f;
            deviceQueueCreateInfo.pQueuePriorities = &DefaultQueuePriority;
            deviceQueueCreateInfos.push_back(deviceQueueCreateInfo);
        }
    };
    addDeviceQueueCreateInfo(computeQueueFamilyIndex);
    addDeviceQueueCreateInfo(graphicsQueueFamilyIndex);
    addDeviceQueueCreateInfo(transferQueueFamilyIndex);
    VkDeviceCreateInfo deviceCreateInfo { };
    deviceCreateInfo.sType = VK_STRUCTURE_TYPE_DEVICE_CREATE_INFO;
    deviceCreateInfo.queueCreateInfoCount = (uint32_t)deviceQueueCreateInfos.size();
    deviceCreateInfo.pQueueCreateInfos = !deviceQueueCreateInfos.empty() ? deviceQueueCreateInfos.data() : nullptr;
    deviceCreateInfo.enabledExtensionCount = (uint32_t)applicationInfo.deviceExtensions.size();
    deviceCreateInfo.ppEnabledExtensionNames = !applicationInfo.deviceExtensions.empty() ? applicationInfo.deviceExtensions.data() : nullptr;
    dst_vk(create<Managed<VkDevice>>(mPhysicalDevices[0], &deviceCreateInfo, nullptr, &mDevice));
    auto getDeviceQueue = [this](std::optional<uint32_t> queueFamilyIndex)
    {
        if (queueFamilyIndex.has_value()) {
            for (const auto& queue : mDevice.get < std::vector<Managed<VkQueue>>>()) {
                if (queue.get<Managed<VkDeviceQueueCreateInfo>>()->queueFamilyIndex == queueFamilyIndex.value()) {
                    return queue;
                }
            }
        }
        return Managed<VkQueue> { };
    };
    mComputeQueue = getDeviceQueue(computeQueueFamilyIndex);
    mGraphicsQueue = getDeviceQueue(graphicsQueueFamilyIndex);
    mTransferQueue = getDeviceQueue(transferQueueFamilyIndex);

    ////////////////////////////////////////////////////////////////////////////////
    // Create VkSurfaceKHR
    #ifdef VK_USE_PLATFORM_WIN32_KHR
    VkWin32SurfaceCreateInfoKHR surfaceCreateInfo { };
    surfaceCreateInfo.sType = VK_STRUCTURE_TYPE_WIN32_SURFACE_CREATE_INFO_KHR;
    surfaceCreateInfo.hinstance = GetModuleHandle(NULL);
    surfaceCreateInfo.hwnd = (HWND)mWindow.get_hwnd();
    dst_vk(create<Managed<VkSurfaceKHR>>(mInstance, &surfaceCreateInfo, nullptr, &mSurface));
    #endif
    VkBool32 presentationSupported = VK_FALSE;
    dst_vk(vkGetPhysicalDeviceSurfaceSupportKHR(mPhysicalDevices[0], graphicsQueueFamilyIndex.value(), mSurface, &presentationSupported));
    assert(presentationSupported);
    VkSurfaceCapabilitiesKHR surfaceCapabilities { };
    dst_vk(vkGetPhysicalDeviceSurfaceCapabilitiesKHR(mPhysicalDevices[0], mSurface, &surfaceCapabilities));
    assert(surfaceCapabilities.currentExtent.width);
    assert(surfaceCapabilities.currentExtent.height);
    uint32_t surfaceFormatCount = 0;
    dst_vk(vkGetPhysicalDeviceSurfaceFormatsKHR(mPhysicalDevices[0], mSurface, &surfaceFormatCount, nullptr));
    assert(surfaceFormatCount);
    std::vector<VkSurfaceFormatKHR> surfaceFormats(surfaceFormatCount);
    dst_vk(vkGetPhysicalDeviceSurfaceFormatsKHR(mPhysicalDevices[0], mSurface, &surfaceFormatCount, surfaceFormats.data()));
    auto surfaceFormat = surfaceFormats[0];
    if (surfaceFormats.size() == 1 && surfaceFormats[0].format == VK_FORMAT_UNDEFINED) {
        surfaceFormat.colorSpace = VK_COLOR_SPACE_SRGB_NONLINEAR_KHR;
        surfaceFormat.format = VK_FORMAT_R8G8B8A8_UNORM;
    } else {
        for (const auto& format : surfaceFormats) {
            if (format.format == VK_FORMAT_R8G8B8A8_UNORM) {
                surfaceFormat = format;
                break;
            }
        }
    }
    uint32_t presentModeCount = 0;
    dst_vk(vkGetPhysicalDeviceSurfacePresentModesKHR(mPhysicalDevices[0], mSurface, &presentModeCount, nullptr));
    assert(presentModeCount);
    std::vector<VkPresentModeKHR> presentModes(presentModeCount);
    dst_vk(vkGetPhysicalDeviceSurfacePresentModesKHR(mPhysicalDevices[0], mSurface, &presentModeCount, presentModes.data()));
    auto surfacePresentMode = VK_PRESENT_MODE_FIFO_KHR;
    for (const auto& presentMode : presentModes) {
        if (presentMode == VK_PRESENT_MODE_MAILBOX_KHR) {
            surfacePresentMode = presentMode;
            break;
        }
    }

    ////////////////////////////////////////////////////////////////////////////////
    // Create VkSwapchainKHR
    VkSwapchainCreateInfoKHR swapchainCreateInfo { };
    swapchainCreateInfo.sType = VK_STRUCTURE_TYPE_SWAPCHAIN_CREATE_INFO_KHR;
    swapchainCreateInfo.surface = mSurface;
    swapchainCreateInfo.minImageCount = surfaceCapabilities.maxImageCount ? clamp(surfaceCapabilities.minImageCount + 1, surfaceCapabilities.minImageCount, surfaceCapabilities.maxImageCount) : surfaceCapabilities.minImageCount + 1;
    swapchainCreateInfo.imageFormat = surfaceFormat.format;
    swapchainCreateInfo.imageColorSpace = surfaceFormat.colorSpace;
    swapchainCreateInfo.imageExtent = surfaceCapabilities.currentExtent;
    swapchainCreateInfo.imageArrayLayers = 1;
    swapchainCreateInfo.imageUsage = VK_IMAGE_USAGE_COLOR_ATTACHMENT_BIT;
    if (surfaceCapabilities.supportedUsageFlags & VK_IMAGE_USAGE_TRANSFER_SRC_BIT) {
        swapchainCreateInfo.imageUsage |= VK_IMAGE_USAGE_TRANSFER_SRC_BIT;
    }
    swapchainCreateInfo.preTransform = surfaceCapabilities.currentTransform;
    if (surfaceCapabilities.supportedTransforms & VK_SURFACE_TRANSFORM_IDENTITY_BIT_KHR) {
        swapchainCreateInfo.preTransform = VK_SURFACE_TRANSFORM_IDENTITY_BIT_KHR;
    }
    swapchainCreateInfo.compositeAlpha = VK_COMPOSITE_ALPHA_OPAQUE_BIT_KHR;
    swapchainCreateInfo.presentMode = surfacePresentMode;
    swapchainCreateInfo.clipped = VK_TRUE;
    dst_vk(create<Managed<VkSwapchainKHR>>(mDevice, &swapchainCreateInfo, nullptr, &mSwapchain));
}

void Application::setup()
{
}

void Application::teardown()
{
}

void Application::pre_update(const dst::Clock& clock, const dst::sys::Input& input)
{
}

void Application::update(const dst::Clock& clock, const dst::sys::Input& input)
{
}

void Application::post_update(const dst::Clock& clock, const dst::sys::Input& input)
{
}

void Application::pre_render(const dst::Clock& clock)
{
}

void Application::render(const dst::Clock& clock)
{
}

void Application::post_render(const dst::Clock& clock)
{
}

} // namespace vk
} // namespace dst
