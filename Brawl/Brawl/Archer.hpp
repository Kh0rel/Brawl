//
//  Archer.hpp
//  Brawl
//
//  Created by Meryl Barantal on 04/07/2017.
//  Copyright © 2017 Meryl Barantal. All rights reserved.
//

#ifndef Archer_hpp
#define Archer_hpp

#include "Unit.hpp"

namespace Character {
class Archer : public Unit {
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
    int max_hp = 20;
    int hp = 20;
    int ad = 10;
    int range = 2;
    std::string player;
    std::string name = "Archer";
};
}
#endif /* Archer_hpp */
