//
//  main.cpp
//  EthansCasino
//
//  Created by Ethan Gibeau on 1/18/25.
//

#include <iostream>
#include "../include/MainMenu.h"

int main(int argc, const char * argv[]) {
    
    MainMenu menu;

    menu.displayMenu();
    menu.gameChoice();
    menu.getGameChoice();

    
    return 0;
}
