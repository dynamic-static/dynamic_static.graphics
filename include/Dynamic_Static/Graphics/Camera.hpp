
/*
================================================================================

  MIT License

  Copyright (c) 2016 Dynamic_Static

  Permission is hereby granted, free of charge, to any person obtaining a copy
  of this software and associated documentation files (the "Software"), to deal
  in the Software without restriction, including without limitation the rights
  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
  copies of the Software, and to permit persons to whom the Software is
  furnished to do so, subject to the following conditions:

  The above copyright notice and this permission notice shall be included in all
  copies or substantial portions of the Software.

  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
  SOFTWARE.

================================================================================
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
