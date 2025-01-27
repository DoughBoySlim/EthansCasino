//
//  MainMenu.h
//  EthansCasino
//
//  Created by Ethan Gibeau on 1/18/25.
//

#ifndef MAINMENU_H
#define MAINMENU_H

#include <string>

class MainMenu {
    
public:
    
    MainMenu();
    ~MainMenu();
    
    void displayMenu();
    int gameChoice();
    
private:
    int choice;
    std::string playerName;
};

#endif
