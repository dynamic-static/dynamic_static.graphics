
/*
==========================================
  Copyright (c) 2017-2018 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#pragma once

#include "Dynamic_Static/Graphics/Camera.hpp"
#include "Dynamic_Static/Graphics/Defines.hpp"

namespace Dynamic_Static {
namespace Graphics {

    /*!
    TODO : Documentation.
    */
    class Camera::Controller
    {
    public:
        Camera* camera { nullptr }; /*!< This Camera::Controller's Camera */

    public:
        /*!
        Updates this Camera::Controller.
        @param [in] clock The Clock to update this Camera::Controller with
        @param [in] input The Input to update this Camera::Controller with
        */
        virtual void update(
            const dst::Clock& clock,
            const dst::sys::Input& input
        ) = 0;
    };

} // namespace Graphics
} // namespace Dynamic_Static
