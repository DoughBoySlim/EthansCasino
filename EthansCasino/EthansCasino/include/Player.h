//
//  Player.h
//  EthansCasino
//
//  Created by Ethan Gibeau on 1/18/25.
//

#ifndef PLAYER_H
#define PLAYER_H
#include <string>

class Player {
  
private:
    std::string name;
    double money;
public:
    
    Player(std::string pName);
    
    ~Player();
    
    double definePlayerMoney();
    void printPlayerInformation();
    
};

#endif
