//
//  Unit.cpp
//  Brawl
//
//  Created by Meryl Barantal on 04/07/2017.
//  Copyright © 2017 Meryl Barantal. All rights reserved.
//

#include "Unit.hpp"

void Character::Unit::updateStrategy(Strategy::IStrategy& strategy){
    this->strategy = nullptr;
    this->strategy = &strategy;
}

Character::Unit::~Unit(){
    this->strategy = nullptr;
}

void Character::Unit::setAnimations(Animation moveLeftAnimation, Animation moveRightAnimation, Animation moveUpAnimation, Animation moveDownAnimation, Animation shootingAnimation, Animation dyingAnimation){
    this->moveRightAnimation = moveRightAnimation;
    this->moveLeftAnimation = moveLeftAnimation;
    this->moveUpAnimation = moveUpAnimation;
    this->moveDownAnimation = moveDownAnimation;
    this->dyingAnimation = dyingAnimation;
    this->shootingAnimation = shootingAnimation;
}

Animation Character::Unit::getCurrentAnimation(){
    return this->currentAnimation;
}

Animation Character::Unit::getMoveUpAnimation(){
    return this->moveUpAnimation;
}

Animation Character::Unit::getMoveDownAnimation(){
    return this->moveDownAnimation;
}

Animation Character::Unit::getMoveLeftAnimation(){
    return this->moveLeftAnimation;
}

Animation Character::Unit::getMoveRightAnimation(){
    return this->moveRightAnimation;
}

Animation Character::Unit::getDyingAnimation(){
    return this->dyingAnimation;
}

Animation Character::Unit::getShootingAnimation(){
    return this->shootingAnimation;
}

void Character::Unit::setCurrentAnimation(Animation animation){
    this->currentAnimation = animation;
}

AnimatedSprite Character::Unit::getAnimatedSprite(){
    return this->animatedSprite;
}

void Character::Unit::setAnimatedSprite(AnimatedSprite animatedSprite){
    this->animatedSprite = animatedSprite;
}
