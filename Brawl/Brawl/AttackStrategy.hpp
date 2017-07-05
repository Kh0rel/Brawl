//
//  AttackStrategy.hpp
//  Brawl
//
//  Created by Meryl Barantal on 05/07/2017.
//  Copyright © 2017 Meryl Barantal. All rights reserved.
//

#ifndef AttackStrategy_hpp
#define AttackStrategy_hpp

#include <stdio.h>
#include "IStrategy.hpp"
#include <iostream>

namespace Strategy {
    class AttackStrategy : public IStrategy {
        virtual void execute() override;
    };
}
#endif /* AttackStrategy_hpp */
