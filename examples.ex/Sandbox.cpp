
#include "Dynamic_Static/Graphics/Application.hpp"
#include "Dynamic_Static/System/OpenGL.hpp"
#include "Dynamic_Static/System/Window.hpp"

#include <iostream>

int main()
{
    dst::gfx::Application application;
    using namespace dst::sys;
    Window::Info windowInfo { };
    windowInfo.api = GraphicsApi::OpenGL;
    windowInfo.apiVersion = { 4, 0 };
    Window window(windowInfo);
    std::cout << "hello gfx" << std::endl;

    GLuint buffer = 0;
    dst_gl(glCreateBuffers(1, &buffer));
    dst_gl(glDeleteBuffers(1, &buffer));

    return 0;
}
