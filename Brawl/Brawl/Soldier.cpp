//
//  Soldier.cpp
//  Brawl
//
//  Created by Meryl Barantal on 04/07/2017.
//  Copyright © 2017 Meryl Barantal. All rights reserved.
//

#include "Soldier.hpp"


int Character::Soldier::getMaxHealth(){
    return this->max_hp;
}

int Character::Soldier::getHP(){
    return this->hp;
}

void Character::Soldier::setHP(int& hp){
    this->hp = hp;
}

int Character::Soldier::getAD(){
    return this->ad;
}

int Character::Soldier::getRange(){
    return this->range;
}

std::string Character::Soldier::getPlayer(){
    return this->player;
}

void Character::Soldier::setPlayer(std::string& player){
    this->player = player;
}

std::string Character::Soldier::getName(){
    return this->name;
}

void Character::Soldier::setName(std::string& name){
    this->name = name;
}

