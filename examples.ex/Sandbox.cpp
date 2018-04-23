
#include "Dynamic_Static/Graphics/Application.hpp"
#include "Dynamic_Static/System/OpenGL.hpp"
#include "Dynamic_Static/System/Window.hpp"

#include <iostream>

int main()
{
    dst::gfx::Application application;
    dst::sys::Window window;
    std::cout << "hello gfx" << std::endl;

    glewExperimental = true;
    auto error = glewInit();
    auto str = glewGetErrorString(error);
    std::cout << str << std::endl;

    GLuint buffer = 0;
    dst_gl(glCreateBuffers(1, &buffer));
    dst_gl(glDeleteBuffers(1, &buffer));

    return 0;
}
