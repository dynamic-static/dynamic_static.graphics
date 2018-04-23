
/*
==========================================
    Copyright 2011-2018 Dynamic_Static
        Patrick Purcell
    Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#include "Dynamic_Static/Graphics/Application.hpp"

#include <iostream>

namespace Dynamic_Static {
namespace Graphics {

    Application::Application()
    {
        std::cout << "Application ctor()" << std::endl;
    }

    Application::~Application()
    {
        std::cout << "Application dtor()" << std::endl;
    }

} // namespace Graphics
} // namespace Dynamic_Static
