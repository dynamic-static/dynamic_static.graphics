
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

namespace Dynamic_Static {
namespace Graphics {

    /**
     * Represents a 3D camera.
     */
    class Camera
    {
    private:
        float mAspectRatio { 16.0f / 9.0f };
        float mFieldOfView { 60 };
        float mNearPlane { 0.0001f };
        float mFarPlane { 1000.0f };
        Transform mTransform;

    public:
        /**
         * Gets this Camera's Transform.
         * @return This Camera's Transform
         */
        Transform& transform();

        /**
         * Gets this Camera's Transform.
         * @return This Camera's Transform
         */
        const Transform& transform() const;

        /**
         * Gets this Camera's aspect ratio.
         * @return This Camera's aspect ratio
         */
        float aspect_ratio() const;

        /**
         * Sets this Camera's aspect ratio.
         * @param [in] aspectRatio This Camera's aspect ratio
         */
        void aspect_ratio(float aspectRatio);

        /**
         * Gets this Camera's field of view.
         * @return This Camera's field of view
         */
        float field_of_view() const;

        /**
         * Sets this Camera's field of view.
         * @param [in] fieldOfView This Camera's field of view
         */
        void field_of_view(float fieldOfView);

        /**
         * Gets this Camera's near plane.
         * @return This Camera's near plane
         */
        float near_plane() const;

        /**
         * Sets this Camera's near plane.
         * @param [in] nearPlane This Camera's near plane
         */
        void near_plane(float nearPlane);

        /**
         * Gets this Camera's far plane.
         * @param [in] This Camera's far plane
         */
        float far_plane() const;

        /**
         * Sets this Camera's far plane.
         * @param [in] farPlane This Camera's far plane
         */
        void far_plane(float farPlane);

        /**
         * Gets this Camera's view Matrix4x4.
         * @return This Camera's view Matrix4x4
         */
        Matrix4x4 view() const;

        /**
         * Gets this Camera's projection Matrix4x4.
         * @return This Camera's projection Matrix4x4
         */
        Matrix4x4 projection() const;
    };

} // namespace Graphics
} // namespace Dynamic_Static
