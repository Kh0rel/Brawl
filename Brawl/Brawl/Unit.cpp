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
