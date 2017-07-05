//
//  ArcherFactory.hpp
//  Brawl
//
//  Created by Meryl Barantal on 05/07/2017.
//  Copyright © 2017 Meryl Barantal. All rights reserved.
//

#ifndef ArcherFactory_hpp
#define ArcherFactory_hpp

#include <stdio.h>
#include <string>
#include "AbstractUnitFactory.hpp"
#include "Archer.hpp"

namespace Factory{
    class ArcherFactory : public AbstractUnitFactory
    {
    public:
        virtual Character::Unit* createUnit() override;
    };
}
#endif /* ArcherFactory_hpp */
