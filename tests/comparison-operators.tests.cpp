
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
        if (!(*itr == *itr) || *itr != *itr || *itr < *itr || *itr > *itr) {
            return false;
        }
        for (auto jtr = itr + 1; jtr != objs.end(); ++jtr) {
            if (*itr == *jtr) {
                if (*itr != *jtr || *itr < *jtr || *itr >* jtr) {
                    return false;
                }
            } else
            if ((*itr < *jtr) && (*itr > * jtr)) {
                return false;
            }
        }
    }
    return true;
}

/**
TODO : Documentation
*/
TEST_CASE("BadLessThanOperator")
{
    RandomNumberGenerator rng;
    std::vector<BadLessThanOperator> badLessThanOperators(1024);
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
TEST_CASE("Comparison operators")
{
    VkRect2D lhs { };
    VkRect2D rhs { };
    REQUIRE(validate_comparison_operators<VkRect2D>({ lhs, rhs }));
    RandomNumberGenerator rng;
    std::vector<VkRect2D> objs(1024);
    for (auto& obj : objs) {
        obj.offset.x = rng.value<int32_t>();
        obj.offset.y = rng.value<int32_t>();
        obj.extent.width = rng.value<uint32_t>();
        obj.extent.height = rng.value<uint32_t>();
    }
    REQUIRE(validate_comparison_operators(objs));
}

} // namespace tests
} // namespace vk
} // namespace gfx
} // namespace dst
