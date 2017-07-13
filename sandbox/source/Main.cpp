
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
#include "Dynamic_Static/Core/Defines.hpp"
#include "Dynamic_Static/Core/Version.hpp"
#include "Dynamic_Static/Core/Time.hpp"

#include <thread>
#include <iostream>

int main(/* int argc, char** argv */)
{
    dst::Version version(
        dst::VersionMajor,
        dst::VersionMinor,
        dst::VersionPatch
    );

    {
        dst::Window::Configuration configuration;
        configuration.api = dst::Window::API::OpenGL;
        dst::Window window(configuration);
        auto name = window.name();
        window.name("Hello World!");

        bool running = true;
        while (running) {
            auto& input = window.input();
            bool up = input.keyboard().up(dst::Keyboard::Key::A);
            bool down = input.keyboard().down(dst::Keyboard::Key::A);
            bool pressed = input.keyboard().pressed(dst::Keyboard::Key::A);
            bool held = input.keyboard().held(dst::Keyboard::Key::A);
            bool released = input.keyboard().released(dst::Keyboard::Key::A);
            std::cout << std::endl;
            std::cout <<
                "["
                    << up       << ", "
                    << down     << ", "
                    << pressed  << ", "
                    << held     << ", "
                    << released <<
                "]"
                << (pressed ? "PRESSED" : "")
                << (released ? "RELEASED" : "")
            << std::endl;

            std::cout << input.mouse().scroll() << std::endl;

            window.swap_buffers();
            dst::Window::update();
            std::this_thread::sleep_for(dst::Second<>(1.0f / 15.0f));
            int breaker = 0;
        }
    }

    std::cout << "Dynamic_Static.Graphics " << version.to_string() << std::endl;
    return 0;
}
