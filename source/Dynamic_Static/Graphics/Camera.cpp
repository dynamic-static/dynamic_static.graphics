
/*
==========================================
    Copyright (c) 2017 Dynamic_Static
    Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#include "Dynamic_Static/Graphics/Camera.hpp"

#include <iostream>

namespace Dynamic_Static {
namespace Graphics {

    Transform_ex& Camera::get_transform()
    {
        return mTransform;
    }

    const Transform_ex& Camera::get_transform() const
    {
        return mTransform;
    }

    float Camera::get_aspect_ratio() const
    {
        return mAspectRatio;
    }

    void Camera::set_aspect_ratio(float aspectRatio)
    {
        mAspectRatio = aspectRatio;
    }

    float Camera::get_field_of_view() const
    {
        return mFieldOfView;
    }

    void Camera::set_field_of_view(float fieldOfView)
    {
        mFieldOfView = fieldOfView;
    }

    float Camera::get_near_plane() const
    {
        return mNearPlane;
    }

    void Camera::set_near_plane(float nearPlane)
    {
        mNearPlane = nearPlane;
    }

    float Camera::get_far_plane() const
    {
        return mFarPlane;
    }

    void Camera::set_far_plane(float farPlane)
    {
        mFarPlane = farPlane;
    }

    glm::mat4 Camera::view() const
    {
        return glm::lookAt(
            mTransform.translation,
            mTransform.translation + mTransform.forward(),
            mTransform.up()
        );
    }

    glm::mat4 Camera::projection() const
    {
        auto m = glm::perspective(
            glm::radians(mFieldOfView),
            mAspectRatio,
            mNearPlane,
            mFarPlane
        );

        m[1][1] *= -1;
        return m;
    }

} // namespace Graphics
} // namespace Dynamic_Static
