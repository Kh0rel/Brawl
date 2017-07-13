
//
// Disclaimer:
// ----------
//
// This code will work only if you selected window, graphics and audio.
//
// Note that the "Run Script" build phase will copy the required frameworks
// or dylibs to your application bundle so you can execute it on any OS X
// computer.
//
// Your resource files (images, sounds, fonts, ...) are also copied to your
// application bundle. To get the path to these resources, use the helper
// function `resourcePath()` from ResourcePath.hpp
//

#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>

// Here is a small helper for you! Have a look.
#include "ResourcePath.hpp"
#include "Game.hpp"
#include "SoldierFactory.hpp"

int main(int, char const**)
{
    // setup window
    sf::Vector2i screenDimensions(800,600);
    sf::RenderWindow window(sf::VideoMode(screenDimensions.x, screenDimensions.y), "Animations!");
    window.setFramerateLimit(60);
    
    
    Game::Game& game = Game::Game::Instance();
    
    
    Character::Soldier* soldier,*soldier2;
    Factory::SoldierFactory* soldierFactory = new Factory::SoldierFactory();
    
    soldier = soldierFactory->createSoldier();
    soldier2 = soldierFactory->createSoldier();
    
    game.addUnit(*soldier);
    game.addUnit(*soldier2);

    sf::Clock frameClock;
    
    AnimatedSprite animatedSprite(sf::seconds(0.2), true, false);
    animatedSprite.setPosition(sf::Vector2f(0,screenDimensions.y/2));

    AnimatedSprite animatedSprite2(sf::seconds(0.2), true, false);
    animatedSprite2.setPosition(sf::Vector2f(screenDimensions.x, screenDimensions.y/2));

    
    float speed = 80.f;
    bool noKeyWasPressed = false;
    
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
            if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Escape)
                window.close();
        }
        
        
        sf::Time frameTime = frameClock.restart();
        
        // if a key was pressed set the correct animation and move correctly
        sf::Vector2f movement(0.f, 0.f);
        sf::Vector2f movement2(0.f, 0.f);
        
        //soldier->execute();
        //soldier2->execute();
        
        soldier->setCurrentAnimation(soldier->getMoveRightAnimation());
        soldier2->setCurrentAnimation(soldier->getMoveLeftAnimation());
        movement.x += speed;
        movement2.x -= speed;
        
        
        Animation anim = soldier->getCurrentAnimation();
        Animation anim2 = soldier2->getCurrentAnimation();
        
        animatedSprite.play(anim);
        animatedSprite.move(movement * frameTime.asSeconds());
        
        animatedSprite2.play(anim2);
        animatedSprite2.move(movement2 * frameTime.asSeconds());
        
        
        // if no key was pressed stop the animation
        if (noKeyWasPressed)
        {
            animatedSprite.stop();
        }

        // update AnimatedSprite
        animatedSprite.update(frameTime);
        animatedSprite2.update(frameTime);
        
        // draw
        window.clear();
        window.draw(animatedSprite);
        window.draw(animatedSprite2);
        window.display();
    }
    
    return 0;
}
