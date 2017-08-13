

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

#include <algorithm>
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
        uint32_t mHighScore { 0 };
        uint32_t mMultiplier { 1 };
        float mMultiplierTimer { 0 };
        uint32_t mNextLife { FreeLifeScore };
        bool mGameOver { false };

    public:
        PlayerStatus()
        {
            reset();
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

        uint32_t high_score() const
        {
            return mHighScore;
        }

        uint32_t multiplier() const
        {
            return mMultiplier;
        }

        bool over() const
        {
            return mGameOver;
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
            mScore += points * mMultiplier;
            while (mScore >= mNextLife) {
                mNextLife += FreeLifeScore;
                ++mLives;
            }

            mHighScore = std::max(mScore, mHighScore);
        }

        void increase_multiplier()
        {
            mMultiplierTimer = MultiplierExpireTime;
            if (mMultiplier < MaxMultiplier) {
                ++mMultiplier;
            }
        }

        void reset_multiplier()
        {
            mMultiplier = 1;
        }

        void remove_life()
        {
            if (mLives > 0) {
                --mLives;
            } else {
                mGameOver = true;
                save_high_score();
            }
        }

        void reset()
        {
            load_high_score();
            mLives = DefaultLives;
            mScore = 0;
            mMultiplier = 1;
            mMultiplierTimer = 0;
            mNextLife = FreeLifeScore;
            mGameOver = false;
        }

    private:
        void load_high_score()
        {
            mHighScore = 0;
            std::ifstream file("highscore");
            if (file) {
                file >> mHighScore;
            }
        }

        void save_high_score()
        {
            std::ofstream file("highscore");
            if (file) {
                file << mHighScore;
            }
        }
    };

} // namespace ShapeBlaster
