
/*
==========================================
    Copyright (c) 2017 Dynamic_Static
    Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#pragma once

#include "Dynamic_Static/Graphics/Defines.hpp"
#include "Dynamic_Static/Graphics/Vulkan/VulkanInclude.hpp"

#if defined(DYNAMIC_STATIC_MSVC)
#pragma warning(push)
#pragma warning(disable : 4714) // `function marked as __forceinline not inlined`
#endif

#include "vulkan/vulkan.hpp"

#if defined(DYNAMIC_STATIC_MSVC)
#pragma warning(pop)
#endif
