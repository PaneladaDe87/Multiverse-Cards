#include <SFML/Graphics.hpp>
#include <iostream>
#include <vector>

class Card {
public:
    std::string Name;
    int Damage;
    int Health;
    sf::Texture Texture;
    int Cost;

    Card(const std::string& CardName, int CardDamage, int CardHealth, const std::string& CardTexture, int CardCost, std::string& CardType, bool WinCondition) :
        Name(CardName), Damage(CardDamage), Health(CardHealth), Cost(CardCost) {
        if(!Texture.loadFromFile(CardTexture)) {
            std::cout << "Error Code 0001";
        }
    }
};

int shit() {
    // Spells literally cant have hp cuz this shit have no life, AAAAA >:(
    Card Card1("Pirate", 63, 326, "./assets/card1.png", 4, "Trainer", false);
    Card Card2("Indians", 40, 83, "./assets/card2.png", 2, "Troop", false);
    Card Card3("Reaper", 57, 97, "./assets/card3.png", 3, "Troop", false);
    Card Card4("Arrows", 76, 0, "./assets/card4.png", 3, "Spell", false);
    Card Card5("Pelican", 80, 151, "./assets/card5.png", 5, "Troop", true);
    Card Card6("Cannon", 72, 111, "./assets/card6.png", 3, "Building", false);
    Card Card7("R.O.B.O.T", 100, 190, "./assets/card7.png", 6, "Troop", false);
    Card Card8("Fireball", 78, 0, "./assets/card8.png", 4, "Spell", false);

    return 0;
}
