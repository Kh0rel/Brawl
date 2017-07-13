//
//  SoldierFactory.cpp
//  Brawl
//
//  Created by Meryl Barantal on 04/07/2017.
//  Copyright © 2017 Meryl Barantal. All rights reserved.
//

#include "SoldierFactory.hpp"

Character::Unit* Factory::SoldierFactory::createUnit(){
    Character::Soldier* soldier = new Character::Soldier();
    
    
    return soldier;

}

Character::Soldier* Factory::SoldierFactory::createSoldier(){
    Character::Soldier* soldier = new Character::Soldier();
    int a = 10;
    //TODO set player
    std::string player = "1";
    soldier->setHP(a);
    soldier->setPlayer(player);
    
    
    sf::Texture* texture = new sf::Texture();
    if (!(*texture).loadFromFile("/Users/Vincent/Documents/Pro/Cours/C++/project/Brawl/Brawl/Brawl/soldier.png"))
    {
        std::cout << "Failed to load player spritesheet!" << std::endl;
        return;
    }
    
    Animation walkingAnimationDown = Animation();
    walkingAnimationDown.setSpriteSheet(*texture);
    walkingAnimationDown.addFrame(sf::IntRect(32, 0, 32, 32));
    walkingAnimationDown.addFrame(sf::IntRect(64, 0, 32, 32));
    walkingAnimationDown.addFrame(sf::IntRect(32, 0, 32, 32));
    walkingAnimationDown.addFrame(sf::IntRect( 0, 0, 32, 32));
    
    Animation walkingAnimationLeft = Animation();
    walkingAnimationLeft.setSpriteSheet(*texture);
    walkingAnimationLeft.addFrame(sf::IntRect(32, 32, 32, 32));
    walkingAnimationLeft.addFrame(sf::IntRect(64, 32, 32, 32));
    walkingAnimationLeft.addFrame(sf::IntRect(32, 32, 32, 32));
    walkingAnimationLeft.addFrame(sf::IntRect( 0, 32, 32, 32));
    
    Animation walkingAnimationRight = Animation();
    walkingAnimationRight.setSpriteSheet(*texture);
    walkingAnimationRight.addFrame(sf::IntRect(32, 64, 32, 32));
    walkingAnimationRight.addFrame(sf::IntRect(64, 64, 32, 32));
    walkingAnimationRight.addFrame(sf::IntRect(32, 64, 32, 32));
    walkingAnimationRight.addFrame(sf::IntRect( 0, 64, 32, 32));
    
    Animation walkingAnimationUp = Animation();
    walkingAnimationUp.setSpriteSheet(*texture);
    walkingAnimationUp.addFrame(sf::IntRect(32, 96, 32, 32));
    walkingAnimationUp.addFrame(sf::IntRect(64, 96, 32, 32));
    walkingAnimationUp.addFrame(sf::IntRect(32, 96, 32, 32));
    walkingAnimationUp.addFrame(sf::IntRect( 0, 96, 32, 32));
    
    
    Animation dyingAnimation = Animation();
    dyingAnimation.setSpriteSheet(*texture);
    dyingAnimation.addFrame(sf::IntRect(32, 0, 32, 32));
    dyingAnimation.addFrame(sf::IntRect(64, 0, 32, 32));
    dyingAnimation.addFrame(sf::IntRect(32, 0, 32, 32));
    dyingAnimation.addFrame(sf::IntRect( 0, 0, 32, 32));
    
    Animation shootingAnimation = Animation();
    shootingAnimation.setSpriteSheet(*texture);
    shootingAnimation.addFrame(sf::IntRect(32, 96, 32, 32));
    shootingAnimation.addFrame(sf::IntRect(64, 96, 32, 32));
    shootingAnimation.addFrame(sf::IntRect(32, 96, 32, 32));
    shootingAnimation.addFrame(sf::IntRect( 0, 96, 32, 32));
    
    
    
    soldier->setAnimations(walkingAnimationLeft,walkingAnimationRight, walkingAnimationUp, walkingAnimationDown, shootingAnimation, dyingAnimation);
    
    soldier->setCurrentAnimation(walkingAnimationRight);
    
    
    /*sf::Vector2i screenDimensions(800,600);
    AnimatedSprite animatedSprite;
    animatedSprite = AnimatedSprite(sf::seconds(0.2), true, false);
    animatedSprite.setPosition(sf::Vector2f(screenDimensions/2));
    
    soldier->setAnimatedSprite(animatedSprite);*/
    
    return soldier;
}
