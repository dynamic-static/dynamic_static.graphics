
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
#ifndef VK_ENABLE_BETA_EXTENSIONS
#define VK_ENABLE_BETA_EXTENSIONS
#endif
#include "vulkan/vulkan.h"

// #define DYNAMIC_STATIC_VALIDATE_VK_CALLS
#ifdef DYNAMIC_STATIC_VALIDATE_VK_CALLS
#define dst_vk // TODO :
#else
#define dst_vk(VK_CALL) VK_CALL
#endif

/*

    Normalized Device Coordinates (NDC)
    -1,-1        1,-1
      +-----------+
      |           |
      |           |
      |           |
      |           |
      +-----------+
    -1,1         1,1

    Texture Coordinates (TC)
     0,0         1,0
      +-----------+
      |           |
      |           |
      |           |
      |           |
      +-----------+
     0,1         1,1

    -1,-1              1,-1
      +-----------------+
      |(NDC)            |
      |                 |
      |       0,0      1,0
      |        +--------+
      |        |(TC)    |
      |        |        |
      |        |        |
      +--------+--------+
    -1,1      0,1      1,1


             u = (i << 1) &   2   v = i &   2
    =========================================
    i = 0 :    (000 << 1) & 010 
                      000 & 010     000 & 010
                            000           000
                          -----         -----
                          u = 0         v = 0
    =========================================
    i = 1 :    (001 << 1) & 010 
                      010 & 010     001 & 010
                            010           000
                          -----         -----
                          u = 2         v = 0
    =========================================
    i = 2 :    (010 << 1) & 010 
                      100 & 010     010 & 010
                            000           010
                          -----         -----
                          u = 0         v = 2

    0,0 (TC)                                        2,0 (TC)
    v0-----------------------+.......................v1
     |                       |                    .
     |                       |                 .
     |                       |              .
     |                       |           .
     |                       |        .
     |                       |     .
     |                       |  .
     +-----------------------+
     .                    . 1,1 (TC)
     .                 .
     .              .
     .           .
     .        .
     .     .
     .  .
    v2
    0,2 (TC)

*/
