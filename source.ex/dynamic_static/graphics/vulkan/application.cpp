
/*
==========================================
  Copyright (c) 2017-2020 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#include "dynamic_static/graphics/vulkan/application.hpp"
#include "dynamic_static/graphics/vulkan/physical-device-utilities.hpp"
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

const Managed<VkInstance>& Application::get_instance() const
{
    assert(mInstance && "TODO : Better error handling");
    return mInstance;
}

const std::vector<Managed<VkPhysicalDevice>>& Application::get_physical_devices() const
{
    assert(!mPhysicalDevices.empty() && "TODO : Better error handling");
    return mPhysicalDevices;
}

const Managed<VkPhysicalDevice>& Application::get_physical_device() const
{
    assert(!mPhysicalDevices.empty() && "TODO : Better error handling");
    assert(mPhysicalDevices[0] && "TODO : Better error handling");
    return mPhysicalDevices[0];
}

const std::vector<Managed<VkDevice>>& Application::get_devices() const
{
    assert(!mDevices.empty() && "TODO : Better error handling");
    return mDevices;
}

const Managed<VkDevice>& Application::get_device() const
{
    assert(!mDevices.empty() && "TODO : Better error handling");
    assert(mDevices[0] && "TODO : Better error handling");
    return mDevices[0];
}

const Managed<VkQueue>& Application::get_general_queue() const
{
    assert(mGeneralQueue && "TODO : Better error handling");
    return mGeneralQueue;
}

const Managed<VkQueue>& Application::get_compute_queue() const
{
    assert(mComputeQueue && "TODO : Better error handling");
    return mComputeQueue;
}

const Managed<VkQueue>& Application::get_graphics_queue() const
{
    assert(mGraphicsQueue && "TODO : Better error handling");
    return mGraphicsQueue;
}

const Managed<VkQueue>& Application::get_transfer_queue() const
{
    assert(mTransferQueue && "TODO : Better error handling");
    return mTransferQueue;
}

const Managed<VkSurfaceKHR>& Application::get_surface() const
{
    assert(mSurface && "TODO : Better error handling");
    return mSurface;
}

VkSurfaceFormatKHR Application::get_surface_format() const
{
    uint32_t surfaceFormatCount = 0;
    if (dst_vk(vkGetPhysicalDeviceSurfaceFormatsKHR(get_physical_device(), get_surface(), &surfaceFormatCount, nullptr)) == VK_SUCCESS) {
        // TODO : Scratchpad allocator...
        std::vector<VkSurfaceFormatKHR> surfaceFormats(surfaceFormatCount);
        if (surfaceFormatCount && dst_vk(vkGetPhysicalDeviceSurfaceFormatsKHR(get_physical_device(), get_surface(), &surfaceFormatCount, surfaceFormats.data())) == VK_SUCCESS) {
            if (surfaceFormats.size() == 1 && surfaceFormats[0].format == VK_FORMAT_UNDEFINED) {
                return { VK_FORMAT_R8G8B8A8_UNORM, VK_COLOR_SPACE_SRGB_NONLINEAR_KHR };
            }
            for (const auto& surfaceFormat : surfaceFormats) {
                if (surfaceFormat.format == VK_FORMAT_R8G8B8A8_UNORM) {
                    return surfaceFormat;
                }
            }
            return surfaceFormats[0];
        }
    }
    return { };
}

VkPresentModeKHR Application::get_surface_present_mode() const
{
    uint32_t presentModeCount = 0;
    if (dst_vk(vkGetPhysicalDeviceSurfacePresentModesKHR(get_physical_device(), get_surface(), &presentModeCount, nullptr)) == VK_SUCCESS) {
        // TODO : Scratchpad allocator...
        std::vector<VkPresentModeKHR> presentModes(presentModeCount);
        if (presentModeCount && dst_vk(vkGetPhysicalDeviceSurfacePresentModesKHR(get_physical_device(), get_surface(), &presentModeCount, presentModes.data())) == VK_SUCCESS) {
            for (const auto& presentMode : presentModes) {
                if (presentMode == VK_PRESENT_MODE_MAILBOX_KHR) {
                    return presentMode;
                }
            }
        }
    }
    return VK_PRESENT_MODE_FIFO_KHR;
}

const Managed<VkSwapchainKHR>& Application::get_swapchain() const
{
    assert(mSwapchain && "TODO : Better error handling");
    return mSwapchain;
}

VkFormat Application::get_swapchain_depth_format() const
{
    std::array<VkFormat, 3> depthFormats {
        VK_FORMAT_D32_SFLOAT,
        VK_FORMAT_D32_SFLOAT_S8_UINT,
        VK_FORMAT_D24_UNORM_S8_UINT,
    };
    for (auto depthFormat : depthFormats) {
        VkFormatProperties formatProperties { };
        vkGetPhysicalDeviceFormatProperties(get_physical_device(), depthFormat, &formatProperties);
        if (formatProperties.optimalTilingFeatures & VK_FORMAT_FEATURE_DEPTH_STENCIL_ATTACHMENT_BIT) {
            return depthFormat;
        }
    }
    return VK_FORMAT_UNDEFINED;
}

const Managed<VkRenderPass>& Application::get_swapchain_render_pass() const
{
    assert(mSwapchainRenderPass && "TODO : Better error handling");
    return mSwapchainRenderPass;
}

const std::vector<Managed<VkFramebuffer>>& Application::get_swapchain_framebuffers() const
{
    assert(!mSwapchainFramebuffers.empty() && "TODO : Better error handling");
    return mSwapchainFramebuffers;
}

const std::vector<Managed<VkCommandBuffer>>& Application::get_swapchain_command_buffers() const
{
    assert(!mSwapchainCommandBuffers.empty() && "TODO : Better error handling");
    return mSwapchainCommandBuffers;
}

const Managed<VkSemaphore>& Application::get_swapchain_image_acquired_semaphore() const
{
    assert(mSwapchainImageAcquiredSemaphore && "TODO : Better error handling");
    return mSwapchainImageAcquiredSemaphore;
}

const Managed<VkSemaphore>& Application::get_swapchain_image_rendered_semaphore() const
{
    assert(mSwapchainImageRenderedSemaphore && "TODO : Better error handling");
    return mSwapchainImageRenderedSemaphore;
}

bool Application::setup()
{
    mInstance = setup_instance(mApplicationInfo);
    mVkDebugUtilsMessenger = setup_debug_utils_messenger();
    mPhysicalDevices = setup_physical_devices();
    mDevices = setup_devices(mApplicationInfo);
    mGeneralQueue = get_device_queue(get_device(), VK_QUEUE_COMPUTE_BIT | VK_QUEUE_GRAPHICS_BIT | VK_QUEUE_TRANSFER_BIT);
    mComputeQueue = get_device_queue(get_device(), VK_QUEUE_COMPUTE_BIT);
    mGraphicsQueue = get_device_queue(get_device(), VK_QUEUE_GRAPHICS_BIT);
    mTransferQueue = get_device_queue(get_device(), VK_QUEUE_TRANSFER_BIT);
    mSurface = setup_surface();
    mSwapchain = setup_swapchain();
    mSwapchainRenderPass = setup_swapchain_render_pass();
    mSwapchainFramebuffers = setup_swapchain_framebuffers();
    mSwapchainCommandBuffers = setup_swapchain_command_buffers();
    auto semaphoreCreateInfo = get_default<VkSemaphoreCreateInfo>();
    dst_vk(create<Managed<VkSemaphore>>(get_device(), &semaphoreCreateInfo, nullptr, &mSwapchainImageAcquiredSemaphore));
    dst_vk(create<Managed<VkSemaphore>>(get_device(), &semaphoreCreateInfo, nullptr, &mSwapchainImageRenderedSemaphore));
    return true;
}

Managed<VkInstance> Application::setup_instance(Info applicationInfo) const
{
    ////////////////////////////////////////////////////////////////////////////////
    // TODO : Cleanup...
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
    auto instanceCreateInfo = get_default<VkInstanceCreateInfo>();
    instanceCreateInfo.enabledLayerCount = (uint32_t)applicationInfo.instanceLayers.size();
    instanceCreateInfo.ppEnabledLayerNames = !applicationInfo.instanceLayers.empty() ? applicationInfo.instanceLayers.data() : nullptr;
    instanceCreateInfo.enabledExtensionCount = (uint32_t)applicationInfo.instanceExtensions.size();
    instanceCreateInfo.ppEnabledExtensionNames = !applicationInfo.instanceExtensions.empty() ? applicationInfo.instanceExtensions.data() : nullptr;
    Managed<VkInstance> instance;
    if (dst_vk(create<Managed<VkInstance>>(&instanceCreateInfo, nullptr, &instance)) == VK_SUCCESS) {
        return instance;
    }
    return { };
}

VkDebugUtilsMessengerEXT Application::setup_debug_utils_messenger() const
{
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
        VkDebugUtilsMessengerEXT vkDebugUtilsMessenger = VK_NULL_HANDLE;
        if (dst_vk(pfn_vkCreateDebugUtilsMessengerEXT(mInstance, &debugUtilsMessengerCreateInfo, nullptr, &vkDebugUtilsMessenger)) == VK_SUCCESS) {
            return vkDebugUtilsMessenger;
        }
    }
    return VK_NULL_HANDLE;
}

std::vector<Managed<VkPhysicalDevice>> Application::setup_physical_devices() const
{
    auto physicalDevices = mInstance.get<std::vector<Managed<VkPhysicalDevice>>>();
    std::sort(physicalDevices.begin(), physicalDevices.end(),
        [](const Managed<VkPhysicalDevice>& lhs, const Managed<VkPhysicalDevice>& rhs)
        {
            auto getPhysicalDeviceScore = [](const Managed<VkPhysicalDevice>& physicalDevice)
            {
                VkPhysicalDeviceProperties physicalDeviceProperties { };
                vkGetPhysicalDeviceProperties(physicalDevice, &physicalDeviceProperties);
                VkPhysicalDeviceFeatures physicalDeviceFeatures { };
                vkGetPhysicalDeviceFeatures(physicalDevice, &physicalDeviceFeatures);
                // TODO : Score/filter based on VkPhysicalDeviceFeatures...
                uint32_t deviceTypeScore = 0;
                switch (physicalDeviceProperties.deviceType) {
                case VK_PHYSICAL_DEVICE_TYPE_DISCRETE_GPU:   ++deviceTypeScore;
                case VK_PHYSICAL_DEVICE_TYPE_INTEGRATED_GPU: ++deviceTypeScore;
                case VK_PHYSICAL_DEVICE_TYPE_VIRTUAL_GPU:    ++deviceTypeScore;
                case VK_PHYSICAL_DEVICE_TYPE_CPU:            ++deviceTypeScore;
                case VK_PHYSICAL_DEVICE_TYPE_OTHER:          ++deviceTypeScore;
                default: {
                } break;
                }
                return deviceTypeScore;
            };
            return getPhysicalDeviceScore(lhs) < getPhysicalDeviceScore(rhs);
        }
    );
    return physicalDevices;
}

std::vector<Managed<VkDevice>> Application::setup_devices(Info applicationInfo) const
{
    std::vector<Managed<VkDevice>> devices;
    for (const auto& physicalDevice : mPhysicalDevices) {
        auto generalQueueFamilyIndex = get_queue_family_index(physicalDevice, VK_QUEUE_COMPUTE_BIT | VK_QUEUE_GRAPHICS_BIT | VK_QUEUE_TRANSFER_BIT);
        auto computeQueueFamilyIndex = generalQueueFamilyIndex.has_value() ? generalQueueFamilyIndex : get_queue_family_index(physicalDevice, VK_QUEUE_COMPUTE_BIT);
        auto graphicsQueueFamilyIndex = generalQueueFamilyIndex.has_value() ? generalQueueFamilyIndex : get_queue_family_index(physicalDevice, VK_QUEUE_GRAPHICS_BIT);
        auto transferQueueFamilyIndex = generalQueueFamilyIndex.has_value() ? generalQueueFamilyIndex : get_queue_family_index(physicalDevice, VK_QUEUE_TRANSFER_BIT);
        assert(generalQueueFamilyIndex.has_value() && "TODO : Actually setup support for multiple queues");
        std::vector<VkDeviceQueueCreateInfo> deviceQueueCreateInfos;
        auto addDeviceQueueCreateInfo = [&deviceQueueCreateInfos](std::optional<uint32_t> queueFamilyIndex)
        {
            if (queueFamilyIndex.has_value()) {
                for (const auto& deviceQueueCreateInfo : deviceQueueCreateInfos) {
                    if (deviceQueueCreateInfo.queueFamilyIndex == queueFamilyIndex) {
                        return true;
                    }
                }
                static const float DefaultQueuePriority = 0.0f;
                auto deviceQueueCreateInfo = get_default<VkDeviceQueueCreateInfo>();
                deviceQueueCreateInfo.queueFamilyIndex = queueFamilyIndex.value();
                deviceQueueCreateInfo.queueCount = 1;
                deviceQueueCreateInfo.pQueuePriorities = &DefaultQueuePriority;
                deviceQueueCreateInfos.push_back(deviceQueueCreateInfo);
                return true;
            }
            return false;
        };
        if (addDeviceQueueCreateInfo(generalQueueFamilyIndex) &&
            addDeviceQueueCreateInfo(computeQueueFamilyIndex) &&
            addDeviceQueueCreateInfo(graphicsQueueFamilyIndex) &&
            addDeviceQueueCreateInfo(transferQueueFamilyIndex)) {
            auto deviceCreateInfo = get_default<VkDeviceCreateInfo>();
            deviceCreateInfo.queueCreateInfoCount = (uint32_t)deviceQueueCreateInfos.size();
            deviceCreateInfo.pQueueCreateInfos = deviceQueueCreateInfos.data();
            deviceCreateInfo.enabledExtensionCount = (uint32_t)applicationInfo.deviceExtensions.size();
            deviceCreateInfo.ppEnabledExtensionNames = !applicationInfo.deviceExtensions.empty() ? applicationInfo.deviceExtensions.data() : nullptr;
            Managed<VkDevice> device;
            if (dst_vk(create<Managed<VkDevice>>(physicalDevice, &deviceCreateInfo, nullptr, &device)) == VK_SUCCESS) {
                devices.push_back(std::move(device));
                break;
            }
        }
    }
    return devices;
}

Managed<VkSurfaceKHR> Application::setup_surface() const
{
    Managed<VkSurfaceKHR> surface;
    #ifdef VK_USE_PLATFORM_WIN32_KHR
    auto surfaceCreateInfo = get_default<VkWin32SurfaceCreateInfoKHR>();
    surfaceCreateInfo.hinstance = GetModuleHandle(NULL);
    surfaceCreateInfo.hwnd = (HWND)mWindow.get_hwnd();
    #endif // VK_USE_PLATFORM_WIN32_KHR
    if (dst_vk(create<Managed<VkSurfaceKHR>>(get_instance(), &surfaceCreateInfo, nullptr, &surface)) == VK_SUCCESS) {
        const auto& physicalDevice = get_physical_device();
        const auto& graphicsQueue = get_graphics_queue();
        assert(graphicsQueue && "TODO : Better error handling");
        auto graphicsQueueFamilyIndex = graphicsQueue.get<Managed<VkDeviceQueueCreateInfo>>()->queueFamilyIndex;
        VkBool32 surfaceSupport = VK_FALSE;
        if (dst_vk(vkGetPhysicalDeviceSurfaceSupportKHR(physicalDevice, graphicsQueueFamilyIndex, surface, &surfaceSupport)) == VK_SUCCESS && surfaceSupport) {
            return surface;
        }
    }
    return { };
}

Managed<VkSwapchainKHR> Application::setup_swapchain() const
{
    const auto& physicalDevice = get_physical_device();
    const auto& surface = get_surface();
    VkSurfaceCapabilitiesKHR surfaceCapabilities { };
    if (dst_vk(vkGetPhysicalDeviceSurfaceCapabilitiesKHR(physicalDevice, surface, &surfaceCapabilities)) == VK_SUCCESS) {
        auto minImageCount = surfaceCapabilities.minImageCount;
        auto maxImageCount = surfaceCapabilities.maxImageCount;
        const auto& surfaceFormat = get_surface_format();
        auto swapchainCreateInfo = get_default<VkSwapchainCreateInfoKHR>();
        swapchainCreateInfo.surface = surface;
        swapchainCreateInfo.minImageCount = maxImageCount ? clamp(minImageCount + 1, minImageCount, maxImageCount) : minImageCount + 1;
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
        swapchainCreateInfo.presentMode = get_surface_present_mode();
        swapchainCreateInfo.clipped = VK_TRUE;
        Managed<VkSwapchainKHR> swapchain;
        if (dst_vk(create<Managed<VkSwapchainKHR>>(get_device(), &swapchainCreateInfo, nullptr, &swapchain)) == VK_SUCCESS) {
            return swapchain;
        }
    }
    return { };
}

Managed<VkRenderPass> Application::setup_swapchain_render_pass() const
{
    auto colorAttachmentDescription = get_default<VkAttachmentDescription>();
    colorAttachmentDescription.format = get_swapchain().get<Managed<VkSwapchainCreateInfoKHR>>()->imageFormat;
    colorAttachmentDescription.samples = VK_SAMPLE_COUNT_1_BIT;
    colorAttachmentDescription.loadOp = VK_ATTACHMENT_LOAD_OP_CLEAR;
    colorAttachmentDescription.storeOp = VK_ATTACHMENT_STORE_OP_STORE;
    colorAttachmentDescription.finalLayout = VK_IMAGE_LAYOUT_PRESENT_SRC_KHR;
    auto colorAttachmentReference = get_default<VkAttachmentReference>();
    colorAttachmentReference.attachment = 0;
    colorAttachmentReference.layout = VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL;
    auto subpassDescription = get_default<VkSubpassDescription>();
    subpassDescription.pipelineBindPoint = VK_PIPELINE_BIND_POINT_GRAPHICS;
    subpassDescription.colorAttachmentCount = 1;
    subpassDescription.pColorAttachments = &colorAttachmentReference;
    auto renderPassCreateInfo = get_default<VkRenderPassCreateInfo>();
    renderPassCreateInfo.attachmentCount = 1;
    renderPassCreateInfo.pAttachments = &colorAttachmentDescription;
    renderPassCreateInfo.subpassCount = 1;
    renderPassCreateInfo.pSubpasses = &subpassDescription;
    Managed<VkRenderPass> renderPass;
    if (dst_vk(create<Managed<VkRenderPass>>(get_device(), &renderPassCreateInfo, nullptr, &renderPass)) == VK_SUCCESS) {
        return renderPass;
    }
    return { };
}

std::vector<Managed<VkFramebuffer>> Application::setup_swapchain_framebuffers() const
{
    const auto& swapchainImages = get_swapchain().get<std::vector<Managed<VkImage>>>();
    std::vector<Managed<VkFramebuffer>> framebuffers;
    framebuffers.reserve(swapchainImages.size());
    for (const auto& image : swapchainImages) {
        const auto& imageCreateInfo = image.get<Managed<VkImageCreateInfo>>();
        auto imageViewCreateInfo = get_default<VkImageViewCreateInfo>();
        imageViewCreateInfo.image = image;
        imageViewCreateInfo.viewType = VK_IMAGE_VIEW_TYPE_2D;
        imageViewCreateInfo.format = imageCreateInfo->format;
        imageViewCreateInfo.subresourceRange.aspectMask = VK_IMAGE_ASPECT_COLOR_BIT;
        imageViewCreateInfo.subresourceRange.baseMipLevel = 0;
        imageViewCreateInfo.subresourceRange.levelCount = 1;
        imageViewCreateInfo.subresourceRange.baseArrayLayer = 0;
        imageViewCreateInfo.subresourceRange.layerCount = 1;
        Managed<VkImageView> imageView;
        if (dst_vk(create<Managed<VkImageView>>(get_device(), &imageViewCreateInfo, nullptr, &imageView)) == VK_SUCCESS) {
            auto framebufferCreateInfo = get_default<VkFramebufferCreateInfo>();
            framebufferCreateInfo.renderPass = get_swapchain_render_pass();
            framebufferCreateInfo.attachmentCount = 1;
            framebufferCreateInfo.pAttachments = &*imageView;
            framebufferCreateInfo.width = imageCreateInfo->extent.width;
            framebufferCreateInfo.height = imageCreateInfo->extent.height;
            framebufferCreateInfo.layers = 1;
            Managed<VkFramebuffer> framebuffer;
            if (dst_vk(create<Managed<VkFramebuffer>>(get_device(), &framebufferCreateInfo, nullptr, &framebuffer)) == VK_SUCCESS) {
                framebuffers.push_back(std::move(framebuffer));
            }
        }
    }
    assert(framebuffers.size() == swapchainImages.size() && "TODO : Better error handling");
    return framebuffers;
}

std::vector<Managed<VkCommandBuffer>> Application::setup_swapchain_command_buffers() const
{
    auto commandPoolCreateInfo = get_default<VkCommandPoolCreateInfo>();
    commandPoolCreateInfo.flags = VK_COMMAND_POOL_CREATE_RESET_COMMAND_BUFFER_BIT;
    commandPoolCreateInfo.queueFamilyIndex = get_graphics_queue().get<Managed<VkDeviceQueueCreateInfo>>()->queueFamilyIndex;
    Managed<VkCommandPool> commandPool;
    if (dst_vk(create<Managed<VkCommandPool>>(get_device(), &commandPoolCreateInfo, nullptr, &commandPool)) == VK_SUCCESS) {
        auto commandBufferAllocateInfo = get_default<VkCommandBufferAllocateInfo>();
        commandBufferAllocateInfo.commandPool = commandPool;
        commandBufferAllocateInfo.commandBufferCount = (uint32_t)get_swapchain().get<std::vector<Managed<VkImage>>>().size();
        std::vector<Managed<VkCommandBuffer>> commandBuffers(commandBufferAllocateInfo.commandBufferCount);
        if (dst_vk(allocate<Managed<VkCommandBuffer>>(get_device(), &commandBufferAllocateInfo, commandBuffers.data())) == VK_SUCCESS) {
            return commandBuffers;
        }
    }
    return { };
}

Application::Application(const sys::Window::Info& windowInfo, Info applicationInfo)
    : gfx::Application(windowInfo)
    , mWindowInfo { windowInfo }
    , mApplicationInfo { applicationInfo }
{
    #if 0
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
    #endif
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
