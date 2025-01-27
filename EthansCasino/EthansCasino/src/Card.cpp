#include "Card.h"

enum class Suit  {Hearts, Spades, Diamonds, Clubs};
enum class Value {Two = 2, Three, Four, Five, Six, Seven, Eight, Nine, Ten, Jack, Queen, King, Ace};

class Card {
    
    Suit suit;
    Value value;
    
    Card(Suit s, Value v) : suit(s), value(v) {}
    
    
    
    
};
