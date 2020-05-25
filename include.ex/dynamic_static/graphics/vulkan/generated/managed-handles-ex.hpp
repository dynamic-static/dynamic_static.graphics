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



#ifdef ENABLE_FOO // Foo compile guards

template <>
class Handle<Foo> final
{
public:
    HandleFoo() = default;
};
$<CLASS_COMPILE_GUARDS>
#endif // ${CLASS_COMPILE_GUARD}
$</CLASS_COMPILE_GUARDS>



#ifdef ENABLE_BAR // Bar compile guards

#ifdef WINDOWS // Bar compile guards

template <>
class Handle<Bar> final
{
public:
    HandleBar() = default;
};
$<CLASS_COMPILE_GUARDS>
#endif // ${CLASS_COMPILE_GUARD}
$</CLASS_COMPILE_GUARDS>


$<CLASS_COMPILE_GUARDS>
#ifdef ${CLASS_COMPILE_GUARD} // Baz compile guards
$</CLASS_COMPILE_GUARDS>
template <>
class Handle<Baz> final
{
public:
    HandleBaz() = default;
};
$<CLASS_COMPILE_GUARDS>
#endif // ${CLASS_COMPILE_GUARD}
$</CLASS_COMPILE_GUARDS>



} // namespace vk
} // namespace gfx
} // namespace dst
