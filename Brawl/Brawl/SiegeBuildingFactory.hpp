//
//  SiegeBuildingFactory.hpp
//  Brawl
//
//  Created by Meryl Barantal on 06/07/2017.
//  Copyright © 2017 Meryl Barantal. All rights reserved.
//

#ifndef SiegeBuildingFactory_hpp
#define SiegeBuildingFactory_hpp

#include <stdio.h>
#include "AbstractBuildingFactory.hpp"
#include "UnitBuilding.hpp"
#include "SiegeBuilding.hpp"

namespace Factory{
    class SiegeBuildingFactory : public AbstractBuildingFactory
    {
    public:
        virtual Building::UnitBuilding* createBuilding() override;
    };
}

#endif /* SiegeBuildingFactory_hpp */
