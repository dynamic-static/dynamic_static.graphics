
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
        std::cout << "  " << (void*)this << std::endl;
        std::cout << "    dtor()" << std::endl;
        check_in();
    }

    Sprite& Sprite::operator=(Sprite&& other)
    {
        std::cout << "  " << (void*)this << std::endl;
        std::cout << "    move" << std::endl;
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
        std::cout << "  " << (void*)this << std::endl;
        std::cout << "    Validating check_in()" << std::endl;
        if (*this) {
            assert(mPool);
            std::cout << "    check_in()" << std::endl;
            std::cout << "    Clearing Vert " << (void*)mVertex << std::endl;
            std::cout << "    ==========" << std::endl;
            std::cout << std::endl;
            mPool->check_in(std::move(*this));
        }
    }

} // namespace ShapeBlaster
