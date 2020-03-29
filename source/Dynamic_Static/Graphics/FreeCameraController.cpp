
#if 0
/*
==========================================
    Copyright (c) 2017 Dynamic_Static
    Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#include "Dynamic_Static/Graphics/FreeCameraController.hpp"
#include "Dynamic_Static/Core/Algorithm.hpp"

namespace Dynamic_Static {
namespace Graphics {

    void FreeCameraController::update(const dst::Clock& clock, const dst::sys::Input& input)
    {
        if (camera) {
            float dt = clock.elapsed<Second<float>>();

            if (moveEnabled) {
                glm::vec3 moveDirection { };
                moveDirection += input.keyboard.down(upKey) ? camera->get_transform().up() : glm::vec3 { };
                moveDirection += input.keyboard.down(downKey) ? camera->get_transform().down() : glm::vec3 { };
                moveDirection += input.keyboard.down(leftKey) ? camera->get_transform().left() : glm::vec3 { };
                moveDirection += input.keyboard.down(rightKey) ? camera->get_transform().right() : glm::vec3 { };
                moveDirection += input.keyboard.down(forwardKey) ? camera->get_transform().forward() : glm::vec3 { };
                moveDirection += input.keyboard.down(backwardKey) ? camera->get_transform().backward() : glm::vec3 { };
                if (moveDirection.x || moveDirection.y || moveDirection.z) {
                    moveDirection = glm::normalize(moveDirection);
                }

                float moveSpeed = speed * (input.keyboard.down(speedModifyKey) ? speedModifier : 1);
                camera->get_transform().translation += moveDirection * moveSpeed * dt;
            }

            if (lookEnabled) {
                float verticalLookMax = glm::radians(90.0f);
                auto look = input.mouse.get_position_delta() * sensitivity * dt;
                if (mVerticalLook + look.y > verticalLookMax) {
                    look.y = verticalLookMax - mVerticalLook;
                } else
                if (mVerticalLook + look.y < -verticalLookMax) {
                    look.y = -verticalLookMax - mVerticalLook;
                }

                mVerticalLook += look.y;
                auto rotationX = glm::angleAxis(-look.y, glm::vec3 { 1, 0, 0 });
                auto rotationY = glm::angleAxis(-look.x, glm::vec3 { 0, 1, 0 });
                auto rotation = camera->get_transform().rotation;
                camera->get_transform().rotation = glm::normalize(rotationY * camera->get_transform().rotation * rotationX);
            }

            float fov = camera->get_field_of_view();
            fov -= static_cast<float>(input.mouse.get_scroll_delta()) * zoomSpeed * dt;
            camera->set_field_of_view(dst::clamp(fov, minFieldOfView, maxFieldOfView));
            if (input.mouse.pressed(dst::sys::Mouse::Button::Middle)) {
                camera->set_field_of_view(Camera::DefaultFieldOfView);
            }
        }
    }

} // namespace Graphics
} // namespace Dynamic_Static
#endif
