//
//  Unit.hpp
//  Brawl
//
//  Created by Meryl Barantal on 04/07/2017.
//  Copyright © 2017 Meryl Barantal. All rights reserved.
//

#ifndef Unit_hpp
#define Unit_hpp

#include <stdio.h>
#include <iostream>
#include "IStrategy.hpp"
#include "Animation.hpp"
#include "AnimatedSprite.hpp"


namespace Character {
    class Unit {
    public:
        virtual int getMaxHealth() = 0;
        virtual int getHP() = 0;
        virtual void setHP(int& hp) = 0;
        virtual int getAD() = 0;
        virtual int getRange() = 0;
        virtual std::string getPlayer() = 0;
        virtual void setPlayer(std::string& player) = 0;
        virtual std::string getName() = 0;
        virtual void setName(std::string& name) = 0;
        void updateStrategy(Strategy::IStrategy& strategy);
        void setAnimations(Animation moveLeftAnimation,Animation moveRightAnimation,Animation moveUpAnimation,Animation movingDownAnimation,Animation shootingAnimation,Animation dyingAnimation);
        Animation getCurrentAnimation();
        
        Animation getMoveLeftAnimation();
        Animation getMoveRightAnimation();
        Animation getMoveUpAnimation();
        Animation getMoveDownAnimation();
        Animation getShootingAnimation();
        Animation getDyingAnimation();

        void setCurrentAnimation(Animation current);
        AnimatedSprite getAnimatedSprite();
        void setAnimatedSprite(AnimatedSprite current);
        ~Unit();

    protected:
        int max_hp;
        int hp;
        int ad;
        int range;
        std::string player;
        std::string name;
        Strategy::IStrategy* strategy;
        Animation moveLeftAnimation;
        Animation moveRightAnimation;
        Animation moveUpAnimation;
        Animation moveDownAnimation;
        Animation shootingAnimation;
        Animation dyingAnimation;
        Animation currentAnimation;
        AnimatedSprite animatedSprite;

};
}

#endif /* Unit_hpp */
