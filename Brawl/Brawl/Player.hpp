//
//  Player.hpp
//  Brawl
//
//  Created by Vincent Durpoix on 13/07/2017.
//  Copyright © 2017 Meryl Barantal. All rights reserved.
//

#ifndef Player_hpp
#define Player_hpp

#include <iostream>

namespace Game{
    
    class Player{
    public:
        std::string getName();
        void setName(std::string);
    private:
        std::string name;
    };
    
}

#endif /* Player_hpp */
