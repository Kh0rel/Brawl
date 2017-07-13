//
//  Soldier.hpp
//  Brawl
//
//  Created by Meryl Barantal on 04/07/2017.
//  Copyright © 2017 Meryl Barantal. All rights reserved.
//

#ifndef Soldier_hpp
#define Soldier_hpp

#include "Unit.hpp"


namespace Character {
    class Soldier : public Unit {
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
        int max_hp = 35;
        int hp = 35;
        const int ad = 5;
        const int range = 1;
        std::string player;
        std::string name = "Soldier";
    };
}
#endif /* Soldier_hpp */
