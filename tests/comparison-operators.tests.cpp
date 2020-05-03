
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

#include <vector>

namespace dst {
namespace gfx {
namespace vk {
namespace tests {

/**
TODO : Documentation
*/
struct BadLessThanOperator final
{
    int a;
    int b;
    int c;
};

/**
TODO : Documentation
*/
inline bool operator==(const BadLessThanOperator& lhs, const BadLessThanOperator& rhs)
{
    return
        lhs.a == rhs.a &&
        lhs.b == rhs.b &&
        lhs.c == rhs.c;
}

/**
TODO : Documentation
*/
inline bool operator!=(const BadLessThanOperator& lhs, const BadLessThanOperator& rhs)
{
    return !(lhs == rhs);
}

/**
TODO : Documentation
*/
inline bool operator<(const BadLessThanOperator& lhs, const BadLessThanOperator& rhs)
{
    return
        lhs.a < rhs.a ||
        lhs.b < rhs.b ||
        lhs.c < rhs.c;
}

/**
TODO : Documentation
*/
inline bool operator<=(const BadLessThanOperator& lhs, const BadLessThanOperator& rhs)
{
    return !(rhs < lhs);
}

/**
TODO : Documentation
*/
inline bool operator>(const BadLessThanOperator& lhs, const BadLessThanOperator& rhs)
{
    return rhs < lhs;
}

/**
TODO : Documentation
*/
inline bool operator>=(const BadLessThanOperator& lhs, const BadLessThanOperator& rhs)
{
    return !(lhs < rhs);
}

template <typename T>
inline bool validate_comparison_operators(const std::vector<T>& objs)
{
    for (auto itr = objs.begin(); itr != objs.end(); ++itr) {
        if (!(*itr == *itr)) {
            return false;
        }
        if (*itr != *itr) {
            return false;
        }
        if (*itr < *itr) {
            return false;
        }
        if (*itr > * itr) {
            return false;
        }
        for (auto jtr = itr + 1; jtr != objs.end(); ++jtr) {
            if (*itr == *jtr) {
                if (*itr != *jtr) {
                    return false;
                }
                if (*itr < *jtr) {
                    return false;
                }
                if (*itr > * jtr) {
                    return false;
                }
            } else
            if (*itr < *jtr && *itr > * jtr) {
                return false;
            }
        }
    }
    return true;
}

/**
TODO : Documentation
*/
template <typename T>
void randomize(RandomNumberGenerator<>& rng, T& obj)
{
    obj = rng.value<T>();
}

/**
TODO : Documentation
*/
template <>
void randomize(RandomNumberGenerator<>& rng, VkRect2D& obj)
{
    obj.offset.x = rng.value<int32_t>();
    obj.offset.y = rng.value<int32_t>();
    obj.extent.width = rng.value<uint32_t>();
    obj.extent.height = rng.value<uint32_t>();
}

/**
TODO : Documentation
*/
template <>
void randomize(RandomNumberGenerator<>& rng, VkClearColorValue& obj)
{
    if (rng.probability(0.5f)) {
        obj.float32[0] = rng.value<float>();
        obj.float32[1] = rng.value<float>();
        obj.float32[2] = rng.value<float>();
        obj.float32[3] = rng.value<float>();
    } else {
        obj.uint32[0] = rng.value<uint32_t>();
        obj.uint32[1] = rng.value<uint32_t>();
        obj.uint32[2] = rng.value<uint32_t>();
        obj.uint32[3] = rng.value<uint32_t>();
    }
}

/**
TODO : Documentation
*/
TEST_CASE("BadLessThanOperator")
{
    RandomNumberGenerator rng;
    std::vector<BadLessThanOperator> badLessThanOperators(512);
    for (auto& badLessThanOperator : badLessThanOperators) {
        badLessThanOperator.a = rng.value<int>();
        badLessThanOperator.b = rng.value<int>();
        badLessThanOperator.c = rng.value<int>();
    }
    REQUIRE_FALSE(validate_comparison_operators(badLessThanOperators));
}

/**
TODO : Documentation
*/
TEST_CASE("Comparison operators : basic")
{
    RandomNumberGenerator rng;
    std::vector<VkRect2D> objs(512);
    for (auto& obj : objs) {
        randomize(rng, obj);
    }
    REQUIRE(validate_comparison_operators(objs));
}

/**
TODO : Documentation
*/
TEST_CASE("Comparison operators : union")
{

    RandomNumberGenerator rng;
    std::vector<VkClearColorValue> objs(5);
    for (auto& obj : objs) {
        randomize<VkClearColorValue>(rng, obj);
    }
    REQUIRE(validate_comparison_operators(objs));
}

} // namespace tests
} // namespace vk
} // namespace gfx
} // namespace dst
