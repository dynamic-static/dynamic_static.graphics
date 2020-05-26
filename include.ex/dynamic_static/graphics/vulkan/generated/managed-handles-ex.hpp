/*
==========================================
  Copyright (c) 2020 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#pragma once

#include "vulkan/vulkan.h"

namespace dst {
namespace gfx {
namespace vk {



#ifdef ENABLE_FOO // Foo compile guard

template <>
class Handle<Foo> final
{
public:
    HandleFoo() = default;
};

#endif // ENABLE_FOO



#ifdef ENABLE_BAR // Bar compile guard

#ifdef WINDOWS // Bar compile guard

template <>
class Handle<Bar> final
{
public:
    HandleBar() = default;
};

#endif // WINDOWS

#endif // ENABLE_BAR



template <>
class Handle<Baz> final
{
public:
    HandleBaz() = default;
};



} // namespace vk
} // namespace gfx
} // namespace dst
