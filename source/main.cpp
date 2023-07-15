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

    Card(const std::string& CardName, int CardDamage, int CardHealth, const std::string& CardTexture, int CardCost, std::string& CardType) :
        Name(CardName), Damage(CardDamage), Health(CardHealth), Cost(CardCost) {
        if(!Texture.loadFromFile(CardTexture)) {
            std::cout << "Error Code 0001";
        }
    }
};

int main() {
    Card Card1("Pirate", 63, 290, "./assets/card1.png", 4, "Trainer");
    Card Card2("Indians", 33, 91, "./assets/card2.png", 2, "Troop");
    Card Card3("Reaper", 50, 98, "./assets/card3.png", 3, "Troop");
    Card Card4("Arrows", 95, 0, "./assets/card4.png", 4, "Spell");
    Card Card5("Pelican", 92, 151, "./assets/card5.png", 5, "Troop");
    Card Card6("Cannon", 72, 111, "./assets/card6.png", 3, "Building");

    return 0;
}
