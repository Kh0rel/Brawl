//
//  SiegeFactory.cpp
//  Brawl
//
//  Created by Meryl Barantal on 05/07/2017.
//  Copyright © 2017 Meryl Barantal. All rights reserved.
//

#include "SiegeFactory.hpp"

Character::Unit* Factory::SiegeFactory::createUnit(){
    return new Character::Siege();
}
