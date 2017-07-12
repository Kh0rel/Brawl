//
//  SiegeBuildingFactory.cpp
//  Brawl
//
//  Created by Meryl Barantal on 06/07/2017.
//  Copyright © 2017 Meryl Barantal. All rights reserved.
//

#include "SiegeBuildingFactory.hpp"

Building::UnitBuilding* Factory::SiegeBuildingFactory::createBuilding(){
    return new Building::SiegeBuilding();
}
