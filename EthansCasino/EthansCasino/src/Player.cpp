//
//  Player.cpp
//  EthansCasino
//
//  Created by Ethan Gibeau on 1/18/25.
//

#include "Player.h"
#include <iostream>
#include <random>

Player::Player(std::string pName) {
    name = pName;
    money = definePlayerMoney();
}

double Player::definePlayerMoney() {
    
    std::random_device rd;
    std::mt19937 gen(rd());

    std::uniform_real_distribution<> dis(100.0, 5000.0);
    
    return dis(gen);
}

void Player::printPlayerInformation() {
    
    std::cout << "Name: " << name << '\n';
    std::cout << "Total Money Available: " << money << '\n';
}

double Player::updatePlayerMoney(bool result) {

    if(result) {
        return money += betAmount;
    } else {
        return money -= betAmount;
    }

}
