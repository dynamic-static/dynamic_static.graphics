
/*
==========================================
  Copyright (c) 2017-2018 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#pragma once

#include "Sprite.hpp"
#include "Sprite.Pool.hpp"

namespace ShapeBlaster {

    Sprite::Sprite(Sprite&& other)
    {
        *this = std::move(other);
    }

    Sprite::~Sprite()
    {
        if (mPool) {
            mPool->check_in(std::move(*this));
        }
    }

    Sprite& Sprite::operator=(Sprite&& other)
    {
        if (this != &other) {
            mPool = std::move(other.mPool);
            other.mPool = nullptr;
        }
        return *this;
    }

    Sprite::operator bool() const
    {
        return mPool != nullptr;
    }

} // namespace ShapeBlaster
