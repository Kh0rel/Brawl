//
//  AbstractBuildingFactory.hpp
//  Brawl
//
//  Created by Meryl Barantal on 06/07/2017.
//  Copyright © 2017 Meryl Barantal. All rights reserved.
//

#ifndef AbstractBuildingFactory_hpp
#define AbstractBuildingFactory_hpp

#include <stdio.h>
#include "UnitBuilding.hpp"

namespace Factory {
    class AbstractBuildingFactory {
    public:
        virtual Building::UnitBuilding* createBuilding() = 0;
    };
}


#endif /* AbstractBuildingFactory_hpp */
