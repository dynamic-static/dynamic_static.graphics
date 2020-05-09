
/*
==========================================
  Copyright (c) 2020 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#pragma once

#include "dynamic_static/graphics/vulkan/defines.hpp"
#include "dynamic_static/core/random.hpp"

#include <utility>
#include <vector>

namespace dst {
namespace gfx {
namespace vk {
namespace tests {

// NOTE : randomize_bytes() for floating point values can result in NaNs which
//  evaluate as != for identical bit patterns, this is valid but accounting for
//  it in these tests is more trouble than it's worth currently, so floating
//  point members are randomized manually to avoid the NaNs.  May revisit.

/**
TODO : Documentation
*/
class RngContext final
{
public:
    /**
    TODO : Documentation
    */
    inline RngContext()
        : rng(0)
    {
    }

    /**
    TODO : Documentation
    */
    template <typename T>
    inline T* allocate(size_t count = 1)
    {
        mAllocations.emplace_back(sizeof(T) * count);
        return (T*)mAllocations.back().data();
    }

    RandomNumberGenerator<> rng; //!< TODO : Documentation

private:
    std::vector<std::vector<uint8_t>> mAllocations;
};

/**
TODO : Documentation
*/
inline void randomize_bytes(RngContext& rngContext, size_t byteCount, uint8_t* pBytes)
{
    for (size_t i = 0; i < byteCount; ++i) {
        pBytes[i] = rngContext.rng.range<uint8_t>(1, std::numeric_limits<uint8_t>::max());
    }
}

/**
TODO : Documentation
*/
template <typename T>
inline void randomize_structure(RngContext& rngContext, T& obj, bool randomizePNext = false)
{
    (void)randomizePNext;
    randomize_bytes(rngContext, sizeof(obj), (uint8_t*)&obj);
}

/**
TODO : Documentation
*/
template <typename T>
inline void randomize_structure_ptr(RngContext& rngContext, const T*& pObj, bool randomizePNext = false)
{
    T* pNewObj = rngContext.allocate<T>();
    randomize_structure(rngContext, *pNewObj, randomizePNext);
    pObj = pNewObj;
}

/**
TODO : Documentation
*/
template <typename CountType, typename T>
inline void randomize_array(RngContext& rngContext, CountType& count, const T*& pObjs, bool randomizePNext = false)
{
    count = rngContext.rng.range<CountType>(4, 8);
    T* pNewObjs = nullptr;
    if (count) {
        pNewObjs = rngContext.allocate<T>(count);
        for (CountType i = 0; i < count; ++i) {
            randomize_structure(rngContext, pNewObjs[i], randomizePNext);
        }
    }
    pObjs = pNewObjs;
}

/**
TODO : Documentation
*/
template <typename CountType>
inline void randomize_void_data(RngContext& rngContext, CountType& count, const void*& pData)
{
    const uint8_t* pNewData = nullptr;
    randomize_array(rngContext, count, pNewData);
    pData = pNewData;
}

/**
TODO : Documentation
*/
inline void randomize_string(RngContext& rngContext, const char*& pStr)
{
    size_t length = 0;
    randomize_array(rngContext, length, pStr);
    ((char*)pStr)[length - 1] = '\0';
}

/**
TODO : Documentation
*/
template <typename CountType>
inline void randomize_string_array(RngContext& rngContext, CountType& count, const char* const*& ppStr)
{
    randomize_array(rngContext, count, ppStr);
    for (CountType i = 0; i < count; ++i) {
        const char* pNewStr = nullptr;
        randomize_string(rngContext, pNewStr);
        ((const char**)ppStr)[i] = pNewStr;
    }
}

/**
TODO : Documentation
    @note The pNext chains created by this function aren't valid in a Vulkan application but are suitable for test scenarios
*/
inline const void* randomize_pnext(RngContext& rngContext, bool randomizePNext = true)
{
    switch (rngContext.rng.die_roll(3)) {
    case 1: {
        auto pNext = rngContext.allocate<VkFenceCreateInfo>();
        pNext->sType = VK_STRUCTURE_TYPE_FENCE_CREATE_INFO;
        pNext->pNext = randomizePNext && rngContext.rng.probability(0.5f) ? randomize_pnext(rngContext, false) : nullptr;
        pNext->flags = rngContext.rng.probability(0.5f) ? 0 : 1;
        return pNext;
    } break;
    case 2: {
        auto pNext = rngContext.allocate<VkSemaphoreCreateInfo>();
        pNext->sType = VK_STRUCTURE_TYPE_SEMAPHORE_CREATE_INFO;
        pNext->pNext = randomizePNext && rngContext.rng.probability(0.5f) ? randomize_pnext(rngContext, false) : nullptr;
        pNext->flags = rngContext.rng.probability(0.5f) ? 0 : 1;
        return pNext;
    } break;
    };
    return nullptr;
}

/**
TODO : Documentation
*/
template <>
inline void randomize_structure<VkApplicationInfo>(RngContext& rngContext, VkApplicationInfo& obj, bool randomizePNext)
{
    randomize_bytes(rngContext, sizeof(obj), (uint8_t*)&obj);
    obj.pNext = randomizePNext ? randomize_pnext(rngContext) : nullptr;
    randomize_string(rngContext, obj.pApplicationName);
    randomize_string(rngContext, obj.pEngineName);
}

/**
TODO : Documentation
*/
template <>
inline void randomize_structure<VkInstanceCreateInfo>(RngContext& rngContext, VkInstanceCreateInfo& obj, bool randomizePNext)
{
    randomize_bytes(rngContext, sizeof(obj), (uint8_t*)&obj);
    obj.pNext = randomizePNext ? randomize_pnext(rngContext) : nullptr;
    randomize_structure_ptr(rngContext, obj.pApplicationInfo);
    randomize_string_array(rngContext, obj.enabledLayerCount, obj.ppEnabledLayerNames);
    randomize_string_array(rngContext, obj.enabledExtensionCount, obj.ppEnabledExtensionNames);
}

/**
TODO : Documentation
*/
template <>
inline void randomize_structure<VkImageCreateInfo>(RngContext& rngContext, VkImageCreateInfo& obj, bool randomizePNext)
{
    randomize_bytes(rngContext, sizeof(obj), (uint8_t*)&obj);
    obj.pNext = randomizePNext ? randomize_pnext(rngContext) : nullptr;
    randomize_array(rngContext, obj.queueFamilyIndexCount, obj.pQueueFamilyIndices);
}

/**
TODO : Documentation
*/
template <>
inline void randomize_structure<VkViewport>(RngContext& rngContext, VkViewport& obj, bool randomizePNext)
{
    (void)randomizePNext;
    obj.x = rngContext.rng.value<float>();
    obj.y = rngContext.rng.value<float>();
    obj.width = rngContext.rng.value<float>();
    obj.height = rngContext.rng.value<float>();
    obj.minDepth = rngContext.rng.value<float>();
    obj.maxDepth = rngContext.rng.value<float>();
}

/**
TODO : Documentation
*/
template <>
inline void randomize_structure<VkPipelineViewportStateCreateInfo>(RngContext& rngContext, VkPipelineViewportStateCreateInfo& obj, bool randomizePNext)
{
    randomize_bytes(rngContext, sizeof(obj), (uint8_t*)&obj);
    obj.pNext = randomizePNext ? randomize_pnext(rngContext) : nullptr;
    randomize_array(rngContext, obj.viewportCount, obj.pViewports);
    randomize_array(rngContext, obj.scissorCount, obj.pScissors);
}

/**
TODO : Documentation
*/
template <>
inline void randomize_structure<VkDeviceQueueCreateInfo>(RngContext& rngContext, VkDeviceQueueCreateInfo& obj, bool randomizePNext)
{
    randomize_bytes(rngContext, sizeof(obj), (uint8_t*)&obj);
    obj.pNext = randomizePNext ? randomize_pnext(rngContext) : nullptr;
    randomize_array(rngContext, obj.queueCount, obj.pQueuePriorities);
    for (uint32_t i = 0; i < obj.queueCount; ++i) {
        ((float*)obj.pQueuePriorities)[i] = rngContext.rng.value<float>();
    }
}

/**
TODO : Documentation
*/
template <>
inline void randomize_structure<VkDeviceCreateInfo>(RngContext& rngContext, VkDeviceCreateInfo& obj, bool randomizePNext)
{
    randomize_bytes(rngContext, sizeof(obj), (uint8_t*)&obj);
    obj.pNext = randomizePNext ? randomize_pnext(rngContext) : nullptr;
    randomize_array(rngContext, obj.queueCreateInfoCount, obj.pQueueCreateInfos);
    randomize_string_array(rngContext, obj.enabledLayerCount, obj.ppEnabledLayerNames);
    randomize_string_array(rngContext, obj.enabledExtensionCount, obj.ppEnabledExtensionNames);
    randomize_structure_ptr(rngContext, obj.pEnabledFeatures);
}

/**
TODO : Documentation
*/
template <>
inline void randomize_structure<VkPipelineCacheCreateInfo>(RngContext& rngContext, VkPipelineCacheCreateInfo& obj, bool randomizePNext)
{
    randomize_bytes(rngContext, sizeof(obj), (uint8_t*)&obj);
    obj.pNext = randomizePNext ? randomize_pnext(rngContext) : nullptr;
    randomize_void_data(rngContext, obj.initialDataSize, obj.pInitialData);
}

/**
TODO : Documentation
*/
template <>
inline void randomize_structure<VkEventCreateInfo>(RngContext& rngContext, VkEventCreateInfo& obj, bool randomizePNext)
{
    obj.sType = VK_STRUCTURE_TYPE_EVENT_CREATE_INFO;
    obj.pNext = randomizePNext ? randomize_pnext(rngContext) : nullptr;
    obj.flags = rngContext.rng.probability(0.5f) ? 0 : 1;
}

/**
TODO : Documentation
*/
template <typename VulkanStructureType>
inline std::vector<VulkanStructureType> get_randomized_structures(RngContext& rngContext, size_t count = 128)
{
    std::vector<VulkanStructureType> objs(count);
    for (auto& obj : objs) {
        randomize_structure(rngContext, obj);
    }
    return objs;
}

} // namespace tests
} // namespace vk
} // namespace gfx
} // namespace dst
