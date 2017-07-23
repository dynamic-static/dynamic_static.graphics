
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

#include "Dynamic_Static/Core/Algorithm.hpp"
#include "Dynamic_Static/Graphics/Window.hpp"
#include "Dynamic_Static/Graphics/OpenGL/GLEWInclude.hpp"
#include "GLFWInclude.hpp"

#include <iostream>
#include <set>

namespace Dynamic_Static {
namespace Graphics {

    static Window& dst_window(GLFWwindow* handle);
    static GLFWwindow* glfw_handle(const void* handle);
    static GLFWwindow* create_glfw_window(const Window::Configuration& configuration);
    static void destroy_glfw_window(GLFWwindow* handle);
    void frame_buffer_size_callback(GLFWwindow* handle, int width, int height);
    void keyboard_callback(GLFWwindow* handle, int glfwKey, int scanCode, int action, int mods);
    void mouse_button_callback(GLFWwindow* handle, int glfwButton, int action, int mods);
    void mouse_position_callback(GLFWwindow* handle, double xOffset, double yOffset);
    void mouse_scroll_callback(GLFWwindow* handle, double xOffset, double yOffset);
    void glfw_error_callback(int error, const char* description);

} // namespace Graphics
} // namespace Dynamic_Static

namespace Dynamic_Static {
namespace Graphics {

    Window::Window(const Window::Configuration& configuration)
        : mHandle { create_glfw_window(configuration) }
        , mApi { configuration.api }
    {
        glfwSetWindowUserPointer(glfw_handle(mHandle), this);
        cursor_mode(configuration.cursorMode);
        position(configuration.position);
        visible(configuration.visible);
        name(configuration.name);
    }

    Window::Window(Window&& other)
    {
        *this = std::move(other);
    }

    Window::~Window()
    {
        if (mHandle) {
            destroy_glfw_window(glfw_handle(mHandle));
        }
    }

    Window& Window::operator=(Window&& other)
    {
        if (this != &other) {
            Object::operator=(std::move(other));
            mHandle = std::move(other.mHandle);
            mApi = std::move(other.mApi);
            other.mHandle = nullptr;
            glfwSetWindowUserPointer(glfw_handle(mHandle), this);
        }

        return *this;
    }

    const std::string& Window::name() const
    {
        return Object::name();
    }

    void Window::name(const std::string& name)
    {
        if (Object::name() != name) {
            Object::name(name);
            glfwSetWindowTitle(glfw_handle(mHandle), name.c_str());
        }
    }

    void* Window::display()
    {
        #if defined(DYNAMIC_STATIC_LINUX)
        return glfwGetX11Display();
        #endif
        return nullptr;
    }

    void* Window::handle()
    {
        #if defined(DYNAMIC_STATIC_WINDOWS)
        return glfwGetWin32Window(glfw_handle(mHandle));
        #endif
        return nullptr;
    }
        
    #if defined(DYNAMIC_STATIC_LINUX)
    X11Window Window::x11_window()
    {
        return glfwGetX11Window(glfw_handle(mHandle));
    }
    #endif

    const Input& Window::input() const
    {
        return mInputManager.input();
    }

    Window::CursorMode Window::cursor_mode() const
    {
        auto cursorMode = CursorMode::Normal;
        switch (glfwGetInputMode(glfw_handle(mHandle), GLFW_CURSOR)) {
            case GLFW_CURSOR_NORMAL: cursorMode = CursorMode::Normal; break;
            case GLFW_CURSOR_HIDDEN: cursorMode = CursorMode::Hidden; break;
            case GLFW_CURSOR_DISABLED: cursorMode = CursorMode::Disabled; break;
        }

        return cursorMode;
    }

    void Window::cursor_mode(CursorMode cursorMode)
    {
        auto glfwCursorMode = GLFW_CURSOR_NORMAL;
        switch (cursorMode) {
            case CursorMode::Normal: glfwCursorMode = GLFW_CURSOR_NORMAL; break;
            case CursorMode::Hidden: glfwCursorMode = GLFW_CURSOR_HIDDEN; break;
            case CursorMode::Disabled: glfwCursorMode = GLFW_CURSOR_DISABLED; break;
        }

        glfwSetInputMode(glfw_handle(mHandle), GLFW_CURSOR, glfwCursorMode);
    }

    Resolution Window::resolution() const
    {
        int width, height;
        glfwGetWindowSize(glfw_handle(mHandle), &width, &height);
        return { static_cast<uint32_t>(width), static_cast<uint32_t>(height) };
    }

    void Window::resolution(const Resolution& resolution)
    {
        auto width = static_cast<int>(resolution.width);
        auto height = static_cast<int>(resolution.height);
        glfwSetWindowSize(glfw_handle(mHandle), width, height);
    }

    Vector2 Window::position() const
    {
        int x, y;
        glfwGetWindowPos(glfw_handle(mHandle), &x, &y);
        return { static_cast<float>(x), static_cast<float>(y) };
    }

    void Window::position(const Vector2& position)
    {
        auto x = dst::round_cast<int>(position.x);
        auto y = dst::round_cast<int>(position.y);
        glfwSetWindowPos(glfw_handle(mHandle), x, y);
    }

    bool Window::visible() const
    {
        return glfwGetWindowAttrib(glfw_handle(mHandle), GLFW_VISIBLE) == 1;
    }

    void Window::visible(bool visible)
    {
        if (visible) {
            glfwShowWindow(glfw_handle(mHandle));
        } else {
            glfwHideWindow(glfw_handle(mHandle));
        }
    }

    void Window::make_current()
    {
        if (mApi == API::OpenGL) {
            glfwMakeContextCurrent(glfw_handle(mHandle));
        }
    }

    void Window::swap_buffers()
    {
        mInputManager.update();
        if (mApi == API::OpenGL) {
            glfwSwapBuffers(glfw_handle(mHandle));
        }
    }

    void Window::update()
    {
        glfwPollEvents();
    }

    void Window::execute_on_resized() const
    {
        on_resized(*this);
    }

} // namespace Graphics
} // namespace Dynamic_Static

namespace Dynamic_Static {
namespace Graphics {

    static std::set<GLFWwindow*> gGLFWWindowHandles;
    static API gWindowAPI { API::Unknown };

    Window& dst_window(GLFWwindow* handle)
    {
        auto dstWindow = static_cast<Window*>(glfwGetWindowUserPointer(handle));
        assert(dstWindow != nullptr);
        return *dstWindow;
    }

    GLFWwindow* glfw_handle(const void* handle)
    {
        return static_cast<GLFWwindow*>(const_cast<void*>(handle));
    }

    GLFWwindow* create_glfw_window(const Window::Configuration& configuration)
    {
        GLFWwindow* handle = nullptr;
        if (gGLFWWindowHandles.empty()) {
            glfwSetErrorCallback(glfw_error_callback);
            if (glfwInit() == GLFW_FALSE) {
                // TODO : Get error for exception...
                throw std::runtime_error("GLFW failed to initialize");
            }

            switch (configuration.api) {
                case API::OpenGL:
                {
                    // glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
                    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, configuration.apiVersion.major);
                    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, configuration.apiVersion.minor);
                    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, true);
                } break;

                case API::Vulkan:
                default:
                {
                    glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
                } break;
            }
        }

        glfwWindowHint(GLFW_VISIBLE, configuration.visible);
        glfwWindowHint(GLFW_DECORATED, configuration.decorated);
        glfwWindowHint(GLFW_RESIZABLE, configuration.resizable);
        auto width = static_cast<int>(configuration.resolution.width);
        auto height = static_cast<int>(configuration.resolution.height);

        // TODO : Parent window
        // TODO : Monitor

        handle = glfwCreateWindow(width, height, configuration.name.c_str(), nullptr, nullptr);
        if (!handle) {
            destroy_glfw_window(handle);
            // TODO : Get error for exception...
            throw std::runtime_error("Failed to create Window");
        }

        if (configuration.api == API::OpenGL) {
            static bool sGLEWInitialized;
            if (!sGLEWInitialized) {
                glfwMakeContextCurrent(handle);
                #if defined(DYNAMIC_STATIC_WINDOWS)
                glewExperimental = true;
                auto error = glewInit();
                if (error) {
                    destroy_glfw_window(handle);
                    // TODO : Get error for exception...
                    throw std::runtime_error("Failed to initialize GLEW");
                }
                #endif

                sGLEWInitialized = true;
            }
        }

        glfwSetFramebufferSizeCallback(handle, frame_buffer_size_callback);
        glfwSetMouseButtonCallback(handle, mouse_button_callback);
        glfwSetCursorPosCallback(handle, mouse_position_callback);
        glfwSetScrollCallback(handle, mouse_scroll_callback);
        glfwSetKeyCallback(handle, keyboard_callback);
        return handle;
    }

    void destroy_glfw_window(GLFWwindow* handle)
    {
        if (handle) {
            glfwDestroyWindow(handle);
        }

        gGLFWWindowHandles.erase(handle);
        if (gGLFWWindowHandles.empty()) {
            glfwTerminate();
        }
    }

    void frame_buffer_size_callback(GLFWwindow* handle, int /* width */, int /* height */)
    {
        dst_window(handle).execute_on_resized();
    }

    void keyboard_callback(GLFWwindow* handle, int glfwKey, int scanCode, int action, int /* mods */)
    {
        auto& input = dst_window(handle).mInputManager;
        auto dstKey = glfw_to_dst_key(glfwKey);
        switch (action) {
            case GLFW_PRESS:
                input.keyboard_state()[dstKey] = Keyboard::State::Down;
                break;

            case GLFW_RELEASE:
                input.keyboard_state()[dstKey] = Keyboard::State::Up;
                break;

            case GLFW_REPEAT:
                input.keyboard_state()[dstKey] = Keyboard::State::Down;
                break;
        }
    }

    void mouse_button_callback(GLFWwindow* handle, int glfwButton, int action, int /* mods */)
    {
        auto& input = dst_window(handle).mInputManager;
        auto dstButton = glfw_to_dst_mouse_button(glfwButton);
        switch (action) {
            case GLFW_PRESS:
                input.mouse_state()[dstButton] = Mouse::State::Down;
                break;

            case GLFW_RELEASE:
                input.mouse_state()[dstButton] = Mouse::State::Up;
                break;

            case GLFW_REPEAT:
                input.mouse_state()[dstButton] = Mouse::State::Down;
                break;
        }
    }

    void mouse_position_callback(GLFWwindow* handle, double xOffset, double yOffset)
    {
        dst_window(handle).mInputManager.mouse_state().position({ xOffset, yOffset });
    }

    void mouse_scroll_callback(GLFWwindow* handle, double /* xOffset */, double yOffset)
    {
        auto& input = dst_window(handle).mInputManager;
        auto scroll = input.mouse_state().scroll();
        input.mouse_state().scroll(scroll + yOffset);
    }

    void glfw_error_callback(int error, const char* description)
    {
        // TODO : Setup a logger...
        std::cerr << "== GLFW Error " + std::to_string(error) + " : " + std::string(description) << std::endl;
    }

} // namespace Graphics
} // namespace Dynamic_Static
