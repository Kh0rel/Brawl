//
//  UnitBuilding.hpp
//  Brawl
//
//  Created by Meryl Barantal on 06/07/2017.
//  Copyright © 2017 Meryl Barantal. All rights reserved.
//

#ifndef UnitBuilding_hpp
#define UnitBuilding_hpp

#include <stdio.h>
#include "Unit.hpp"

namespace Building {
    class UnitBuilding {
    public:
        virtual int getSpeed() = 0;
        virtual int getCost() = 0;
        virtual int getState() = 0;
        virtual void setState(int state) = 0;
        virtual Character::Unit* createUnit() = 0;

    protected:
        int speed;
        int cost;
        int state;

    };
}
#endif /* UnitBuilding_hpp */
