
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

namespace dst {
namespace gfx {
namespace vk {
namespace detail {

/**
TODO : Documentation
*/
struct PNextTupleElementWrapper final
{
    const void* pNext { nullptr }; //!< TODO : Documentation
};

/**
TODO : Documentation
*/
struct DynamicStringTupleElementWrapper final
{
    const char* pStr { nullptr }; //!< TODO : Documentation
};

/**
TODO : Documentation
*/
struct DynamicStringArrayTupleElementWrapper final
{
    size_t count { 0 };                    //!< TODO : Documentation
    const char* const* ppStrs { nullptr }; //!< TODO : Documentation
};

} // namespace detail
} // namespace vk
} // namespace gfx
} // namespace dst
