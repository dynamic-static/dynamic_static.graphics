
/*
==========================================
    Copyright (c) 2017 Dynamic_Static
    Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#pragma once

#include "Dynamic_Static/Core/Object.hpp"
#include "Dynamic_Static/Graphics/Defines.hpp"

namespace Dynamic_Static {
namespace Graphics {

    /**
     * Common base for all Dynamic_Static::Graphics objects.
     */
    class Object
        : public dst::Object
    {
    public:
        /**
         * Constructs an instance of Object.
         */
        Object();

        /**
         * Moves an instance of Object.
         * @param [in] other The Object to move from
         */
        Object(Object&& other);

        /**
         * Destroys this instance of Object.
         */
        virtual ~Object() = 0;

        /**
         * Moves an instance of Object.
         * @param [in] other The Object to move from
         */
        Object& operator=(Object&& other);
    };

} // namespace Graphics
} // namespace Dynamic_Static
