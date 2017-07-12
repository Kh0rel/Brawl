//
//  ArcherBuilding.cpp
//  Brawl
//
//  Created by Meryl Barantal on 06/07/2017.
//  Copyright © 2017 Meryl Barantal. All rights reserved.
//

#include "ArcherBuilding.hpp"

int Building::ArcherBuilding::getCost(){
    return this->cost;
}

int Building::ArcherBuilding::getSpeed(){
    return this->speed;
}

int Building::ArcherBuilding::getState(){
    return this->state;
}

void Building::ArcherBuilding::setState(int state){
    this->state = state;
}

Character::Unit* Building::ArcherBuilding::createUnit(){
    return this->factory.createUnit();
}
