#include <../source/SFML/Graphics.hpp>
#include <../source/SFML/Network.hpp>
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

    Card(const std::string& CardName, int CardDamage, int CardHealth, const std::string& DamageType, const std::string& CardTexture, int CardCost, std::string& CardType, bool AttackOnlyBuildings, float AttackSpeed, int Amount, bool FlyingTroop, bool HaveShield, int ShieldResistence, int CardChargeDamage, int GradualDamageMultiplyer, float Range) :
        Name(CardName), Damage(CardDamage), Health(CardHealth), Cost(CardCost) Texture(CardTexture), Amount(Amount) {
        if(!Texture.loadFromFile(CardTexture)) {
            std::cout << "Error Code 0001";
        }
    }
};

void card() {
    // Spells literally cant have hp cuz is invulnerable, AAAAA >:(
    // Every card starts on level 1
    // AttackSpeed is calculed by seconds
    // For example, the reaper can attack once by second, the sniper take 3 seconds
    Card Card1("Pirate", 97, 600, "Mellee", "./assets/card1.png", 4, "Trainer", false, 0.9f, 1, false, false, 0, 0, 0, 1);
    Card Card2("Indians", 60, 100, "Distance", "./assets/card2.png", 2, "Troop", false, 1.1f, 2, false, true, 100, 0, 0, 4.75f);
    Card Card3("Reaper", 80, 444, "Mellee", "./assets/card3.png", 3, "Troop", false, 1, 1, false, false, 0, 0, 0, 0.8f);
    Card Card4("Arrows", 111, 0, "Area", "./assets/card4.png", 3, "Spell", false, 1.25f, 5, false, false, 0, 0, 0, 5);
    Card Card5("Pelican", 100, 500, "Mellee", "./assets/card5.png", 5, "Troop", true, 2, 1, true, false, 0, 0, 0, 1);
    Card Card6("Cannon", 90, 460, "Distance", "./assets/card6.png", 3, "Building", false, 1, 1, false, false, 0, 0, 0, 5);
    Card Card7("R.O.B.O.T", 190, 870, "Mellee", "./assets/card7.png", 7, "Troop", true, 2, 1, false, false, 0, 0, 0, 1);
    Card Card8("Fireball", 128, 0, "Area And Fire", "./assets/card8.png", 4, "Spell", false, 2.5f, 1, false, false, 0, 0, 90, 3);
    Card Card9("Thief", 79, 422, "Charge", "./assets/card9.png", 3, "Troop", false, 1.2f, 1, false, false, 0, 173, 0, 1);
    Card Card10("Normal Vikings", 70, 230, "Mellee", "./assets/card10.png", 4, "Troop", false, 1.4f, 4, false, false, 0, 0, 0, 1);
    Card Card11("Elite Vikings", 100, 460, "Mellee", "./assets/card11.png", 6, "Troop", false, 1.7f, 2, false, false, 0, 0, 0, 1.2f);
    Card Card12("Rocket", 212, 0, "Area And Fire", "./assets/card12.png", 5, "Spell", false, 3, 1, false, false, 0, 0, 80, 2.5f);
    Card Card13("Goblins", 90, 90, "Mellee", "./assets/card13.png", 1, "Troop", false, 1, 4, false, false, 0, 0, 0, 1);
    Card Card14("Sniper", 99, 150, "Distance", "./assets/card14.png", 4, "Troop", false, 3, 1, false, false, 0, 0, 0, 5);
    Card Card15("Exterminator", 180, 810, "Mellee", "./assets/card15.png", 7, "Troop", false, 1.8f, 1, false, true, 222, 0, 0, 0.8f);
    Card Card16("Crusher", 200, 800, "Area", "./assets/card16.png", 6, "Building", false, 5, 1, false, false, 0, 0, 0, 1.8f);
    Card Card17("Mighty Indian", 40, 750, "Gradually", "./assets/card17.png", 6, "Troop", false, 1, 1, false, false, 0, 0, 1.75, 1.5f);
    Card Card18("Cachalot", 202, 0, "Smash", "./assets/card18.png", 6, "Spell", false, 1.5f, 1, false, false, 0, 0, 0, 4);
    Card Card19("Combat Helicopter", 90, 300, "Distance", "./assets/card19.png", 4, false, 1.25f, 1, true, false, 0, 0, 0, 4);
    Card Card20("Trojan Horse", 96, 300, "Kamikaze", "./assets/card20.png", 4, true, 0.3f, 1, false, false, 0, 222, 0, 1.25f);
    Card Card21("Bomb Man", 111, 333, "Kamikaze", "./assets/card21.png", 5, true, 1.8f, 1, false, false, 0, 0, 0, 1);
    Card Card22("Time Traveler", 84, 444, "Distance", "./assets/card22.png", 4, false, false, 1.3f, 1, false, false, 0, 0, 0, 4);
    Card Card23("Tsunami", 150, 0, "Area", "./assets/card23.png", 3, false, 1.5f, 1, false, false, 0, 0, 0, 2);
    Card Card24("Titan", 160, 980, "Mellee", "./assets/card24.png", 8, true, 2.2f, 1, false, false, 0, 0, 0, 1.1f);
    Card Card25("Mini Exterminator", 126, 390, "Mellee", "./assets/card25.png", 4, false, 1.3f, 1, false, false, 0, 0, 0, 1);
    Card Card26("Eletron-Tower", 111, 540, "Distance", "./assets/card26.png", 5, false, 1.2f, 1, false, false, 0, 0, 0, 5);
    Card Card27("Goblins Army", 90, 90, "Charge", "./assets/card27.png", 3, false, 1, 12, false, false, 0, 120, 0, 1);
    Card Card28("Astronaut", 99, 333, "Distance", 4, false, 1.2f, 1, false, false, 0, 0, 0, 5.5f);
}

// The materializer is like the elixir from clash royale
void materializer() {
    int Amount = 5;
    int Timer = 0;
    int TimerLimit = 280;
    
    while(Amount < 10) {
        Timer += 1;
        
        if(Timer >= TimerLimit) {
            Amount += 1;
            Timer = 0;
        }
    }
}

// Match controller
class Match {
public:
    void start() {
        int NormalTime = 180000;
        int Prorrogation = 150000;
        bool InitialDeck = true;
    
        deck();
        materializer();
    }
};

// The deck
std::vector<Card> CardDeck;

// Deck system
// Every deck must have exatily 8 cards in multiplayer
int deck() {
    if(Match.InitialDeck) {
        // Initial cards
        CardDeck.push_back(Card1);
        CardDeck.push_back(Card2);
        CardDeck.push_back(Card3);
        CardDeck.push_back(Card4);
        CardDeck.push_back(Card5);
        CardDeck.push_back(Card6);
    }
    
    return 0;
}

// Start the match
Match.start();