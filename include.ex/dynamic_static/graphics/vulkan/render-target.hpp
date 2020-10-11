
/*
==========================================
  Copyright (c) 2017-2020 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#pragma once

#include "dynamic_static/graphics/vulkan/defines.hpp"
#include "dynamic_static/graphics/vulkan/managed.hpp"

namespace dst {
namespace vk {

/**
TODO : Documentation
*/
class RenderTarget final
{
public:
    /**
    TODO : Documentation
    */
    RenderTarget() = default;;

    /**
    TODO : Documentation
    */
    RenderTarget(const Managed<VkImage>& image);

private:
    Managed<VkImage> mImage;
    Managed<VkImageView> mImageView;
    Managed<VkFramebuffer> mFramebuffer;
};

} // namespace vk
} // namespace dst
