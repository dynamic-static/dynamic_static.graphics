
#if 0
/*
==========================================
    Copyright (c) 2017 Dynamic_Static
    Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#pragma once

#include "Dynamic_Static/Core/Math.hpp"
#include "Dynamic_Static/Core/Time.hpp"
#include "Dynamic_Static/Graphics/Camera.hpp"
#include "Dynamic_Static/Graphics/Camera.Controller.hpp"
#include "Dynamic_Static/Graphics/Defines.hpp"
#include "Dynamic_Static/System/Input.hpp"

namespace Dynamic_Static {
namespace Graphics {

    /**
     * TODO : Documentation.
     */
    class FreeCameraController final
        : public Camera::Controller
    {
    public:
        bool moveEnabled { true };                                                     /*!< TODO : Documentation. */
        bool lookEnabled { true };                                                     /*!< TODO : Documentation. */
        float speed { 4.2f };                                                          /*!< TODO : Documentation. */
        float zoomSpeed { 16000 };                                                     /*!< TODO : Documentation. */
        float speedModifier { 2 };                                                     /*!< TODO : Documentation. */
        float minFieldOfView { 16 };                                                   /*!< TODO : Documentation. */
        float maxFieldOfView { 90 };                                                   /*!< TODO : Documentation. */
        glm::vec2 sensitivity { 2.4f, 2.4f };                                          /*!< TODO : Documentation. */
        dst::sys::Keyboard::Key upKey { dst::sys::Keyboard::Key::E };                  /*!< TODO : Documentation. */
        dst::sys::Keyboard::Key downKey { dst::sys::Keyboard::Key::Q };                /*!< TODO : Documentation. */
        dst::sys::Keyboard::Key leftKey { dst::sys::Keyboard::Key::A };                /*!< TODO : Documentation. */
        dst::sys::Keyboard::Key rightKey { dst::sys::Keyboard::Key::D };               /*!< TODO : Documentation. */
        dst::sys::Keyboard::Key forwardKey { dst::sys::Keyboard::Key::W };             /*!< TODO : Documentation. */
        dst::sys::Keyboard::Key backwardKey { dst::sys::Keyboard::Key::S };            /*!< TODO : Documentation. */
        dst::sys::Keyboard::Key speedModifyKey { dst::sys::Keyboard::Key::LeftShift }; /*!< TODO : Documentation. */

    private:
        float mVerticalLook { 0 };

    public:
        /**
         * Updates this FreeCameraController.
         * @param [in] clock TODO : Documentation.
         * @param [in] input TODO : Documentation.
         */
        void update(const dst::Clock& clock, const dst::sys::Input& input) override final;
    };

} // namespace Graphics
} // namespace Dynamic_Static
#endif
