//
//  SoldierFactory.cpp
//  Brawl
//
//  Created by Meryl Barantal on 04/07/2017.
//  Copyright © 2017 Meryl Barantal. All rights reserved.
//

#include "SoldierFactory.hpp"


Character::Unit* Factory::SoldierFactory::createUnit(){
    return new Character::Soldier();
}
