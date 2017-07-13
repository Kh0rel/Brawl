//
//  Game.cpp
//  Brawl
//
//  Created by Vincent Durpoix on 13/07/2017.
//  Copyright © 2017 Meryl Barantal. All rights reserved.
//

#include "Game.hpp"

namespace Game {
    
    Game Game::gameInstance = Game();
    
    void Game::addUnit(Character::Unit unit){
        units.push_back(unit);
    }

    Game::Game()
    {
        std::cout<<"Creation Game "<<std::endl;
        player1 = Player();
        player1.setName("player1");
        player2 = Player();
        player1.setName("player2");
        
        units = std::vector<Character::Unit>();
    }
    
    Game::~Game()
    {
        std::cout<<"Destruction"<<std::endl;
    }
    
    Game& Game::Instance()
    {
        return gameInstance;
    }
}
