
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
#include "SoldierFactory.hpp"
#include "Soldier.hpp"
#include <iostream>
#include "ArcherFactory.hpp"
#include "Archer.hpp"
#include "ArcherBuilding.hpp"
#include "ArcherBuildingFactory.hpp"



// Here is a small helper for you! Have a look.
#include "ResourcePath.hpp"

int main(int, char const**)
{
    
    
    Factory::ArcherBuildingFactory soldierBSF;
    Building::UnitBuilding* soldierB = soldierBSF.createBuilding();
    std::cout<<soldierB->getSpeed()<<std::endl;
    
    soldierB->setState(soldierB->getSpeed());
    while (soldierB->getState() != 0) {
        if (soldierB->getState() == 1) {
            Character::Unit* soldier = soldierB->createUnit();
            std::cout<<soldier->getName()<<std::endl;
        }else{
            std::cout<<"Creating Archer"<<std::endl;
        }
        soldierB->setState(soldierB->getState() - 1);
    }
    
    
    
    Factory::SoldierFactory soldierSF;
    Character::Unit* soldier = soldierSF.createUnit();
    std::cout<<soldier->getHP()<<std::endl;
    
    Factory::ArcherFactory archerSF;
    Character::Unit* archer = archerSF.createUnit();
    std::cout<<archer->getHP()<<std::endl;
    
    
    
    
    
    
    
    // Create the main window
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML window");

    // Set the Icon
    sf::Image icon;
    if (!icon.loadFromFile(resourcePath() + "icon.png")) {
        return EXIT_FAILURE;
    }
    window.setIcon(icon.getSize().x, icon.getSize().y, icon.getPixelsPtr());

    // Load a sprite to display
    sf::Texture texture;
    if (!texture.loadFromFile(resourcePath() + "cute_image.jpg")) {
        return EXIT_FAILURE;
    }
    sf::Sprite sprite(texture);

    // Create a graphical text to display
    sf::Font font;
    if (!font.loadFromFile(resourcePath() + "sansation.ttf")) {
        return EXIT_FAILURE;
    }
    sf::Text text("Hello SFML", font, 50);
    text.setFillColor(sf::Color::Black);

    // Load a music to play
    sf::Music music;
    if (!music.openFromFile(resourcePath() + "nice_music.ogg")) {
        return EXIT_FAILURE;
    }

    // Play the music
    music.play();

    // Start the game loop
    while (window.isOpen())
    {
        // Process events
        sf::Event event;
        while (window.pollEvent(event))
        {
            // Close window: exit
            if (event.type == sf::Event::Closed) {
                window.close();
            }

            // Escape pressed: exit
            if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Escape) {
                window.close();
            }
        }

        // Clear screen
        window.clear();

        // Draw the sprite
        window.draw(sprite);

        // Draw the string
        window.draw(text);

        // Update the window
        window.display();
    }

    return EXIT_SUCCESS;
}
