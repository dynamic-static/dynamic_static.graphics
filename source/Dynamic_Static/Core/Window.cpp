
/*
================================================================================

  MIT License

  Copyright (c) 2017 Dynamic_Static

  Permission is hereby granted, free of charge, to any person obtaining a copy
  of this software and associated documentation files (the "Software"), to deal
  in the Software without restriction, including without limitation the rights
  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
  copies of the Software, and to permit persons to whom the Software is
  furnished to do so, subject to the following conditions:

  The above copyright notice and this permission notice shall be included in all
  copies or substantial portions of the Software.

  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
  SOFTWARE.

================================================================================
*/

#include "Dynamic_Static/Core/Window.hpp"

// TODO : GLFWInclude.hpp
#include "GLFW/glfw3.h"

#if defined(DYNAMIC_STATIC_WINDOWS)
    #define GLFW_EXPOSE_NATIVE_WIN32
#elif defined(DYNAMIC_STATIC_LINUX)
    #define GLFW_EXPOSE_NATIVE_X11
    #define GLFW_EXPOSE_NATIVE_GLX
#endif
#include "GLFW/glfw3native.h"

#include <iostream>

namespace Dynamic_Static
{
    Window::Window()
    {
        if (glfwInit() == GLFW_TRUE) {
            std::cout << "GLFW init success" << std::endl;
        } else {
            std::cout << "GLFW init fail" << std::endl;
        }
    }

    Window::~Window()
    {
        glfwTerminate();
    }
} // namespace Dynamic_Static
