
/*
==========================================
  Copyright (c) 2020 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#include "dynamic_static/graphics/vulkan/create-structure-copy.hpp"
#include "dynamic_static/graphics/vulkan/comparison-operators.hpp"
#include "randomize-structure.hpp"

#include "catch2/catch.hpp"

#include <unordered_set>

namespace dst {
namespace gfx {
namespace vk {
namespace tests {

/**
Validates that all allocations made during a test scenario are freed
*/
class AllocationValidator final
{
public:
    /**
    Constructs an instance of AllocationValidator
    */
    AllocationValidator()
    {
        mAllocationCallbacks.pUserData = this;
        mAllocationCallbacks.pfnAllocation = on_allocation;
        mAllocationCallbacks.pfnFree = on_free;
    }

    /**
    Destroys this instance of AllocationValidator
    */
    ~AllocationValidator()
    {
        CHECK(mAllocations.empty());
    }

    /**
    Gets this AllocationValidator object's VkAllocationCallbacks
    */
    const VkAllocationCallbacks& get_allocation_callbacks() const
    {
        return mAllocationCallbacks;
    }

private:
    static void* on_allocation(void* pUserData, size_t size, size_t, VkSystemAllocationScope)
    {
        auto pAllocationTracker = (AllocationValidator*)pUserData;
        auto pData = malloc(size);
        REQUIRE(pAllocationTracker->mAllocations.insert(pData).second);
        return pData;
    }

    static void on_free(void* pUserData, void* pMemory)
    {
        auto pAllocationTracker = (AllocationValidator*)pUserData;
        REQUIRE(pAllocationTracker->mAllocations.count(pMemory));
        pAllocationTracker->mAllocations.erase(pMemory);
        free(pMemory);
    }

    VkAllocationCallbacks mAllocationCallbacks { };
    std::unordered_set<void*> mAllocations;
};

/**
Validates that a copied structure evaluates as equal to the structure it was copied from and that destroy_structure_copy<>() properly frees any allocations made from create_structure_copy<>()
@param <VulkanStructureType> The type of object to validate create_structure_copy<>() and destroy_structure_copy<>() for
@param [in] rngContext The RngContext to use for randomizing the copy source object of the specified type
*/
template <typename VulkanStructureType>
inline void validate_structure_copy(RngContext& rngContext)
{
    AllocationValidator allocationValidator;
    VulkanStructureType obj { };
    randomize_structure(rngContext, obj);
    auto copy = detail::create_structure_copy(obj, &allocationValidator.get_allocation_callbacks());
    REQUIRE(obj == copy);
    detail::destroy_structure_copy(copy, &allocationValidator.get_allocation_callbacks());
}

/**
Validates create/destroy structure copy for POD structures
*/
TEST_CASE("Structure copy for POD structures")
{
    RngContext rngContext;
    validate_structure_copy<VkExtent2D>(rngContext);
    validate_structure_copy<VkOffset2D>(rngContext);
    validate_structure_copy<VkRect2D>(rngContext);
}

/**
Validates create/destroy structure copy for unions
*/
TEST_CASE("Structure copy for unions")
{
    RngContext rngContext;
    SECTION("Union")
    {
        validate_structure_copy<VkClearColorValue>(rngContext);
        validate_structure_copy<VkPerformanceCounterResultKHR>(rngContext);
        validate_structure_copy<VkPipelineExecutableStatisticValueKHR>(rngContext);
    }
    SECTION("Union with union member")
    {
        validate_structure_copy<VkClearValue>(rngContext);
    }
}

/**
Validates create/destroy structure copy for structures with statically sized array members
*/
TEST_CASE("Structure copy for structures with statically sized array members")
{
    RngContext rngContext;
    SECTION("Structure with statically sized string member")
    {
        validate_structure_copy<VkLayerProperties>(rngContext);
    }
    SECTION("Structure with statically sized POD array member")
    {
        validate_structure_copy<VkImageBlit>(rngContext);
    }
    SECTION("Structure with statically sized VkStructure array member")
    {
        validate_structure_copy<VkPhysicalDeviceMemoryProperties>(rngContext);
    }
}

/**
Validates create/destroy structure copy for structures with dynamically sized array members
*/
TEST_CASE("Structure copy for structures with dynamically sized array members")
{
    RngContext rngContext;
    SECTION("Structure with dynamically sized string member")
    {
        validate_structure_copy<VkApplicationInfo>(rngContext);
    }
    SECTION("Structure with dynamically sized POD array member")
    {
        validate_structure_copy<VkImageCreateInfo>(rngContext);
    }
    SECTION("Structure with dynamically sized VkStructure array member")
    {
        validate_structure_copy<VkPipelineViewportStateCreateInfo>(rngContext);
    }
    SECTION("Structure with dynamically sized void* data member")
    {
        validate_structure_copy<VkPipelineCacheCreateInfo>(rngContext);
    }
    SECTION("Structure with dynamically sized array member of dynamically sized strings")
    {
        validate_structure_copy<VkInstanceCreateInfo>(rngContext);
    }
    SECTION("Structure with dynamically sized VkStructure array member with dynamically sized array member")
    {
        validate_structure_copy<VkDeviceCreateInfo>(rngContext);
    }
}

/**
Validates create/destroy structure copy for structures with pointers to structures
*/
TEST_CASE("Structure copy for structures with pointers to structures")
{
    RngContext rngContext;
    validate_structure_copy<VkInstanceCreateInfo>(rngContext);
}

/**
Validates create/destroy structure copy for structures with pNext members
*/
TEST_CASE("Structure copy for structures with pNext members")
{
    RngContext rngContext;
    validate_structure_copy<VkEventCreateInfo>(rngContext);
}

} // namespace tests
} // namespace vk
} // namespace gfx
} // namespace dst
