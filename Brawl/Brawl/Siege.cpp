//
//  Siege.cpp
//  Brawl
//
//  Created by Meryl Barantal on 05/07/2017.
//  Copyright © 2017 Meryl Barantal. All rights reserved.
//

#include "Siege.hpp"

int Character::Siege::getMaxHealth(){
    return this->max_hp;
}

int Character::Siege::getHP(){
    return this->hp;
}

void Character::Siege::setHP(int& hp){
    this->hp = hp;
}

int Character::Siege::getAD(){
    return this->ad;
}

int Character::Siege::getRange(){
    return this->range;
}

std::string Character::Siege::getPlayer(){
    return this->player;
}

void Character::Siege::setPlayer(std::string& player){
    this->player = player;
}

std::string Character::Siege::getName(){
    return this->name;
}

void Character::Siege::setName(std::string& name){
    this->name = name;
}
