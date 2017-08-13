

/*
==========================================
    Copyright (c) 2017 Dynamic_Static 
    Licensed under the MIT license
    http://opensource.org/licenses/MIT
==========================================
*/

// Based on "Make a Neon Vector Shooter in XNA"
// https://gamedevelopment.tutsplus.com/series/cross-platform-vector-shooter-xna--gamedev-10559

#pragma once

#include "PlayerShip.hpp"

#include "Dynamic_Static/Core/Time.hpp"

#include <fstream>

namespace ShapeBlaster {

    class PlayerStatus final
    {
    private:
        static constexpr float MultiplierExpireTime { 0.8f };
        static constexpr uint32_t MaxMultiplier { 20 };
        static constexpr uint32_t DefaultLives { 3 };
        static constexpr uint32_t FreeLifeScore { 2000 };

    private:
        uint32_t mLives { DefaultLives };
        uint32_t mScore { 0 };
        uint32_t mMultiplier { 1 };
        float mMultiplierTimer { 0 };
        uint32_t mNextLife { FreeLifeScore };
        PlayerShip* mPlayerShip { nullptr };

    public:
        PlayerStatus()
        {

        }

    public:
        uint32_t lives() const
        {
            return mLives;
        }

        uint32_t score() const
        {
            return mScore;
        }

        uint32_t multiplier() const
        {
            return mMultiplier;
        }

        void update(const dst::Clock& clock)
        {
            if (mMultiplier > 1) {
                mMultiplierTimer -= clock.elapsed<dst::Second<float>>();
                if (mMultiplierTimer <= 0) {
                    reset_multiplier();
                }
            }
        }

        void add_points(uint32_t points)
        {
            if (true /* Player is alive */) {
                mScore += points * mMultiplier;
                while (mScore >= mNextLife) {
                    mNextLife += FreeLifeScore;
                    ++mLives;
                }
            }
        }

        void increase_multiplier()
        {
            if (true /* Player is alive */) {
                mMultiplierTimer = MultiplierExpireTime;
                if (mMultiplier < MaxMultiplier) {
                    ++mMultiplier;
                }
            }
        }

        void reset_multiplier()
        {
            mMultiplier = 1;
        }

        void remove_life()
        {
            --mLives;
        }

        void reset()
        {
            mLives = DefaultLives;
            mScore = 0;
            mMultiplier = 1;
            mNextLife = FreeLifeScore;
        }

    private:

    };

} // namespace ShapeBlaster
