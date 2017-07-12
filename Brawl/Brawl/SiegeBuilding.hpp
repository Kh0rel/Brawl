//
//  SiegeBuilding.hpp
//  Brawl
//
//  Created by Meryl Barantal on 06/07/2017.
//  Copyright © 2017 Meryl Barantal. All rights reserved.
//

#ifndef SiegeBuilding_hpp
#define SiegeBuilding_hpp

#include <stdio.h>
#include "Siege.hpp"
#include "SiegeFactory.hpp"
#include "UnitBuilding.hpp"

#endif /* SiegeBuilding_hpp */

namespace Building{
    class SiegeBuilding : public UnitBuilding {
    public:
        int getSpeed();
        int getCost();
        int getState();
        void setState(int state);
        Character::Unit* createUnit();

    private:
        int speed = 5;
        int cost = 50;
        int state = 0;
        Factory::SiegeFactory factory;
        
        
    };
}
