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

$<VK_HANDLE_TYPES>
$<CLASS_COMPILE_GUARDS>
// ${VK_HANDLE_TYPE} compile guards
#ifdef ${CLASS_COMPILE_GUARD}
$</CLASS_COMPILE_GUARDS>
template <>
class Handle<${VK_HANDLE_TYPE}> final
{
public:
    Handle${VK_HANDLE_TYPE}() = default;
};
$<CLASS_COMPILE_GUARDS>
#endif // ${CLASS_COMPILE_GUARD}
$</CLASS_COMPILE_GUARDS>
$</VK_HANDLE_TYPES>

} // namespace vk
} // namespace gfx
} // namespace dst
