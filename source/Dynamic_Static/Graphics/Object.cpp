
/*
==========================================
    Copyright (c) 2017 Dynamic_Static
    Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#include "Dynamic_Static/Graphics/Object.hpp"

namespace Dynamic_Static {
namespace Graphics {

    Object::Object()
    {
        set_name("Dynamic_Static::Graphics::Object");
    }

    Object::Object(Object && other)
    {
        *this = std::move(other);
    }

    Object::~Object()
    {
    }

    Object& Object::operator=(Object&& other)
    {
        if (this != &other) {
            dst::Object::operator=(std::move(other));
        }

        return *this;
    }

} // namespace Graphics
} // namespace Dynamic_Static
