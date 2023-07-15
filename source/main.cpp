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

    Card(const std::string& CardName, int CardDamage, int CardHealth, const std::string& CardTexture, int CardCost, std::string& CardType, bool WinCondition, bool AttackOnlyBuildings, float AttackSpeed, int Amount) :
        Name(CardName), Damage(CardDamage), Health(CardHealth), Cost(CardCost) {
        if(!Texture.loadFromFile(CardTexture)) {
            std::cout << "Error Code 0001";
        }
    }
};

int shit() {
    // Spells literally cant have hp cuz this shit is invulnerable, AAAAA >:(
    Card Card1("Pirate", 63, 326, "./assets/card1.png", 4, "Trainer", false, false, 0.9, 1);
    Card Card2("Indians", 48, 90, "./assets/card2.png", 2, "Troop", false, false, 1.1, 2);
    Card Card3("Reaper", 57, 97, "./assets/card3.png", 3, "Troop", false, false, 1, 1);
    Card Card4("Arrows", 76, 0, "./assets/card4.png", 3, "Spell", false, false, 1.25, 5);
    Card Card5("Pelican", 76, 120, "./assets/card5.png", 5, "Troop", true, true, 2, 1);
    Card Card6("Cannon", 72, 111, "./assets/card6.png", 3, "Building", false, false, 1, 1);
    Card Card7("R.O.B.O.T", 100, 190, "./assets/card7.png", 6, "Troop", true, true, 1.8, 1);
    Card Card8("Fireball", 80, 0, "./assets/card8.png", 4, "Spell", false, false, 2.5, 1);
    Card Card9("Thief", 66, 97, "./assets/card9.png", 3, "Troop", true, false, 1.2, 1);
    Card Card10("Normal Vikings", 59, 99, "./assets/card10.png", 4, "Troop", false, false, 1.4, 4);
    Card Card11("Elite Vikings", 76, 111, "./assets/card11.png", 6, "Troop", false, false, 1.7, 2);
    Card Card12("Rocket", 120, 0, "./assets/card12.png", 6, "Speel", false, false, 3, 1);
    Card Card13("goblins", 50, 50, "./assets/card13.png", 1, "Troop", false, false, 1, 4);

    return 0;
}
