#include "Card.h"
#include "MainMenu.h"
#include <iostream>

Card::Card(Suit s, Value v) : suit(s), value(v) {}

Suit Card::getSuit() const {
    return suit;
}

Value Card::getValue() const {
    return value;
}
    
void Card::Initialize(const MainMenu& menu) {
            
    int choice = menu.getGameChoice();
    switch (choice) {
        case 1:
            // here is going to be where BlackJack and Baccarrat get their card preferences.
            break;
        case 2:
            // Here will be where we implement a deck from poker
            break;
        default:
            std::cout << "THIS SHOULD NOT BE POSSIBLE" << '\n';
            break;
    }
}
void Card::printCard() {
    
}
    
