//
//  SoldierBuilding.cpp
//  Brawl
//
//  Created by Meryl Barantal on 06/07/2017.
//  Copyright © 2017 Meryl Barantal. All rights reserved.
//

#include "SoldierBuilding.hpp"

int Building::SoldierBuilding::getCost(){
    return this->cost;
}

int Building::SoldierBuilding::getSpeed(){
    return this->speed;
}

int Building::SoldierBuilding::getState(){
    return this->state;
}

void Building::SoldierBuilding::setState(int state){
    this->state = state;
}

Character::Unit* Building::SoldierBuilding::createUnit(){
    return this->factory.createUnit();
}
