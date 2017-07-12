//
// Created by Vincent Durpoix on 12/07/2017.
//

#ifndef HELPPROJECT_MOVINGOBJECT_H
#define HELPPROJECT_MOVINGOBJECT_H

#include <SFML/Graphics.hpp>
#include "Animation.hpp"


namespace Unit {
    class MovingUnit : public Unit{
        sf::Texture texture;
        Animation walkingAnimationUp;
        Animation walkingAnimationDown;
        Animation walkingAnimationLeft;
        Animation walkingAnimationRight;
        Animation walkingAnimationShoot;
        Animation takingObjectiveAnimation;
        Animation dyingAnimation;
        
    public:
        bool isNearEnnemy();
        bool isNearObjective();
        void shootEnnemy(Unit);
    };
}

#endif //HELPPROJECT_MOVINGOBJECT_H
