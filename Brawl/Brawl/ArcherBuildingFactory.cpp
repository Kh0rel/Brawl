//
//  ArcherBuildingFactory.cpp
//  Brawl
//
//  Created by Meryl Barantal on 06/07/2017.
//  Copyright © 2017 Meryl Barantal. All rights reserved.
//

#include "ArcherBuildingFactory.hpp"

Building::UnitBuilding* Factory::ArcherBuildingFactory::createBuilding(){
    return new Building::ArcherBuilding();
}
