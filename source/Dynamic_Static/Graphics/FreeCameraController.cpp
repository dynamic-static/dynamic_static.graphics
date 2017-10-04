
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

    void FreeCameraController::update(const dst::Clock& clock, const dst::Input& input)
    {
        if (camera) {
            float dt = clock.elapsed<Second<float>>();

            if (moveEnabled) {
                Vector3 moveDirection;
                moveDirection += input.keyboard().down(upKey) ? camera->transform().up() : Vector3::Zero;
                moveDirection += input.keyboard().down(downKey) ? camera->transform().down() : Vector3::Zero;
                moveDirection += input.keyboard().down(leftKey) ? camera->transform().left() : Vector3::Zero;
                moveDirection += input.keyboard().down(rightKey) ? camera->transform().right() : Vector3::Zero;
                moveDirection += input.keyboard().down(forwardKey) ? camera->transform().forward() : Vector3::Zero;
                moveDirection += input.keyboard().down(backwardKey) ? camera->transform().backward() : Vector3::Zero;
                if (moveDirection.x || moveDirection.y || moveDirection.z) {
                    moveDirection.normalize();
                }

                float moveSpeed = speed * (input.keyboard().down(speedModifyKey) ? speedModifier : 1);
                camera->transform().translation += moveDirection * moveSpeed * dt;
            }

            if (lookEnabled) {
                float verticalLookMax = dst::to_radians(90.0f);
                auto look = input.mouse().delta() * sensitivity * dt;
                if (mVerticalLook + look.y > verticalLookMax) {
                    look.y = verticalLookMax - mVerticalLook;
                } else
                if (mVerticalLook + look.y < -verticalLookMax) {
                    look.y = -verticalLookMax - mVerticalLook;
                }

                mVerticalLook += look.y;
                auto rotationX = Quaternion(-look.y, Vector3::UnitX);
                auto rotationY = Quaternion(-look.x, Vector3::UnitY);
                Quaternion rotation = rotationY * camera->transform().rotation * rotationX;
                camera->transform().rotation = rotation.normalized();
            }

            float fov = camera->field_of_view();
            fov -= static_cast<float>(input.mouse().scroll()) * zoomSpeed * dt;
            camera->field_of_view(dst::clamp(fov, minFieldOfView, maxFieldOfView));
            if (input.mouse().pressed(Mouse::Button::Middle)) {
                camera->field_of_view(Camera::DefaultFieldOfView);
            }
        }
    }

} // namespace Graphics
} // namespace Dynamic_Static
