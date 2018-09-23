
/*
==========================================
  Copyright (c) 2018-2018 Dynamic_Static
    Patrick Purcell
      Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

#pragma once

#include <cassert>
#include <vector>

namespace ShapeBlaster {

    template <typename T>
    class Pool
    {
    private:
        std::vector<T> mObjects;
        std::vector<T*> mAvailable;

    public:
        inline Pool() = default;
        inline Pool(size_t count)
            : mObjects(count)
            , mAvailable(count)
        {
            for (size_t i = 0; i < count; ++i) {
                mAvailable[i] = &mObjects[i];
            }
        }

    public:
        inline T* check_out()
        {
            T* object = nullptr;
            if (!mAvailable.empty()) {
                object = mAvailable.back();
                mAvailable.pop_back();
            }
            return object;
        }

        inline void check_in(T* object)
        {
            assert(&mObjects.front() <= object && object <= &mObjects.back());
            mAvailable.push_back(object);
        }
    };

} // namespace ShapeBlaster
