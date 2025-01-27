#ifndef CARD_H
#define CARD_H

#include <string>
#include <vector>
#include "MainMenu.h"

enum class Suit {Hearts, Spades, Diamonds, Clubs};
enum class Value {Two = 2, Three, Four, Five, Six, Seven, Eight, Nine, Ten, Jack, Queen, King, Ace};

class Card {
    
public:
    Card(Suit s, Value v);
    
    Suit getSuit() const;
    Value getValue() const;
    
    void Initialize(const MainMenu& menu);
    void printCard();
    
private:
    
    Suit suit;
    Value value;
    
    std::string suitToString(Suit s) const;
    std::string valueToString(Value v) const;
};

#endif
