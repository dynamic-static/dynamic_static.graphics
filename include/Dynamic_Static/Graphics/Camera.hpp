
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
#include "Dynamic_Static/Graphics/Defines.hpp"

// #include "Dynamic_Static/Graphics/Transform_ex.hpp"

namespace Dynamic_Static {
namespace Graphics {

    /**
     * Represents a 3D camera.
     */
    class Camera
    {
    public:
        static constexpr float DefaultAspecRatio { 16.0f / 9.0f };
        static constexpr float DefaultFieldOfView { 60 };
        static constexpr float DefaultNearPlane { 0.001f };
        static constexpr float DefaultFarPlane { 100.0f };

    public:
        class Controller;

    private:
        float mAspectRatio { DefaultAspecRatio };
        float mFieldOfView { DefaultFieldOfView };
        float mNearPlane { DefaultNearPlane };
        float mFarPlane { DefaultFarPlane };
        Transform mTransform;

    public:
        /**
         * Gets this Camera's Transform.
         * @return This Camera's Transform
         */
        Transform& get_transform();

        /**
         * Gets this Camera's Transform.
         * @return This Camera's Transform
         */
        const Transform& get_transform() const;

        /**
         * Gets this Camera's aspect ratio.
         * @return This Camera's aspect ratio
         */
        float get_aspect_ratio() const;

        /**
         * Sets this Camera's aspect ratio.
         * @param [in] aspectRatio This Camera's aspect ratio
         */
        void set_aspect_ratio(float aspectRatio);

        /**
         * Gets this Camera's field of view.
         * @return This Camera's field of view
         */
        float get_field_of_view() const;

        /**
         * Sets this Camera's field of view.
         * @param [in] fieldOfView This Camera's field of view
         */
        void set_field_of_view(float fieldOfView);

        /**
         * Gets this Camera's near plane.
         * @return This Camera's near plane
         */
        float get_near_plane() const;

        /**
         * Sets this Camera's near plane.
         * @param [in] nearPlane This Camera's near plane
         */
        void set_near_plane(float nearPlane);

        /**
         * Gets this Camera's far plane.
         * @param [in] This Camera's far plane
         */
        float get_far_plane() const;

        /**
         * Sets this Camera's far plane.
         * @param [in] farPlane This Camera's far plane
         */
        void set_far_plane(float farPlane);

        /**
         * Gets this Camera's view Matrix4x4.
         * @return This Camera's view Matrix4x4
         */
        glm::mat4 view() const;

        /**
         * Gets this Camera's projection Matrix4x4.
         * @return This Camera's projection Matrix4x4
         */
        glm::mat4 projection() const;
    };

} // namespace Graphics
} // namespace Dynamic_Static
#endif
