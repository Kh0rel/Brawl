//
//  Archer.cpp
//  Brawl
//
//  Created by Meryl Barantal on 04/07/2017.
//  Copyright © 2017 Meryl Barantal. All rights reserved.
//

#include "Archer.hpp"

int Character::Archer::getMaxHealth(){
    return this->max_hp;
}

int Character::Archer::getHP(){
    return this->hp;
}

void Character::Archer::setHP(int& hp){
    this->hp = hp;
}

int Character::Archer::getAD(){
    return this->ad;
}

int Character::Archer::getRange(){
    return this->range;
}

std::string Character::Archer::getPlayer(){
    return this->player;
}

void Character::Archer::setPlayer(std::string& player){
    this->player = player;
}

std::string Character::Archer::getName(){
    return this->name;
}

void Character::Archer::setName(std::string& name){
    this->name = name;
}
