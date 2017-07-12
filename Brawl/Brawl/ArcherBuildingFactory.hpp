//
//  ArcherBuildingFactory.hpp
//  Brawl
//
//  Created by Meryl Barantal on 06/07/2017.
//  Copyright © 2017 Meryl Barantal. All rights reserved.
//

#ifndef ArcherBuildingFactory_hpp
#define ArcherBuildingFactory_hpp

#include <stdio.h>
#include "AbstractBuildingFactory.hpp"
#include "UnitBuilding.hpp"
#include "ArcherBuilding.hpp"

namespace Factory{
    class ArcherBuildingFactory : public AbstractBuildingFactory
    {
    public:
        virtual Building::UnitBuilding* createBuilding() override;
    };
}

#endif /* ArcherBuildingFactory_hpp */
