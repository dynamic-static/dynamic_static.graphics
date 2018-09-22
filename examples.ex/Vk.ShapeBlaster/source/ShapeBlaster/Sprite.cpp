
/*
==========================================
  Copyright (c) 2017-2018 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#pragma once

#include "ShapeBlaster/Sprite.hpp"
#include "ShapeBlaster/Sprite.Pool.hpp"

#include <cassert>
#include <utility>

namespace ShapeBlaster {

    Sprite::Sprite(Sprite&& other)
    {
        *this = std::move(other);
    }

    Sprite::~Sprite()
    {
        check_in();
    }

    Sprite& Sprite::operator=(Sprite&& other)
    {
        if (this != &other) {
            check_in();
            mId = std::move(other.mId);
            mPool = std::move(other.mPool);
            mVertex = std::move(other.mVertex);
            other.mId = 0;
            other.mPool = nullptr;
            other.mVertex = nullptr;
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

    void Sprite::check_in()
    {
        if (*this) {
            assert(mPool);
            mPool->check_in(std::move(*this));
        }
    }

} // namespace ShapeBlaster
