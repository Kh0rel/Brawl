//
//  MovementStrategy.hpp
//  Brawl
//
//  Created by Meryl Barantal on 05/07/2017.
//  Copyright © 2017 Meryl Barantal. All rights reserved.
//

#ifndef MovementStrategy_hpp
#define MovementStrategy_hpp

#include <stdio.h>
#include "IStrategy.hpp"
#include <iostream>

namespace Strategy {
    class MovementStrategy : public IStrategy {
        virtual void execute() override;
    };
}
#endif /* MovementStrategy_hpp */
