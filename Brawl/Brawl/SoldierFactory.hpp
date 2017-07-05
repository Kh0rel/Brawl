//
//  SoldierFactory
//  Brawl
//
//  Created by Meryl Barantal on 04/07/2017.
//  Copyright © 2017 Meryl Barantal. All rights reserved.
//

#ifndef SoldierFactory_hpp
#define SoldierFactory_hpp

#include <stdio.h>
#include <string>
#include "AbstractUnitFactory.hpp"
#include "Soldier.hpp"

namespace Factory{
class SoldierFactory : public AbstractUnitFactory
{
public:
    virtual Character::Unit* createUnit() override;
};
}
#endif /* SoldierFactory_hpp */
