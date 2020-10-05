
/*
==========================================
  Copyright (c) 2017-2020 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#include "dynamic_static/graphics/vulkan/application.hpp"

namespace dst {
namespace vk {

template <typename ManagedVulkanType>
inline VkResult create(const VkInstanceCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, ManagedVulkanType* pInstance)
{
    return VK_SUCCESS;
}

template <typename ManagedVulkanType>
inline VkResult create(const Managed<VkDevice>& device, const VkImageCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, ManagedVulkanType* pInstance)
{
    return VK_SUCCESS;
}

Application::Application(const sys::Window::Info& windowInfo, const Info& applicationInfo)
    : gfx::Application(windowInfo)
{
    #if 0
    VkApplicationInfo vkApplicationInfo { };
    vkApplicationInfo.sType = VK_STRUCTURE_TYPE_APPLICATION_INFO;
    #endif
    VkInstanceCreateInfo instanceCreateInfo { };
    instanceCreateInfo.sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
    instanceCreateInfo.enabledLayerCount = (uint32_t)applicationInfo.instanceLayers.size();
    instanceCreateInfo.ppEnabledLayerNames = !applicationInfo.instanceLayers.empty() ? applicationInfo.instanceLayers.data() : nullptr;
    instanceCreateInfo.enabledExtensionCount = (uint32_t)applicationInfo.instanceExtensions.size();
    instanceCreateInfo.ppEnabledExtensionNames = !applicationInfo.instanceExtensions.empty() ? applicationInfo.instanceExtensions.data() : nullptr;
    #if 1
    // Managed<VkInstance>::create(&instanceCreateInfo, nullptr, &mInstance);
    dst_vk(create<Managed<VkInstance>>(&instanceCreateInfo, nullptr, &mInstance));
    VkImageCreateInfo imageCreateInfo { };
    imageCreateInfo.sType = VK_STRUCTURE_TYPE_IMAGE_CREATE_INFO;
    Managed<VkImage> mImage;
    dst_vk(create<Managed<VkImage>>(mDevice, &imageCreateInfo, nullptr, &mImage));
    #else
    dst_vk(detail::BasicManagedVkInstance::create(&instanceCreateInfo, nullptr, &mInstance));
    #endif

    //uint32_t physicalDeviceCount = 0;
    //vkEnumeratePhysicalDevices(mInstance, &physicalDeviceCount, nullptr);
    //vkGetPhysicalDeviceProperties()
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
