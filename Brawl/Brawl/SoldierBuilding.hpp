//
//  SoldierBuilding.hpp
//  Brawl
//
//  Created by Meryl Barantal on 06/07/2017.
//  Copyright © 2017 Meryl Barantal. All rights reserved.
//

#ifndef SoldierBuilding_hpp
#define SoldierBuilding_hpp

#include <stdio.h>
#include "Soldier.hpp"
#include "SoldierFactory.hpp"
#include "UnitBuilding.hpp"

namespace Building{
    class SoldierBuilding : public UnitBuilding {
    public:
        int getSpeed();
        int getCost();
        int getState();
        void setState(int state);
        Character::Unit* createUnit();

    private:
        int speed = 1;
        int cost = 10;
        int state = 0;
        Factory::SoldierFactory factory;

        
    };
}


#endif /* SoldierBuilding_hpp */
