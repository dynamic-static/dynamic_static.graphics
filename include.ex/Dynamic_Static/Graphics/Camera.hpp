
/*
==========================================
  Copyright (c) 2017-2018 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#pragma once

#include "Dynamic_Static/Graphics/Defines.hpp"

namespace dst {
namespace gfx {

    /*!
    Represents a 3D camera.
    */
    struct Camera
    {
        class Controller;

        static constexpr float DefaultAspectRatio { 16.0f / 9.0f }; /*!< TODO : Documentation. */
        static constexpr float DefaultFieldOfView { 60 };           /*!< TODO : Documentation. */
        static constexpr float DefaultNearPlane { 0.001f };         /*!< TODO : Documentation. */
        static constexpr float DefaultFarPlane { 100.0f };          /*!< TODO : Documentation. */
        float aspectRatio { DefaultAspectRatio };                   /*!< TODO : Documentation. */
        float fieldOfView { DefaultFieldOfView };                   /*!< TODO : Documentation. */
        float nearPlane { DefaultNearPlane };                       /*!< TODO : Documentation. */
        float farPlane { DefaultFarPlane };                         /*!< TODO : Documentation. */
        Transform transform { };                                    /*!< TODO : Documentation. */

        /*!
        TODO : Documentation.
        */
        inline glm::mat4 get_view() const
        {
            return glm::lookAt(
                transform.translation,
                transform.translation + transform.forward(),
                transform.up()
            );
        }

        /*!
        TODO : Documentation.
        */
        inline glm::mat4 get_projection() const
        {
            auto projection = glm::perspective(
                glm::radians(fieldOfView),
                aspectRatio,
                nearPlane,
                farPlane
            );
            projection[1][1] *= -1;
            return projection;
        }
    };

} // namespace gfx
} // namespace dst
