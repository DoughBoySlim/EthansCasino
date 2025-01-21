#include "Card.h"
#include <algorithm>
#include <random>

std::vector<Card> createDeck() {
    std::vector<Card> deck;
    std::vector<std::string> suits = {"Hearts", "Spades", "Diamonds", "Clubs"};
    std::vector<std::pair<std::string, int>> ranks = { {"2", 2}, {"3", 3}, {"4", 4}, {"5", 5}, {"6", 6}, {"7", 7}, {"8", 8}, {"9", 9}, {"10", 10}, {"Jack", 10}, {"Queen", 10}, {"King", 10}, {"Ace", 11} };

    for(const auto& suit : suits) {
        for(const auto& rank : ranks) {
            deck.push_back({suit, rank.first, rank.second});
        }
    }

    return deck;
}

