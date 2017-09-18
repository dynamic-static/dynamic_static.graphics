
/*
==========================================
    Copyright (c) 2017 Dynamic_Static
    Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#pragma once

#include "Dynamic_Static/Core/Defines.hpp"

#include "GLFW/glfw3.h"
#if defined(DYNAMIC_STATIC_WINDOWS)
    #define GLFW_EXPOSE_NATIVE_WIN32
#elif defined(DYNAMIC_STATIC_LINUX)
    #define GLFW_EXPOSE_NATIVE_X11
    #define GLFW_EXPOSE_NATIVE_GLX
#endif
#include "GLFW/glfw3native.h"
