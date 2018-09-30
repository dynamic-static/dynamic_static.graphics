
/*
==========================================
  Copyright (c) 2017-2018 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#pragma once

#include "Dynamic_Static/Graphics/Camera.Controller.hpp"
#include "Dynamic_Static/Graphics/Defines.hpp"

namespace dst {
namespace gfx {

    /*!
    TODO : Documentation.
    */
    class FreeCamerController
        : public Camera::Controller
    {
    public:
        bool moveEnabled { true };                                                     /*!< TODO : Documentation. */
        bool lookEnabled { true };                                                     /*!< TODO : Documentation. */
        float speed { 4.2f };                                                          /*!< TODO : Documentation. */
        float zoomSpeed { 16000 };                                                     /*!< TODO : Documentation. */
        float speedModifier { 2 };                                                     /*!< TODO : Documentation. */
        float minFieldOfView { 16 };                                                   /*!< TODO : Documentation. */
        float maxFieldOfView { 120 };                                                  /*!< TODO : Documentation. */
        glm::vec2 lookSensitivity { 2.4f, 2.4f };                                      /*!< TODO : Documentation. */
        dst::sys::Keyboard::Key upKey { dst::sys::Keyboard::Key::E };                  /*!< TODO : Documentation. */
        dst::sys::Keyboard::Key downKey { dst::sys::Keyboard::Key::Q };                /*!< TODO : Documentation. */
        dst::sys::Keyboard::Key leftKey { dst::sys::Keyboard::Key::A };                /*!< TODO : Documentation. */
        dst::sys::Keyboard::Key rightKey { dst::sys::Keyboard::Key::D };               /*!< TODO : Documentation. */
        dst::sys::Keyboard::Key forwardKey { dst::sys::Keyboard::Key::W };             /*!< TODO : Documentation. */
        dst::sys::Keyboard::Key backwardKey { dst::sys::Keyboard::Key::S };            /*!< TODO : Documentation. */
        dst::sys::Keyboard::Key modifySpeedKey { dst::sys::Keyboard::Key::LeftShift }; /*!< TODO : Documentation. */

    private:
        float mVerticalLook { 0 };

    public:
        /*!
        Updates this FreeCameraController.
        @param [in] clock The Clock to update this FreeCameraController with
        @param [in] input The Input to update this FreeCameraController with
        */
        void update(
            const dst::Clock& clock,
            const dst::sys::Input& input
        ) override final;
    };

} // namespace gfx
} // namespace dst
