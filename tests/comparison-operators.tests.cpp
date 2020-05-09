
/*
==========================================
  Copyright (c) 2020 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#include "dynamic_static/graphics/vulkan/detail/tuple-element-wrappers.hpp"
#include "dynamic_static/graphics/vulkan/comparison-operators.hpp"
#include "randomize-structure.hpp"

#include "catch2/catch.hpp"

#include <functional>
#include <type_traits>
#include <vector>

namespace dst {
namespace gfx {
namespace vk {
namespace tests {

// NOTE : These tests aren't concerned with the actual </> ordering of Vulkan
//  structures, only that the comparison operators satisfy the strict weak
//  ordering requirements for sorting using std functions and containers.

/**
TODO : Documentation
*/
template <typename VulkanStructureType>
inline void validate_equality(const VulkanStructureType& lhs, const VulkanStructureType& rhs)
{
    REQUIRE      (lhs == rhs);
    REQUIRE_FALSE(lhs != rhs);
    REQUIRE_FALSE(lhs <  rhs);
    REQUIRE      (lhs <= rhs);
    REQUIRE_FALSE(lhs >  rhs);
    REQUIRE      (lhs >= rhs);
}

/**
TODO : Documentation
*/
template <typename VulkanStructureType>
inline void validate_less_than(const VulkanStructureType& lhs, const VulkanStructureType& rhs)
{
    REQUIRE_FALSE(lhs == rhs);
    REQUIRE      (lhs != rhs);
    REQUIRE      (lhs <  rhs);
    REQUIRE      (lhs <= rhs);
    REQUIRE_FALSE(lhs >  rhs);
    REQUIRE_FALSE(lhs >= rhs);
}

/**
TODO : Documentation
*/
template <typename VulkanStructureType>
inline void validate_greater_than(const VulkanStructureType& lhs, const VulkanStructureType& rhs)
{
    REQUIRE_FALSE(lhs == rhs);
    REQUIRE      (lhs != rhs);
    REQUIRE_FALSE(lhs <  rhs);
    REQUIRE_FALSE(lhs <= rhs);
    REQUIRE      (lhs >  rhs);
    REQUIRE      (lhs >= rhs);
}

/**
TODO : Documentation
*/
template <typename VulkanStructureType>
inline void validate_comparison_operators(RngContext& rngContext)
{
    auto objs = get_randomized_structures<VulkanStructureType>(rngContext);
    for (size_t i = 0; i < objs.size(); ++i) {
        auto const& lhs = objs[i];
        for (size_t j = i; j < objs.size(); ++j) {
            auto const& rhs = objs[j];
            INFO("{ i : " + std::to_string(i) + ", j : " + std::to_string(j) + " }");
            if (i == j || lhs == rhs) {
                validate_equality(lhs, rhs);
                validate_equality(rhs, lhs);
            } else {
                if (lhs < rhs) {
                    validate_less_than(lhs, rhs);
                    validate_greater_than(rhs, lhs);
                } else
                if (lhs > rhs) {
                    validate_greater_than(lhs, rhs);
                    validate_less_than(rhs, lhs);
                } else {
                    FAIL("None of ==, <, or > were true for the given objects");
                }
            }
        }
    }
}

/**
TODO : Documentation
*/
TEST_CASE("Comparison operators for POD structures")
{
    RngContext rngContext;
    validate_comparison_operators<VkExtent2D>(rngContext);
    validate_comparison_operators<VkOffset2D>(rngContext);
    validate_comparison_operators<VkRect2D>(rngContext);
}

/**
TODO : Documentation
*/
TEST_CASE("Comparison operators for unions")
{
    RngContext rngContext;
    SECTION("Union")
    {
        validate_comparison_operators<VkClearColorValue>(rngContext);
        validate_comparison_operators<VkPerformanceCounterResultKHR>(rngContext);
        validate_comparison_operators<VkPipelineExecutableStatisticValueKHR>(rngContext);
    }
    SECTION("Union with union member")
    {
        validate_comparison_operators<VkClearValue>(rngContext);
    }
}

/**
TODO : Documentation
*/
TEST_CASE("Comparison operators for structures with statically sized array members")
{
    RngContext rngContext;
    SECTION("Structure with statically sized string member")
    {
        validate_comparison_operators<VkLayerProperties>(rngContext);
    }
    SECTION("Structure with statically sized POD array member")
    {
        validate_comparison_operators<VkImageBlit>(rngContext);
    }
    SECTION("Structure with statically sized VkStructure array member")
    {
        validate_comparison_operators<VkPhysicalDeviceMemoryProperties>(rngContext);
    }
}

/**
TODO : Documentation
*/
TEST_CASE("Comparison operators for structures with dynamically sized array members")
{
    RngContext rngContext;
    SECTION("Structure with dynamically sized string member")
    {
        validate_comparison_operators<VkApplicationInfo>(rngContext);
    }
    SECTION("Structure with dynamically sized POD array member")
    {
        validate_comparison_operators<VkImageCreateInfo>(rngContext);
    }
    SECTION("Structure with dynamically sized VkStructure array member")
    {
        validate_comparison_operators<VkPipelineViewportStateCreateInfo>(rngContext);
    }
    SECTION("Structure with dynamically sized void* data member")
    {
        validate_comparison_operators<VkPipelineCacheCreateInfo>(rngContext);
    }
    SECTION("Structure with dynamically sized array member of dynamically sized strings")
    {
        validate_comparison_operators<VkInstanceCreateInfo>(rngContext);
    }
    SECTION("Structure with dynamically sized VkStructure array member with dynamically sized array member")
    {
        // TODO :
    }
}

/**
TODO : Documentation
*/
TEST_CASE("Comparison operators for structures with pointers to structures")
{
    RngContext rngContext;
}

/**
TODO : Documentation
*/
TEST_CASE("Comparison operators for structures with pNext members")
{
    RngContext rngContext;
    SECTION("Structure with pNext member")
    {
        // TODO :
    }
    SECTION("Structure with chained pNext member")
    {
        // TODO :
    }
}

} // namespace tests
} // namespace vk
} // namespace gfx
} // namespace dst