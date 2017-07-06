//
//  SiegeBuilding.cpp
//  Brawl
//
//  Created by Meryl Barantal on 06/07/2017.
//  Copyright © 2017 Meryl Barantal. All rights reserved.
//

#include "SiegeBuilding.hpp"

int Building::SiegeBuilding::getCost(){
    return this->cost;
}

int Building::SiegeBuilding::getSpeed(){
    return this->speed;
}

int Building::SiegeBuilding::getState(){
    return this->state;
}

void Building::SiegeBuilding::setState(int state){
    this->state = state;
}

Character::Unit* Building::SiegeBuilding::createUnit(){
    return this->factory.createUnit();
}
