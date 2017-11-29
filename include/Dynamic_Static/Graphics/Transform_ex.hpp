
/*
==========================================
    Copyright (c) 2016 Dynamic_Static
    Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#pragma once

#include "Dynamic_Static/Core/Math/Defines.hpp"
#include "Dynamic_Static/Core/Math/Matrix4x4.hpp"
#include "Dynamic_Static/Core/Math/Quaternion.hpp"
#include "Dynamic_Static/Core/Math/Vector3.hpp"

namespace Dynamic_Static {

    /**
     * TODO : Documentation.
     */
    class Transform_ex final
    {
    public:
        glm::vec3 translation { };
        glm::quat rotation { 1, 0, 0, 0 };
        glm::vec3 scale { 1, 1, 1 };

    public:
        /**
         * TODO : Documentation.
         */
        inline glm::mat4 world() const
        {
            return
                glm::translate(translation) *
                glm::toMat4(rotation) *
                glm::scale(scale);
        }

        /**
         * TODO : Documentation.
         */
        inline glm::vec3 up() const
        {
            return glm::normalize(rotation * glm::vec4(glm::vec3 { 0, 1, 0 } * scale, 0));
        }

        /**
         * TODO : Documentation.
         */
        inline glm::vec3 down() const
        {
            return glm::normalize(rotation * glm::vec4(glm::vec3 { 0, -1, 0 } * scale, 0));
        }

        /**
         * TODO : Documentation.
         */
        inline glm::vec3 left() const
        {
            return glm::normalize(rotation * glm::vec4(glm::vec3 { -1, 0, 0 } * scale, 0));
        }

        /**
         * TODO : Documentation.
         */
        inline glm::vec3 right() const
        {
            return glm::normalize(rotation * glm::vec4(glm::vec3 { 1, 0, 0 } * scale, 0));
        }

        /**
         * TODO : Documentation.
         */
        inline glm::vec3 forward() const
        {
            return glm::normalize(rotation * glm::vec4(glm::vec3 { 0, 0, -1 } * scale, 0));
        }

        /**
         * TODO : Documentation.
         */
        inline glm::vec3 backward() const
        {
            return glm::normalize(rotation * glm::vec4(glm::vec3 { 0, 0, 1 } * scale, 0));
        }
    };

} // namespace Dynamic_Static
