
/*
==========================================
  Copyright (c) 2020 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#pragma once

#include "dynamic_static/graphics/vulkan/detail/tuple-element-wrappers.hpp"
#include "dynamic_static/graphics/vulkan/defines.hpp"

#include <string_view>

namespace dst {
namespace gfx {
namespace vk {
namespace detail {

/**
TODO : Documentation
*/
bool operator==(const PNextTupleElementWrapper& lhs, const PNextTupleElementWrapper& rhs);

/**
TODO : Documentation
*/
bool operator!=(const PNextTupleElementWrapper& lhs, const PNextTupleElementWrapper& rhs);

/**
TODO : Documentation
*/
bool operator<(const PNextTupleElementWrapper& lhs, const PNextTupleElementWrapper& rhs);

/**
TODO : Documentation
*/
bool operator<=(const PNextTupleElementWrapper& lhs, const PNextTupleElementWrapper& rhs);

/**
TODO : Documentation
*/
inline bool operator>(const PNextTupleElementWrapper& lhs, const PNextTupleElementWrapper& rhs)
{
    return rhs < lhs;
}

/**
TODO : Documentation
*/
inline bool operator>=(const PNextTupleElementWrapper& lhs, const PNextTupleElementWrapper& rhs)
{
    return !(lhs < rhs);
}

/**
TODO : Documentation
*/
inline bool operator==(const DynamicStringTupleElementWrapper& lhs, const DynamicStringTupleElementWrapper& rhs)
{
    return lhs.pStr && rhs.pStr ? strcmp(lhs.pStr, rhs.pStr) == 0 : !lhs.pStr && !rhs.pStr;
}

/**
TODO : Documentation
*/
inline bool operator!=(const DynamicStringTupleElementWrapper& lhs, const DynamicStringTupleElementWrapper& rhs)
{
    return !(lhs == rhs);
}

/**
TODO : Documentation
*/
inline bool operator<(const DynamicStringTupleElementWrapper& lhs, const DynamicStringTupleElementWrapper& rhs)
{
    if (lhs.pStr && !rhs.pStr) {
        return false;
    }
    if (!lhs.pStr && rhs.pStr) {
        return true;
    }
    return std::string_view(lhs.pStr) < std::string_view(rhs.pStr);
}

/**
TODO : Documentation
*/
inline bool operator<=(const DynamicStringTupleElementWrapper& lhs, const DynamicStringTupleElementWrapper& rhs)
{
    return !(rhs < lhs);
}

/**
TODO : Documentation
*/
inline bool operator>(const DynamicStringTupleElementWrapper& lhs, const DynamicStringTupleElementWrapper& rhs)
{
    return rhs < lhs;
}

/**
TODO : Documentation
*/
inline bool operator>=(const DynamicStringTupleElementWrapper& lhs, const DynamicStringTupleElementWrapper& rhs)
{
    return !(lhs < rhs);
}

/**
TODO : Documentation
*/
inline bool operator==(const DynamicStringArrayTupleElementWrapper& lhs, const DynamicStringArrayTupleElementWrapper& rhs)
{
    return false;
}

/**
TODO : Documentation
*/
inline bool operator!=(const DynamicStringArrayTupleElementWrapper& lhs, const DynamicStringArrayTupleElementWrapper& rhs)
{
    return !(lhs == rhs);
}

/**
TODO : Documentation
*/
inline bool operator<(const DynamicStringArrayTupleElementWrapper& lhs, const DynamicStringArrayTupleElementWrapper& rhs)
{
    return false;
}

/**
TODO : Documentation
*/
inline bool operator<=(const DynamicStringArrayTupleElementWrapper& lhs, const DynamicStringArrayTupleElementWrapper& rhs)
{
    return !(rhs < lhs);
}

/**
TODO : Documentation
*/
inline bool operator>(const DynamicStringArrayTupleElementWrapper& lhs, const DynamicStringArrayTupleElementWrapper& rhs)
{
    return rhs < lhs;
}

/**
TODO : Documentation
*/
inline bool operator>=(const DynamicStringArrayTupleElementWrapper& lhs, const DynamicStringArrayTupleElementWrapper& rhs)
{
    return !(lhs < rhs);
}

} // namespace detail
} // namespace vk
} // namespace gfx
} // namespace dst
