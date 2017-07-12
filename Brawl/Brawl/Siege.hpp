//
//  Siege.hpp
//  Brawl
//
//  Created by Meryl Barantal on 05/07/2017.
//  Copyright © 2017 Meryl Barantal. All rights reserved.
//

#ifndef Siege_hpp
#define Siege_hpp

#include <stdio.h>
#include "Unit.hpp"

namespace Character {
class Siege : public Unit {
public:
    int getMaxHealth();
    int getHP();
    void setHP(int& hp);
    int getAD();
    int getRange();
    std::string getPlayer();
    void setPlayer(std::string& player);
    std::string getName();
    void setName(std::string& name);
    
private:
    int max_hp = 15;
    int hp = 15;
    int ad = 10;
    int range = 3;
    std::string player;
    std::string name = "Siege";
};
}

#endif /* Siege_hpp */
