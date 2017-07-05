//
//  IStrategy.hpp
//  Brawl
//
//  Created by Meryl Barantal on 05/07/2017.
//  Copyright © 2017 Meryl Barantal. All rights reserved.
//

#ifndef IStrategy_hpp
#define IStrategy_hpp

#include <stdio.h>

namespace Strategy{
    class IStrategy {
        virtual void execute() = 0;
    };
}

#endif /* IStrategy_hpp */
