
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

Application::Application(
    const sys::Window::Info& windowInfo,
    const VkApplicationInfo& applicationInfo,
    const std::vector<const char*>& layers,
    const std::vector<const char*>& instanceExtensions,
    const std::vector<const char*>& deviceExtensions
)
    : gfx::Application(windowInfo)
    , mApplicationInfo { applicationInfo }
    , mLayers { layers }
    , mInstanceExtensions { instanceExtensions }
    , mDeviceExtensions { deviceExtensions }
{
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
    mInstance = setup_instance(mApplicationInfo, mLayers, mInstanceExtensions);
    mVkDebugUtilsMessenger = setup_debug_utils_messenger();
    mPhysicalDevices = setup_physical_devices();
    mDevices = setup_devices(mDeviceExtensions);
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

Managed<VkInstance> Application::setup_instance(
    const VkApplicationInfo& applicationInfo,
    std::vector<const char*>& layers,
    std::vector<const char*>& extensions
) const
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
    layers.push_back("VK_LAYER_KHRONOS_validation");
    extensions.push_back(VK_EXT_DEBUG_UTILS_EXTENSION_NAME);
    #endif
    ////////////////////////////////////////////////////////////////////////////////
    auto instanceCreateInfo = get_default<VkInstanceCreateInfo>();
    instanceCreateInfo.enabledLayerCount = (uint32_t)layers.size();
    instanceCreateInfo.ppEnabledLayerNames = !layers.empty() ? layers.data() : nullptr;
    instanceCreateInfo.enabledExtensionCount = (uint32_t)extensions.size();
    instanceCreateInfo.ppEnabledExtensionNames = !extensions.empty() ? extensions.data() : nullptr;
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

std::vector<Managed<VkDevice>> Application::setup_devices(std::vector<const char*>& extensions) const
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
            deviceCreateInfo.enabledExtensionCount = (uint32_t)extensions.size();
            deviceCreateInfo.ppEnabledExtensionNames = !extensions.empty() ? extensions.data() : nullptr;
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
    surfaceCreateInfo.hwnd = (HWND)get_window().get_hwnd();
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
