
/*
==========================================
  Copyright (c) 2017-2020 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#pragma once

#include "dynamic_static/graphics/vulkan/defines.hpp"
#include "dynamic_static/graphics/vulkan/managed.hpp"

#include <optional>

namespace dst {
namespace vk {

/**
TODO : Documentation
*/
std::optional<uint32_t> get_queue_family_index(VkPhysicalDevice vkPhysicalDevice, VkQueueFlags queueFlags);

/**
TODO : Documentation
*/
Managed<VkQueue> get_device_queue(const Managed<VkDevice>& device, VkQueueFlags queueFlags);

/**
TODO : Documentation
*/
std::optional<uint32_t> get_memory_type_index(VkPhysicalDevice vkPhysicalDevice, uint32_t memoryTypeBits, VkMemoryPropertyFlags memoryPropertyFlags);

} // namespace vk
} // namespace dst
