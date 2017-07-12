//
//  SoldierBuildingFactory.hpp
//  Brawl
//
//  Created by Meryl Barantal on 06/07/2017.
//  Copyright © 2017 Meryl Barantal. All rights reserved.
//

#ifndef SoldierBuildingFactory_hpp
#define SoldierBuildingFactory_hpp

#include <stdio.h>
#include "AbstractBuildingFactory.hpp"
#include "UnitBuilding.hpp"
#include "SoldierBuilding.hpp"

namespace Factory{
    class SoldierBuildingFactory : public AbstractBuildingFactory
    {
    public:
        virtual Building::UnitBuilding* createBuilding() override;
    };
}

#endif /* SoldierBuildingFactory_hpp */
