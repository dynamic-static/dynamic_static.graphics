
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
            mId = std::move(other.mId);
            mPool = std::move(other.mPool);
            mVertex = std::move(other.mVertex);
            mExtent = std::move(other.mExtent);
            other.mId = 0;
            other.mPool = nullptr;
            other.mVertex = nullptr;
            other.mExtent = { };
        }
        return *this;
    }

    Sprite::Vertex& Sprite::operator*()
    {
        assert(mVertex);
        return *mVertex;
    }

    const Sprite::Vertex& Sprite::operator*() const
    {
        assert(mVertex);
        return *mVertex;
    }

    Sprite::Vertex* Sprite::operator->()
    {
        assert(mVertex);
        return mVertex;
    }

    const Sprite::Vertex* Sprite::operator->() const
    {
        assert(mVertex);
        return mVertex;
    }

    Sprite::operator bool() const
    {
        return mPool != nullptr && mVertex != nullptr;
    }

    const glm::vec2& Sprite::get_extent() const
    {
        return mExtent;
    }

} // namespace ShapeBlaster
