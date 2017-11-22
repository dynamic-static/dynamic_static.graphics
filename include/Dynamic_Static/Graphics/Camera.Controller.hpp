
/*
==========================================
    Copyright (c) 2017 Dynamic_Static
    Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#pragma once

#include "Dynamic_Static/Core/Time.hpp"
#include "Dynamic_Static/Graphics/Camera.hpp"
#include "Dynamic_Static/Graphics/Defines.hpp"
#include "Dynamic_Static/System/Input.hpp"

namespace Dynamic_Static {
namespace Graphics {

    /**
     * TODO : Documentation.
     */
    class Camera::Controller
    {
    public:
        Camera* camera { nullptr };

    public:
        /**
         * Updates this Camera::Controller.
         * @param [in] clock TODO : Documentation.
         * @param [in] input TODO : Documentation.
         */
        virtual void update(const dst::Clock& clock, const dst::sys::Input& input) = 0;
    };

} // namespace Graphics
} // namespace Dynamic_Static
