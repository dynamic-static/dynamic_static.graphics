
/*
==========================================
    Copyright (c) 2017 Dynamic_Static 
    Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#include "Dynamic_Static/Graphics/Camera.hpp"

namespace Dynamic_Static {
namespace Graphics {

    Transform& Camera::transform()
    {
        return mTransform;
    }

    const Transform& Camera::transform() const
    {
        return mTransform;
    }

    float Camera::aspect_ratio() const
    {
        return mAspectRatio;
    }

    void Camera::aspect_ratio(float aspectRatio)
    {
        mAspectRatio = aspectRatio;
    }

    float Camera::field_of_view() const
    {
        return mFieldOfView;
    }

    void Camera::field_of_view(float fieldOfView)
    {
        mFieldOfView = fieldOfView;
    }

    float Camera::near_plane() const
    {
        return mNearPlane;
    }

    void Camera::near_plane(float nearPlane)
    {
        mNearPlane = nearPlane;
    }

    float Camera::far_plane() const
    {
        return mFarPlane;
    }

    void Camera::far_plane(float farPlane)
    {
        mFarPlane = farPlane;
    }

    Matrix4x4 Camera::view() const
    {
        return Matrix4x4::Identity;
    }

    Matrix4x4 Camera::projection() const
    {
        return Matrix4x4::Identity;
    }

} // namespace Graphics
} // namespace Dynamic_Static
