//
//  ArcherBuilding.hpp
//  Brawl
//
//  Created by Meryl Barantal on 06/07/2017.
//  Copyright © 2017 Meryl Barantal. All rights reserved.
//

#ifndef ArcherBuilding_hpp
#define ArcherBuilding_hpp

#include <stdio.h>
#include "Archer.hpp"
#include "ArcherFactory.hpp"
#include "UnitBuilding.hpp"

namespace Building{
    class ArcherBuilding : public UnitBuilding {
    public:
        int getSpeed();
        int getCost();
        int getState();
        void setState(int state);
        Character::Unit* createUnit();

    private:
        int speed = 3;
        int cost = 30;
        int state = 0;
        Factory::ArcherFactory factory;
        
        
    };
}

#endif /* ArcherBuilding_hpp */
