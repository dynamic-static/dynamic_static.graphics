
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

#include <array>
#include <iostream>
#include <optional>

namespace dst {
namespace vk {

static VKAPI_ATTR VkBool32 VKAPI_CALL debug_utils_messenger_callback(
    VkDebugUtilsMessageSeverityFlagBitsEXT messageSeverity,
    VkDebugUtilsMessageTypeFlagsEXT messageTypes,
    const VkDebugUtilsMessengerCallbackDataEXT* pCallbackData,
    void* pUserData
)
{
    std::cout << '\n' << pCallbackData->pMessage << '\n';
    return VK_FALSE;
}

Application::Application(const sys::Window::Info& windowInfo, Info applicationInfo)
    : gfx::Application(windowInfo)
{
    bool enableValidation = false;
    #if 1
    enableValidation = true;
    uint32_t layerPropertyCount = 0;
    dst_vk(vkEnumerateInstanceLayerProperties(&layerPropertyCount, nullptr));
    std::vector<VkLayerProperties> layerProperties(layerPropertyCount);
    dst_vk(vkEnumerateInstanceLayerProperties(&layerPropertyCount, layerProperties.data()));
    applicationInfo.instanceLayers.push_back("VK_LAYER_KHRONOS_validation");
    applicationInfo.instanceExtensions.push_back(VK_EXT_DEBUG_UTILS_EXTENSION_NAME);
    #endif

    ////////////////////////////////////////////////////////////////////////////////
    // Create VkInstance
    VkInstanceCreateInfo instanceCreateInfo { };
    instanceCreateInfo.sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
    instanceCreateInfo.enabledLayerCount = (uint32_t)applicationInfo.instanceLayers.size();
    instanceCreateInfo.ppEnabledLayerNames = !applicationInfo.instanceLayers.empty() ? applicationInfo.instanceLayers.data() : nullptr;
    instanceCreateInfo.enabledExtensionCount = (uint32_t)applicationInfo.instanceExtensions.size();
    instanceCreateInfo.ppEnabledExtensionNames = !applicationInfo.instanceExtensions.empty() ? applicationInfo.instanceExtensions.data() : nullptr;
    auto vkResult = dst_vk(create<Managed<VkInstance>>(&instanceCreateInfo, nullptr, &mInstance));
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
    if (enableValidation) {
        auto pfn_vkCreateDebugUtilsMessengerEXT = (PFN_vkCreateDebugUtilsMessengerEXT)vkGetInstanceProcAddr(mInstance, "vkCreateDebugUtilsMessengerEXT");
        if (pfn_vkCreateDebugUtilsMessengerEXT) {
            VkDebugUtilsMessengerCreateInfoEXT debugUtilsMessengerCreateInfo { };
            debugUtilsMessengerCreateInfo.sType = VK_STRUCTURE_TYPE_DEBUG_UTILS_MESSENGER_CREATE_INFO_EXT;
            debugUtilsMessengerCreateInfo.messageSeverity =
                VK_DEBUG_UTILS_MESSAGE_SEVERITY_VERBOSE_BIT_EXT |
                // VK_DEBUG_UTILS_MESSAGE_SEVERITY_INFO_BIT_EXT |
                VK_DEBUG_UTILS_MESSAGE_SEVERITY_WARNING_BIT_EXT |
                VK_DEBUG_UTILS_MESSAGE_SEVERITY_ERROR_BIT_EXT;
            debugUtilsMessengerCreateInfo.messageType =
                VK_DEBUG_UTILS_MESSAGE_TYPE_GENERAL_BIT_EXT |
                VK_DEBUG_UTILS_MESSAGE_TYPE_VALIDATION_BIT_EXT |
                VK_DEBUG_UTILS_MESSAGE_TYPE_PERFORMANCE_BIT_EXT;
            debugUtilsMessengerCreateInfo.pfnUserCallback = debug_utils_messenger_callback;
            dst_vk(pfn_vkCreateDebugUtilsMessengerEXT(mInstance, &debugUtilsMessengerCreateInfo, nullptr, &mVkDebugUtilsMessenger));
        }
    }

    ////////////////////////////////////////////////////////////////////////////////
    // Create VkDevice
    uint32_t queueFamilyCount = 0;
    vkGetPhysicalDeviceQueueFamilyProperties(mPhysicalDevices[0], &queueFamilyCount, nullptr);
    std::vector<VkQueueFamilyProperties> queueFamilyProperties(queueFamilyCount);
    vkGetPhysicalDeviceQueueFamilyProperties(mPhysicalDevices[0], &queueFamilyCount, queueFamilyProperties.data());
    auto getQueueFamilyIndex = [&queueFamilyProperties](VkQueueFlags queueFlags) -> std::optional<uint32_t>
    {
        std::optional<uint32_t> queueFamilyIndex;
        VkQueueFlags selectedQueueFamilyFlags = 0;
        for (uint32_t queueFamily_i = 0; queueFamily_i < queueFamilyProperties.size(); ++queueFamily_i) {
            // NOTE : First check that queueFamilyProperties[queueFamily_i] has queues...
            if (queueFamilyProperties[queueFamily_i].queueCount) {
                //  ...then check if queueFamilyProperties[queueFamily_i].queueFlags is an exact
                //  match for queueFlags, if so return queueFamily_i...
                if (queueFamilyProperties[queueFamily_i].queueFlags == queueFlags) {
                    return queueFamily_i;
                }
                //  ...if queueFamilyProperties[queueFamily_i].queueFlags doesn't exactly match
                //  queueFlags, check if it's a better match than any encountered thus far.  If
                //  queueFamilyIndex isn't set or queueFamilyProperties[i].queueFlags is less
                //  than the best match thus far, check that each set queueFlags bit is also set
                //  in queueFamilyProperties[queueFamily_i].queueFlags.  If each necessary bit
                //  is set in queueFamilyProperties[queueFamily_i].queueFlags then this is the
                //  best match encountered thus far, if we don't find an exact match then
                //  we'll evetually return queueFamilyIndex.
                if (!queueFamilyIndex || queueFamilyProperties[queueFamily_i].queueFlags < selectedQueueFamilyFlags) {
                    bool suitable = true;
                    for (size_t flagBit_i = 0; flagBit_i < sizeof(VkQueueFlags) * 8; ++flagBit_i) {
                        auto queueFlag = queueFlags & (1 << flagBit_i);
                        if (queueFlag && !(queueFamilyProperties[queueFamily_i].queueFlags & queueFlag)) {
                            suitable = false;
                            break;
                        }
                    }
                    if (suitable) {
                        queueFamilyIndex = queueFamily_i;
                        selectedQueueFamilyFlags = queueFamilyProperties[queueFamily_i].queueFlags;
                    }
                }
            }
        }
        return queueFamilyIndex;
    };
    auto generalQueueFamilyIndex = getQueueFamilyIndex(VK_QUEUE_COMPUTE_BIT | VK_QUEUE_GRAPHICS_BIT | VK_QUEUE_TRANSFER_BIT);
    auto computeQueueFamilyIndex = generalQueueFamilyIndex.has_value() ? generalQueueFamilyIndex : getQueueFamilyIndex(VK_QUEUE_COMPUTE_BIT);
    auto graphicsQueueFamilyIndex = generalQueueFamilyIndex.has_value() ? generalQueueFamilyIndex : getQueueFamilyIndex(VK_QUEUE_GRAPHICS_BIT);
    auto transferQueueFamilyIndex = generalQueueFamilyIndex.has_value() ? generalQueueFamilyIndex : getQueueFamilyIndex(VK_QUEUE_TRANSFER_BIT);
    assert(generalQueueFamilyIndex.has_value() && "TODO : Actually setup support for multiple queues");
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

    ////////////////////////////////////////////////////////////////////////////////
    // Create VkRenderPass
    VkAttachmentDescription colorAttachmentDescription { };
    colorAttachmentDescription.format = swapchainCreateInfo.imageFormat;
    colorAttachmentDescription.samples = VK_SAMPLE_COUNT_1_BIT;
    colorAttachmentDescription.loadOp = VK_ATTACHMENT_LOAD_OP_CLEAR;
    colorAttachmentDescription.storeOp = VK_ATTACHMENT_STORE_OP_STORE;
    colorAttachmentDescription.stencilLoadOp = VK_ATTACHMENT_LOAD_OP_DONT_CARE;
    colorAttachmentDescription.stencilStoreOp = VK_ATTACHMENT_STORE_OP_DONT_CARE;
    colorAttachmentDescription.initialLayout = VK_IMAGE_LAYOUT_UNDEFINED;
    colorAttachmentDescription.finalLayout = VK_IMAGE_LAYOUT_PRESENT_SRC_KHR;
    VkAttachmentReference colorAttachmentReference { };
    colorAttachmentReference.attachment = 0;
    colorAttachmentReference.layout = VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL;
    std::array<VkFormat, 3> depthFormats {
        VK_FORMAT_D32_SFLOAT,
        VK_FORMAT_D32_SFLOAT_S8_UINT,
        VK_FORMAT_D24_UNORM_S8_UINT
    };
    auto depthFormat = VK_FORMAT_UNDEFINED;
    for (const auto& format : depthFormats) {
        VkFormatProperties formatProperties { };
        vkGetPhysicalDeviceFormatProperties(mPhysicalDevices[0], format, &formatProperties);
        if (formatProperties.optimalTilingFeatures & VK_FORMAT_FEATURE_DEPTH_STENCIL_ATTACHMENT_BIT) {
            depthFormat = format;
            break;
        }
    }
    assert(depthFormat != VK_FORMAT_UNDEFINED);
    VkAttachmentDescription depthAttachmentDescription { };
    depthAttachmentDescription.format = depthFormat;
    depthAttachmentDescription.samples = VK_SAMPLE_COUNT_1_BIT;
    depthAttachmentDescription.loadOp = VK_ATTACHMENT_LOAD_OP_CLEAR;
    depthAttachmentDescription.storeOp = VK_ATTACHMENT_STORE_OP_DONT_CARE;
    depthAttachmentDescription.stencilLoadOp = VK_ATTACHMENT_LOAD_OP_DONT_CARE;
    depthAttachmentDescription.stencilStoreOp = VK_ATTACHMENT_STORE_OP_DONT_CARE;
    depthAttachmentDescription.initialLayout = VK_IMAGE_LAYOUT_UNDEFINED;
    depthAttachmentDescription.finalLayout = VK_IMAGE_LAYOUT_DEPTH_STENCIL_ATTACHMENT_OPTIMAL;
    VkAttachmentReference depthAttachmentReference { };
    depthAttachmentReference.attachment = 1;
    depthAttachmentReference.layout = VK_IMAGE_LAYOUT_DEPTH_STENCIL_ATTACHMENT_OPTIMAL;
    std::array<VkAttachmentDescription, 2> attachmentDescriptions {
        colorAttachmentDescription,
        depthAttachmentDescription,
    };
    VkSubpassDescription subpassDescription { };
    subpassDescription.pipelineBindPoint = VK_PIPELINE_BIND_POINT_GRAPHICS;
    subpassDescription.colorAttachmentCount = 1;
    subpassDescription.pColorAttachments = &colorAttachmentReference;
    subpassDescription.pDepthStencilAttachment = false ? &depthAttachmentReference : nullptr;
    VkRenderPassCreateInfo renderPassCreateInfo { };
    renderPassCreateInfo.sType = VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO;
    renderPassCreateInfo.attachmentCount = false ? 2 : 1;
    renderPassCreateInfo.pAttachments = attachmentDescriptions.data();
    renderPassCreateInfo.subpassCount = 1;
    renderPassCreateInfo.pSubpasses = &subpassDescription;
    dst_vk(create<Managed<VkRenderPass>>(mDevice, &renderPassCreateInfo, nullptr, &mRenderPass));

    ////////////////////////////////////////////////////////////////////////////////
    // Create VkSwapchainKHR RenderTargets
    const auto& swapchainImages = mSwapchain.get<std::vector<Managed<VkImage>>>();
    mRenderTargets.reserve(swapchainImages.size());
    for (const auto& image : swapchainImages) {
        mRenderTargets.emplace_back(mRenderPass, image);
    }

    ////////////////////////////////////////////////////////////////////////////////
    // Create VkCommandPool and VkCommandBuffers
    VkCommandPoolCreateInfo commandPoolCreateInfo { };
    commandPoolCreateInfo.sType = VK_STRUCTURE_TYPE_COMMAND_POOL_CREATE_INFO;
    commandPoolCreateInfo.flags = VK_COMMAND_POOL_CREATE_RESET_COMMAND_BUFFER_BIT;
    commandPoolCreateInfo.queueFamilyIndex = graphicsQueueFamilyIndex.value();
    Managed<VkCommandPool> commandPool;
    dst_vk(create<Managed<VkCommandPool>>(mDevice, &commandPoolCreateInfo, nullptr, &commandPool));
    VkCommandBufferAllocateInfo commandBufferAllocateInfo { };
    commandBufferAllocateInfo.sType = VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO;
    commandBufferAllocateInfo.commandPool = commandPool;
    commandBufferAllocateInfo.level = VK_COMMAND_BUFFER_LEVEL_PRIMARY;
    commandBufferAllocateInfo.commandBufferCount = (uint32_t)mSwapchain.get<std::vector<Managed<VkImage>>>().size();
    mCommandBuffers = std::vector<Managed<VkCommandBuffer>>(commandBufferAllocateInfo.commandBufferCount);
    dst_vk(allocate<Managed<VkCommandBuffer>>(mDevice, &commandBufferAllocateInfo, mCommandBuffers.data()));

    ////////////////////////////////////////////////////////////////////////////////
    // Create VkSemaphores
    VkSemaphoreCreateInfo semaphoreCreateInfo { };
    semaphoreCreateInfo.sType = VK_STRUCTURE_TYPE_SEMAPHORE_CREATE_INFO;
    dst_vk(create<Managed<VkSemaphore>>(mDevice, &semaphoreCreateInfo, nullptr, &mImageAcquiredSemaphore));
    dst_vk(create<Managed<VkSemaphore>>(mDevice, &semaphoreCreateInfo, nullptr, &mImageRenderedSemaphore));
}

void Application::setup()
{
}

void Application::teardown()
{
    if (mVkDebugUtilsMessenger) {
        auto pfn_vkDestroyDebugUtilsMessengerEXT = (PFN_vkDestroyDebugUtilsMessengerEXT)vkGetInstanceProcAddr(mInstance, "vkDestroyDebugUtilsMessengerEXT");
        if (pfn_vkDestroyDebugUtilsMessengerEXT) {
            pfn_vkDestroyDebugUtilsMessengerEXT(mInstance, mVkDebugUtilsMessenger, nullptr);
        }
    }
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
