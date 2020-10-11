
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

#if 0
template <typename T, typename ...Args>
inline VkResult create()
{
}

template <>
inline VkResult create<Managed<VkInstance>>(const VkInstanceCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, Managed<VkIsntance>* pInstance)
{
    if (pInstance) {
        return ManagedInstance::create(pCreateInfo, pAllocator, pInstance);
    }
    return VK_INCOMPLETE;
}

template <typename ManagedDevice>
inline VkResult create(const Managed<VkDevice>& device, const VkImageCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, ManagedDevice* pInstance)
{
    return VK_SUCCESS;
}
#endif

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
    dst_vk(create<Managed<VkInstance>>(&instanceCreateInfo, nullptr, &mInstance));

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
