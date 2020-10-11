
/*
==========================================
    Copyright (c) 2020 Dynamic_Static
    Patrick Purcell
        Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#pragma once

#include "dynamic_static/graphics/vulkan/detail/managed.hpp"
#include "dynamic_static/graphics/vulkan/generated/managed.control-blocks.hpp"
#include "dynamic_static/graphics/vulkan/defines.hpp"

namespace dst {
namespace vk {
namespace detail {

template <>
void on_managed_handle_created(Managed<VkInstance>& instance);

template <>
void on_managed_handle_destroyed(Managed<VkInstance>& instance);

template <>
void on_managed_handle_destroyed(Managed<VkPhysicalDevice>& physicalDevice);

template <>
void on_managed_handle_created(Managed<VkDevice>& device);

template <>
void on_managed_handle_destroyed(Managed<VkDevice>& device);

template <>
void on_managed_handle_destroyed(Managed<VkQueue>& queue);

template <>
void on_managed_handle_created(Managed<VkSwapchainKHR>& swapchain);

template <>
void on_managed_handle_destroyed(Managed<VkSwapchainKHR>& swapchain);

template <>
void on_managed_handle_destroyed(Managed<VkImage>& image);

} // namespace detail
} // namespace vk
} // namespace dst
