#ifndef CARD_H
#define CARD_H

#include <string>
#include <vector>

struct Card {

    std::string suit;
    std::string rank;
    int value;

    std::vector<Card> createDeck();
};

#endif CARD_H