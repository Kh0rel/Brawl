//
//  SiegeFactory.hpp
//  Brawl
//
//  Created by Meryl Barantal on 05/07/2017.
//  Copyright © 2017 Meryl Barantal. All rights reserved.
//

#ifndef SiegeFactory_hpp
#define SiegeFactory_hpp

#include <stdio.h>
#include <string>
#include "AbstractUnitFactory.hpp"
#include "Siege.hpp"

namespace Factory{
    class SiegeFactory : public AbstractUnitFactory
    {
    public:
        virtual Character::Unit* createUnit() override;
    };
}
#endif /* SiegeFactory_hpp */
