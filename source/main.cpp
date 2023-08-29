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
    int ChargeDamage;

    Card(const std::string& CardName, int CardDamage, int CardHealth, const std::string& DamageType, const std::string& CardTexture, int CardCost, std::string& CardType, bool WinCondition, bool AttackOnlyBuildings, float AttackSpeed, int Amount, bool FlyingTroop, bool HaveShield, int CardChargeDamage) :
        Name(CardName), Damage(CardDamage), Health(CardHealth), Cost(CardCost) {
        if(!Texture.loadFromFile(CardTexture)) {
            std::cout << "Error Code 0001";
        }
    }
};

void card() {
    // Spells literally cant have hp cuz this shit is invulnerable, AAAAA >:(
    // Every card starts on level 1
    Card Card1("Pirate", 96, 600, "One-By-One", "./assets/card1.png", 4, "Trainer", false, false, 0.9, 1, false, false, 0);
    Card Card2("Indians", 66, 100, "One-By-One", "./assets/card2.png", 2, "Troop", false, false, 1.1, 2, false, false, 0);
    Card Card3("Reaper", 80, 444, "One-By-One", "./assets/card3.png", 3, "Troop", false, false, 1, 1, false, false, 0);
    Card Card4("Arrows", 111, 0, "Area", "./assets/card4.png", 3, "Spell", false, false, 1.25, 5, false, false, 0);
    Card Card5("Pelican", 99, 500, "One-By-one", "./assets/card5.png", 5, "Troop", true, true, 2, 1, true, false, 0);
    Card Card6("Cannon", 79, 666, "One-By-One", "./assets/card6.png", 3, "Building", false, false, 1, 1, false, false, 0);
    Card Card7("R.O.B.O.T", 195, 870, "One-By-One", "./assets/card7.png", 7, "Troop", true, true, 2, 1, false, false, 0);
    Card Card8("Fireball", 128, 0, "Explode", "./assets/card8.png", 4, "Spell", false, false, 2.5, 1, false, false, 0);
    Card Card9("Thief", 65, 444, "On-Collide", "./assets/card9.png", 3, "Troop", false, false, 1.2, 1, false, false, 173);
    Card Card10("Normal Vikings", 70, 230, "One-By-One", "./assets/card10.png", 4, "Troop", false, false, 1.4, 4, false, false, 0);
    Card Card11("Elite Vikings", 100, 460, "One-By-One", "./assets/card11.png", 6, "Troop", false, false, 1.7, 2, false, false, 0);
    Card Card12("Rocket", 199, 0, "Explode", "./assets/card12.png", 5, "Spell", false, false, 3, 1, false, false, 0);
    Card Card13("Goblins", 96, 96, "One-By-One", "./assets/card13.png", 1, "Troop", false, false, 1, 4, false, false, 0);
    Card Card14("Sniper", 100, 120, "One-By-One", "./assets/card14.png", 4, "Troop", false, false, 3, 1, false, false, 0);
    Card Card15("Exterminator", 180, 810, "One-By-One", "./assets/card15.png", 7, "Troop", false, false, 1.8, 1, false, true, 0);
    Card Card16("Crusher", 222, 500, "Area", "./assets/card16.png", 6, "Building", false, false, 5, 1, false, false, 0);
    Card Card17("Mighty Indian", 48, 770, "Gradually", "./assets/card17.png", 6, "Troop", false, false, 1, 1, false, false, 0);
    Card Card18("Cachalot", 222, 0, "Smash", "./assets/card18.png", 6, "Spell", false, false, 1.5, 1, false, false, 0);
    Card Card19("Combat Helicopter", 90, 330, "One-By-One", "./assets/card19.png", 4, false, false, 1.25, 1, true, false, 0);
    Card Card20("Trojan Horse", 93, 300, "On-Collide", "./assets/card20.png", 4, true, true, 0.3, 1, true, false, 222);
    Card Card21("Bomb Man", 96, 490, "Explode", "./assets/card21.png", 5, true, true, 1.8, 1, false, false, 0);
    Card Card22("Time Traveler", 84, 444, "One-By-One", "./assets/card22.png", 4, false, false, 1.3, 1, false, false, 0);
}

void materializer() {
    int Amount = 5;
    int Timer = 0;
    int TimerLimit = 280;
    
    while(Timer >= TimerLimit) {
        Timer += 1;
        
        if(Timer >= TimerLimit) {
            Amount += 1;
            Timer = 0;
        }
    }
}