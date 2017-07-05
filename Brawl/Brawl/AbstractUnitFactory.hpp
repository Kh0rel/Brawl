//
//  AbstractUnitFactory.hpp
//  Brawl
//
//  Created by Meryl Barantal on 04/07/2017.
//  Copyright © 2017 Meryl Barantal. All rights reserved.
//

#ifndef AbstractUnitFactory_hpp
#define AbstractUnitFactory_hpp

#include <stdio.h>
#include "Unit.hpp"

namespace Factory {
    class AbstractUnitFactory {
    public:
        virtual Character::Unit* createUnit() = 0;
    };
}

#endif /* AbstractUnitFactory_hpp */
