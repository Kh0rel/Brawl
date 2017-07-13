
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
#include "SoldierFactory.hpp"

int main(int, char const**)
{
    // setup window
    sf::Vector2i screenDimensions(800,600);
    sf::RenderWindow window(sf::VideoMode(screenDimensions.x, screenDimensions.y), "Animations!");
    window.setFramerateLimit(60);
    
    
    Character::Soldier* soldier;
    Factory::SoldierFactory* soldierFactory = new Factory::SoldierFactory();
    
    soldier = soldierFactory->createSoldier();
    
    
    sf::Clock frameClock;
    
    float speed = 80.f;
    bool noKeyWasPressed = true;
    
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
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
        {
            soldier->setCurrentAnimation(soldier->getMoveUpAnimation());
            movement.y -= speed;
            noKeyWasPressed = false;
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
        {
            soldier->setCurrentAnimation(soldier->getMoveDownAnimation());
            movement.y += speed;
            noKeyWasPressed = false;
        }
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
        {
            soldier->setCurrentAnimation(soldier->getMoveLeftAnimation());
            movement.x -= speed;
            noKeyWasPressed = false;
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
        {
            soldier->setCurrentAnimation(soldier->getMoveRightAnimation());
            movement.x += speed;
            noKeyWasPressed = false;
        }
        //soldier->getAnimatedSprite().setAnimation(const Animation &animation)
        Animation animation = soldier->getCurrentAnimation();
        soldier->getAnimatedSprite().play(animation);
        soldier->getAnimatedSprite().move(movement * frameTime.asSeconds());
        
        // if no key was pressed stop the animation
        if (noKeyWasPressed)
        {
             soldier->getAnimatedSprite().stop();
        }
        noKeyWasPressed = true;
        
        // update AnimatedSprite
         soldier->getAnimatedSprite().update(frameTime);
        
        // draw
        window.clear();
        window.draw(soldier->getAnimatedSprite());
        window.display();
    }
    
    return 0;
}
