//
//  ArcherFactory.cpp
//  Brawl
//
//  Created by Meryl Barantal on 05/07/2017.
//  Copyright © 2017 Meryl Barantal. All rights reserved.
//

#include "ArcherFactory.hpp"

Character::Unit* Factory::ArcherFactory::createUnit(){
    return new Character::Archer();
}
