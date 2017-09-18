
/*
==========================================
    Copyright (c) 2017 Dynamic_Static
    Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#pragma once

#include "Dynamic_Static/Core/Input.hpp"
#include "Dynamic_Static/Core/Math.hpp"
#include "Dynamic_Static/Core/Time.hpp"
#include "Dynamic_Static/Graphics/Camera.hpp"
#include "Dynamic_Static/Graphics/Camera.Controller.hpp"
#include "Dynamic_Static/Graphics/Defines.hpp"

namespace Dynamic_Static {
namespace Graphics {

    /**
     * TODO : Documentation.
     */
    class FreeCameraController final
        : public Camera::Controller
    {
    public:
        float speed { 4.2f };
        float zoomSpeed { 16000 };
        float speedModifier { 2 };
        float minFieldOfView { 16 };
        float maxFieldOfView { 90 };
        dst::Vector2 sensitivity { 0.001f, 0.001f };
        Keyboard::Key upKey { Keyboard::Key::E };
        Keyboard::Key downKey { Keyboard::Key::Q };
        Keyboard::Key leftKey { Keyboard::Key::A };
        Keyboard::Key rightKey { Keyboard::Key::D };
        Keyboard::Key forwardKey { Keyboard::Key::W };
        Keyboard::Key backwardKey { Keyboard::Key::S };
        Keyboard::Key speedModifyKey { Keyboard::Key::LeftShift };

    public:
        /**
         * Updates this FreeCameraController.
         * @param [in] clock TODO : Documentation.
         * @param [in] input TODO : Documentation.
         */
        void update(const dst::Clock& clock, const dst::Input& input) override final;
    };

} // namespace Graphics
} // namespace Dynamic_Static
