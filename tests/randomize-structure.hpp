
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
Random number generator context for test scenarios
*/
class RngContext final
{
public:
    /**
    Constructs an instance of RngContext
    */
    inline RngContext()
        : rng(0)
    {
    }

    /**
    Allocates storage for a specified number of objects of a specified type
    @param <T> The type of object to allocate
    @param [in](optional = 1) count The number of objects to allocate
    @return A pointer to the allocated storage
    */
    template <typename T>
    inline T* allocate(size_t count = 1)
    {
        mAllocations.emplace_back(sizeof(T) * count);
        return (T*)mAllocations.back().data();
    }

    RandomNumberGenerator<> rng; //!< This RngContext object's RandomNumberGenerator<>

private:
    std::vector<std::vector<uint8_t>> mAllocations;
};

/**
Randomizes the contents of a given array of bytes
@param [in] rngContext The RngContext to use for randomizing bytes
@param [in] byteCount The number of bytes to randomize
@param [in] pBytes A pointer to the array of bytes to randomize
*/
inline void randomize_bytes(RngContext& rngContext, size_t byteCount, uint8_t* pBytes)
{
    for (size_t i = 0; i < byteCount; ++i) {
        pBytes[i] = rngContext.rng.range<uint8_t>(1, std::numeric_limits<uint8_t>::max());
    }
}

/**
Randomizes a given object of a specified type
@param <T> The type of object to randomize
@param [in] rngContext The RngContext to use for randomizing the given object
@param [out] obj A reference to the object to randomize
@param [in](optional = false) randomizePNext Whether or not to randomize the given object's pNext member
*/
template <typename T>
inline void randomize_structure(RngContext& rngContext, T& obj, bool randomizePNext = false)
{
    (void)randomizePNext;
    randomize_bytes(rngContext, sizeof(obj), (uint8_t*)&obj);
}

/**
Allocates and randomizes an object of a specified type
@param <T> The type of object to allocate and randomize
@param [in] rngContext The RngContext to use for randomizing the allocated object
@param [out] obj A pointer to populate with the allocated object's storage address
@param [in](optional = false) randomizePNext Whether or not to randomize the allocated object's pNext member
*/
template <typename T>
inline void randomize_structure_ptr(RngContext& rngContext, const T*& pObj, bool randomizePNext = false)
{
    T* pNewObj = rngContext.allocate<T>();
    randomize_structure(rngContext, *pNewObj, randomizePNext);
    pObj = pNewObj;
}

/**
Allocates and randomizes an array of a specified type
@param <CountType> The type of value used as the allocated array's count
@param <T> The type of objects to allocate and randomize
@param [in] rngContext The RngContext to use for randomizing the allocated objects
@param [out] count A reference to a value to populate with the number of allocated objects
@param [out] pObjs A reference to a pointer to populate with the allocated objects' storage address
@param [in](optional = false) randomizePNext Whether or not to randomize the allocated objects' pNext members
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
Allocates and randomizes an array of bytes referenced as a const void*
@param <CountType> The type of value used for the allocated byte count
@param [in] rngContext The RngContext to use for randomizing the allocated objects
@param [out] count A reference to a value to populate with the number of allocated bytes
@param [out] pData A pointer to populate with the allocated bytes' storage address
*/
template <typename CountType>
inline void randomize_void_data(RngContext& rngContext, CountType& count, const void*& pData)
{
    const uint8_t* pNewData = nullptr;
    randomize_array(rngContext, count, pNewData);
    pData = pNewData;
}

/**
Allocates and randomizes a string
@param [in] rngContext The RngContext to use for randomizing the allocated string
@param [out] pStr A reference to a pointer to populate with the allocated string's storage address
*/
inline void randomize_string(RngContext& rngContext, const char*& pStr)
{
    size_t length = 0;
    randomize_array(rngContext, length, pStr);
    ((char*)pStr)[length - 1] = '\0';
}

/**
Allocates and randomizes an array of a strings
@param <CountType> The type of value used as the allocated array's count
@param [in] rngContext The RngContext to use for randomizing the allocated objects
@param [out] count A reference to a value to populate with the number of allocated objects
@param [out] ppStr A reference to a pointer to populate with the allocated strings array's storage address
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
Allocates and randomizes an object to use as a pNext member
@param [in] rngContext The RngContext to use for randomizing the allocated pNext object
@param [in](optional = true) randomizePNext Whether or not to randomly generate a pNext chain
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
Randomizes a given VkApplicationInfo
@param [in] rngContext The RngContext to use for randomizing the given VkApplicationInfo
@param [out] obj A reference to the VkApplicationInfo to randomize
@param [in](optional = false) randomizePNext Whether or not to randomize the given VkApplicationInfo object's pNext member
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
Randomizes a given VkInstanceCreateInfo
@param [in] rngContext The RngContext to use for randomizing the given VkInstanceCreateInfo
@param [out] obj A reference to the VkInstanceCreateInfo to randomize
@param [in](optional = false) randomizePNext Whether or not to randomize the given VkInstanceCreateInfo object's pNext member
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
Randomizes a given VkDeviceQueueCreateInfo
@param [in] rngContext The RngContext to use for randomizing the given VkDeviceQueueCreateInfo
@param [out] obj A reference to the VkDeviceQueueCreateInfo to randomize
@param [in](optional = false) randomizePNext Whether or not to randomize the given VkDeviceQueueCreateInfo object's pNext member
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
/**
Randomizes a given VkDeviceCreateInfo
@param [in] rngContext The RngContext to use for randomizing the given VkDeviceCreateInfo
@param [out] obj A reference to the VkDeviceCreateInfo to randomize
@param [in](optional = false) randomizePNext Whether or not to randomize the given VkDeviceCreateInfo object's pNext member
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
Randomizes a given VkViewport
@param [in] rngContext The RngContext to use for randomizing the given VkViewport
@param [out] obj A reference to the VkViewport to randomize
@param [in](optional = false) randomizePNext Whether or not to randomize the given VkViewport object's pNext member
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
Randomizes a given VkPipelineViewportStateCreateInfo
@param [in] rngContext The RngContext to use for randomizing the given VkPipelineViewportStateCreateInfo
@param [out] obj A reference to the VkPipelineViewportStateCreateInfo to randomize
@param [in](optional = false) randomizePNext Whether or not to randomize the given VkPipelineViewportStateCreateInfo object's pNext member
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
Randomizes a given VkPipelineCacheCreateInfo
@param [in] rngContext The RngContext to use for randomizing the given VkPipelineCacheCreateInfo
@param [out] obj A reference to the VkPipelineCacheCreateInfo to randomize
@param [in](optional = false) randomizePNext Whether or not to randomize the given VkPipelineCacheCreateInfo object's pNext member
*/
template <>
inline void randomize_structure<VkPipelineCacheCreateInfo>(RngContext& rngContext, VkPipelineCacheCreateInfo& obj, bool randomizePNext)
{
    randomize_bytes(rngContext, sizeof(obj), (uint8_t*)&obj);
    obj.pNext = randomizePNext ? randomize_pnext(rngContext) : nullptr;
    randomize_void_data(rngContext, obj.initialDataSize, obj.pInitialData);
}

/**
Randomizes a given VkImageCreateInfo
@param [in] rngContext The RngContext to use for randomizing the given VkImageCreateInfo
@param [out] obj A reference to the VkImageCreateInfo to randomize
@param [in](optional = false) randomizePNext Whether or not to randomize the given VkImageCreateInfo object's pNext member
*/
template <>
inline void randomize_structure<VkImageCreateInfo>(RngContext& rngContext, VkImageCreateInfo& obj, bool randomizePNext)
{
    randomize_bytes(rngContext, sizeof(obj), (uint8_t*)&obj);
    obj.pNext = randomizePNext ? randomize_pnext(rngContext) : nullptr;
    randomize_array(rngContext, obj.queueFamilyIndexCount, obj.pQueueFamilyIndices);
}

/**
Randomizes a given VkEventCreateInfo
@param [in] rngContext The RngContext to use for randomizing the given VkEventCreateInfo
@param [out] obj A reference to the VkEventCreateInfo to randomize
@param [in](optional = false) randomizePNext Whether or not to randomize the given VkEventCreateInfo object's pNext member
*/
template <>
inline void randomize_structure<VkEventCreateInfo>(RngContext& rngContext, VkEventCreateInfo& obj, bool randomizePNext)
{
    obj.sType = VK_STRUCTURE_TYPE_EVENT_CREATE_INFO;
    obj.pNext = randomizePNext ? randomize_pnext(rngContext) : nullptr;
    obj.flags = rngContext.rng.probability(0.5f) ? 0 : 1;
}

/**
Gets a std::vector<> of randomized objects of a specified type
@param <VulkanStructureType> The type of objects to allocate and randomize
@param [in] rngContext The RngContext to use for randomizing the allocated objects
@param [in](optional = 128) count The number of objects to allocate and randomize
@return A std::vector<> of randomized objects of the specified type and count
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
