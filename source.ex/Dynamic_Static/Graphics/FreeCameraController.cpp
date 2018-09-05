
/*
==========================================
  Copyright (c) 2017-2018 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#include "Dynamic_Static/Graphics/FreeCameraController.hpp"

#include <algorithm>

namespace Dynamic_Static {
namespace Graphics {

    void FreeCamerController::update(
        const dst::Clock& clock,
        const dst::sys::Input& input
    )
    {
        if (camera) {
            float dt = clock.elapsed<Second<float>>();
            if (moveEnabled) {
                glm::vec3 moveDirection { };
                moveDirection += input.keyboard.down(upKey) ? camera->transform.up() : glm::vec3 { };
                moveDirection += input.keyboard.down(downKey) ? camera->transform.down() : glm::vec3 { };
                moveDirection += input.keyboard.down(leftKey) ? camera->transform.left() : glm::vec3 { };
                moveDirection += input.keyboard.down(rightKey) ? camera->transform.right() : glm::vec3 { };
                moveDirection += input.keyboard.down(forwardKey) ? camera->transform.forward() : glm::vec3 { };
                moveDirection += input.keyboard.down(backwardKey) ? camera->transform.backward() : glm::vec3 { };
                if (moveDirection.x || moveDirection.y || moveDirection.z) {
                    moveDirection = glm::normalize(moveDirection);
                    float moveSpeed = speed * (input.keyboard.down(modifySpeedKey) ? speedModifier : 1);
                    camera->transform.translation += moveDirection * moveSpeed * dt;
                }
            }
            if (lookEnabled) {
                float verticalLookMax = glm::radians(90.0f);
                auto look = input.mouse.get_position_delta() * lookSensitivity * dt;
                if (mVerticalLook + look.y > verticalLookMax) {
                    look.y = verticalLookMax - mVerticalLook;
                } else
                if (mVerticalLook + look.y < -verticalLookMax) {
                    look.y = -verticalLookMax - mVerticalLook;
                }
                mVerticalLook += look.y;
                auto rotationX = glm::angleAxis(-look.y, glm::vec3 { 1, 0, 0 });
                auto rotationY = glm::angleAxis(-look.x, glm::vec3 { 0, 1, 0 });
                auto rotation = camera->transform.rotation;
                camera->transform.rotation = glm::normalize(rotationY * rotation * rotationX);
            }
            float fov = camera->fieldOfView;
            fov -= (float)input.mouse.get_scroll_delta() * zoomSpeed * dt;
            camera->fieldOfView = std::clamp(fov, minFieldOfView, maxFieldOfView);
            if (input.mouse.pressed(dst::sys::Mouse::Button::Middle)) {
                camera->fieldOfView = Camera::DefaultFieldOfView;
            }
        }
    }

} // namespace Graphics
} // namespace Dynamic_Static
