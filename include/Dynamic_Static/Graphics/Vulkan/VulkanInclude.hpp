
#if 0
/*
==========================================
    Copyright (c) 2017 Dynamic_Static
    Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#pragma once

#include "Dynamic_Static/Graphics/Defines.hpp"

#if defined(DYNAMIC_STATIC_WINDOWS)
    #ifndef VK_USE_PLATFORM_WIN32_KHR
    #define VK_USE_PLATFORM_WIN32_KHR
    #endif
#include "Dynamic_Static/Core/Win32LeanAndMean.hpp"
#elif defined(DYNAMIC_STATIC_LINUX)
    #ifndef VK_USE_PLATFORM_XLIB_KHR
    #define VK_USE_PLATFORM_XLIB_KHR
    #endif
#endif

#include "vulkan/vulkan.h"
#endif
