//
//  SoldierBuildingFactory.cpp
//  Brawl
//
//  Created by Meryl Barantal on 06/07/2017.
//  Copyright © 2017 Meryl Barantal. All rights reserved.
//

#include "SoldierBuildingFactory.hpp"

Building::UnitBuilding* Factory::SoldierBuildingFactory::createBuilding(){
    return new Building::SoldierBuilding();
}
