
/*
==========================================
  Copyright (c) 2020 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#include "dynamic_static/graphics/vulkan/comparison-operators.hpp"
#include "dynamic_static/core/random.hpp"

#include "catch2/catch.hpp"

#include <type_traits>
#include <vector>

namespace dst {
namespace gfx {
namespace vk {
namespace tests {

template <typename CountType, typename T>
void randomize_dynamic_array(RandomNumberGenerator<>& rng, CountType& count, T*& pObjs);
void randomize_dynamic_string(RandomNumberGenerator<>& rng, const char*& pStr);

template <typename T>
inline void randomize(RandomNumberGenerator<>& rng, T& obj)
{
    auto pObj = (uint8_t*)&obj;
    for (size_t i = 0; i < sizeof(T); ++i) {
        pObj[i] = rng.value<uint8_t>();
    }
}

template <>
inline void randomize(RandomNumberGenerator<>& rng, VkApplicationInfo& obj)
{
    randomize(rng, obj.sType);
    obj.pNext = nullptr;
    randomize_dynamic_string(rng, obj.pApplicationName);
    randomize(rng, obj.applicationVersion);
    randomize_dynamic_string(rng, obj.pEngineName);
    randomize(rng, obj.engineVersion);
    randomize(rng, obj.apiVersion);
}

template <>
inline void randomize(RandomNumberGenerator<>& rng, VkDeviceCreateInfo& obj)
{
    obj.sType = (VkStructureType)rng.value<uint32_t>();
    obj.pNext = nullptr;
    randomize(rng, obj.flags);
    obj.queueCreateInfoCount = 0;
    obj.pQueueCreateInfos = nullptr;
}

template <>
inline void randomize(RandomNumberGenerator<>& rng, VkImageCreateInfo& obj)
{
    randomize(rng, obj.sType);
    obj.pNext = nullptr;
    randomize(rng, obj.flags);
    randomize(rng, obj.imageType);
    randomize(rng, obj.format);
    randomize(rng, obj.extent);
    randomize(rng, obj.mipLevels);
    randomize(rng, obj.arrayLayers);
    randomize(rng, obj.samples);
    randomize(rng, obj.tiling);
    randomize(rng, obj.usage);
    randomize(rng, obj.sharingMode);
    randomize_dynamic_array(rng, obj.queueFamilyIndexCount, obj.pQueueFamilyIndices);
    randomize(rng, obj.initialLayout);
}

inline std::vector<std::function<void()>>& get_deleters()
{
    static std::vector<std::function<void()>> deleters;
    return deleters;
}

inline void delete_allocations()
{
    for (const auto& deleter : get_deleters()) {
        deleter();
    }
    get_deleters().clear();
}

template <typename CountType, typename T>
inline void randomize_dynamic_array(RandomNumberGenerator<>& rng, CountType& count, T*& pObjs)
{
    count = rng.range<CountType>(1, 10);
    auto& nonConstPObjs = (std::remove_const<T>*&)pObjs;
    nonConstPObjs = new std::remove_const<T>[count];
    get_deleters().push_back([nonConstPObjs]() { delete[] nonConstPObjs; });
    for (CountType i = 0; i < count; ++i) {
        randomize(rng, nonConstPObjs[i]);
    }
}

inline void randomize_dynamic_string(RandomNumberGenerator<>& rng, const char*& pStr)
{
    size_t length = 0;
    randomize_dynamic_array(rng, length, pStr);
    ((char*)pStr)[length - 1] = '\0';
}

template <typename VulkanStructureType>
inline std::vector<VulkanStructureType> get_randomized_vk_structures(RandomNumberGenerator<>& rng)
{
    std::vector<VulkanStructureType> objs(256);
    for (auto& obj : objs) {
        randomize(rng, obj);
    }
    return objs;
}

template <typename VulkanStructureType>
inline void validate_comparison_operators(const std::vector<VulkanStructureType>& objs)
{
    for (size_t i = 0; i < objs.size(); ++i) {
        auto const& lhs = objs[i];
        for (size_t j = 0; j < objs.size(); ++j) {
            auto const& rhs = objs[j];
            INFO("{ i : " + std::to_string(i) + ", j : " + std::to_string(j) + " }");
            if (i == j || lhs == rhs) {
                REQUIRE      (lhs == rhs);
                REQUIRE_FALSE(lhs != rhs);
                REQUIRE_FALSE(lhs <  rhs);
                REQUIRE      (lhs <= rhs);
                REQUIRE_FALSE(lhs >  rhs);
                REQUIRE      (lhs >= rhs);
            } else {
                if (lhs < rhs) {
                    REQUIRE_FALSE(lhs == rhs);
                    REQUIRE      (lhs != rhs);
                    REQUIRE      (lhs <  rhs);
                    REQUIRE      (lhs <= rhs);
                    REQUIRE_FALSE(lhs >  rhs);
                    REQUIRE_FALSE(lhs >= rhs);
                } else
                if (lhs > rhs) {
                    REQUIRE_FALSE(lhs == rhs);
                    REQUIRE      (lhs != rhs);
                    REQUIRE_FALSE(lhs <  rhs);
                    REQUIRE_FALSE(lhs <= rhs);
                    REQUIRE      (lhs >  rhs);
                    REQUIRE      (lhs >= rhs);
                } else {
                    FAIL("None of ==, <, or > were true for the given objects");
                }
            }
        }
    }
}

template <typename VulkanStructureType>
inline void randomize_vk_structures_and_validate_comparison_operators(RandomNumberGenerator<>& rng)
{
    validate_comparison_operators(get_randomized_vk_structures<VulkanStructureType>(rng));
}

TEST_CASE("Comparison operators for POD structures")
{
    RandomNumberGenerator rng(0);
    randomize_vk_structures_and_validate_comparison_operators<VkExtent2D>(rng);
    randomize_vk_structures_and_validate_comparison_operators<VkOffset2D>(rng);
    randomize_vk_structures_and_validate_comparison_operators<VkRect2D>(rng);
}

TEST_CASE("Comparison operators for unions")
{
    RandomNumberGenerator rng(0);
    SECTION("Union")
    {
        randomize_vk_structures_and_validate_comparison_operators<VkClearColorValue>(rng);
        randomize_vk_structures_and_validate_comparison_operators<VkPerformanceCounterResultKHR>(rng);
        randomize_vk_structures_and_validate_comparison_operators<VkPipelineExecutableStatisticValueKHR>(rng);
    }
    SECTION("Union with union member")
    {
        randomize_vk_structures_and_validate_comparison_operators<VkClearValue>(rng);
    }
}

TEST_CASE("Comparison operators for structures with statically sized array members")
{
    RandomNumberGenerator rng(0);
    SECTION("Structure with statically sized string member")
    {
        randomize_vk_structures_and_validate_comparison_operators<VkExtensionProperties>(rng);
        randomize_vk_structures_and_validate_comparison_operators<VkLayerProperties>(rng);
    }
    SECTION("Structure with statically sized POD array member")
    {
        randomize_vk_structures_and_validate_comparison_operators<VkImageBlit>(rng);
    }
    // SECTION("Structure with statically sized VkStructure array member")
    // {
    //     randomize_vk_structures_and_validate_comparison_operators<VkPhysicalDeviceLimits>(rng);
    //     randomize_vk_structures_and_validate_comparison_operators<VkPhysicalDeviceMemoryProperties>(rng);
    // }
}

TEST_CASE("Comparison operators for structures with dynamically sized array members")
{
    RandomNumberGenerator rng(0);
    SECTION("Structure with dynamically sized string member")
    {
        randomize_vk_structures_and_validate_comparison_operators<VkApplicationInfo>(rng);
    }
    SECTION("Structure with dynamically sized POD array member")
    {
        randomize_vk_structures_and_validate_comparison_operators<VkImageCreateInfo>(rng);
    }
    SECTION("Structure with dynamically sized VkStructure array member")
    {

    }
    SECTION("Structure with dynamically sized data member")
    {
        // TODO :
    }
    SECTION("Structure with dynamically sized array member of dynamically sized strings")
    {
        // TODO :
    }
    SECTION("Structure with dynamically sized VkStructure array member with dynamically sized array member")
    {

    }
    delete_allocations();
}

TEST_CASE("Comparison operators for structures with pointers to structures")
{
    RandomNumberGenerator rng(0);
    delete_allocations();
}

TEST_CASE("Comparison operators for structures with pNext members")
{
    RandomNumberGenerator rng(0);
    SECTION("Structure with pNext member")
    {
        // TODO :
    }
    SECTION("Structure with chained pNext member")
    {
        // TODO :
    }
    delete_allocations();
}

} // namespace tests
} // namespace vk
} // namespace gfx
} // namespace dst
