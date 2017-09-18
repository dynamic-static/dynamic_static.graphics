
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
        // auto u = mTransform.up();
        // auto f = mTransform.forward();
        // std::cout << "====================" << std::endl;
        // std::cout << "T:" << mTransform.translation << std::endl;
        // std::cout << "U:" << mTransform.up() << std::endl;
        // std::cout << "F:" << mTransform.forward() << std::endl;
        return Matrix4x4::create_view(
            mTransform.translation,
            mTransform.translation + mTransform.forward(),
            mTransform.up()
        );
    }

    Matrix4x4 Camera::projection() const
    {
        auto m = Matrix4x4::create_perspective(
            dst::to_radians(mFieldOfView),
            mAspectRatio,
            mNearPlane,
            mFarPlane
        );

        m[1][1] *= -1;
        return m;
    }

} // namespace Graphics
} // namespace Dynamic_Static
