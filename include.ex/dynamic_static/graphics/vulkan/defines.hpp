
/*
==========================================
  Copyright (c) 2017-2020 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#pragma once

#include "dynamic_static/graphics/defines.hpp"

#ifdef DYNAMIC_STATIC_PLATFORM_WINDOWS
#ifndef VK_USE_PLATFORM_WIN32_KHR
#define VK_USE_PLATFORM_WIN32_KHR 1
#endif
#include "dynamic_static/core/win32-lean-and-mean.hpp"
#endif
#ifdef DYNAMIC_STATIC_PLATFORM_LINUX
#ifndef VK_USE_PLATFORM_XLIB_KHR
#define VK_USE_PLATFORM_XLIB_KHR 1
#endif
#endif
#include "vulkan/vulkan.h"

// #define DYNAMIC_STATIC_VALIDATE_VK_CALLS
#ifdef DYNAMIC_STATIC_VALIDATE_VK_CALLS
#define dst_vk // TODO :
#else
#define dst_vk(VK_VALL) VK_CALL
#endif

namespace dst {
namespace gfx {
namespace vk {



} // namespace vk
} // namespace gfx
namespace vk = gfx::vk;
} // namespace dst
