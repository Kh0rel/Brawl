//
//  Game.hpp
//  Brawl
//
//  Created by Vincent Durpoix on 13/07/2017.
//  Copyright © 2017 Meryl Barantal. All rights reserved.
//

#ifndef Game_hpp
#define Game_hpp

#include <stdio.h>
#include <iostream>
#include "AnimatedSprite.hpp"
#include "Player.hpp"
#include "Unit.hpp"

namespace Game{
    
    class Game{
        
    public:
        static Game& Instance();
        void addUnit(Character::Unit);
    private:
        Game& operator= (const Game&){}
        Game (const Game&){}
        Game();
        ~Game();
        
        static Game gameInstance;
        
        Player player1;
        Player player2;
        std::vector<Character::Unit>units;
        
        
    };
    
}
#endif /* Game_hpp */
