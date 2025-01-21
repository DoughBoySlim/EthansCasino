//
//  MainMenu.cpp
//  EthansCasino
//
//  Created by Ethan Gibeau on 1/18/25.
//

#include "MainMenu.h"
#include "Player.h"
#include <iostream>

void MainMenu::displayMenu() {
    
    std::cout << "===========================" << '\n';
    std::cout << " Welcome To Ethan's Casino " << '\n';
    std::cout << "===========================" << '\n';
    std::cout << std::endl;

    std::cout << "Please Enter Your Name: " << '\n';
    std::getline(std::cin, playerName);

    Player player(playerName);
    std::cout << "Welcome, " << playerName << "!" << '\n';

    std::cout << " What Game Would You Like To Play? " << '\n';
    std::cout << "1. BlackJack " << '\n';
    std::cout << "2. Baccarat " << '\n';
    std::cout << "3. Poker " << '\n';
    std::cout << "4. Exit " << '\n';
    std::cout << "Enter Your Choice " << '\n';

}

int MainMenu::gameChoice() {
    
    int choice = 0;
    std::cin >> choice;
    while (std::cin.fail() || choice < 1 || choice > 4) {
        std::cin.clear();  // Clears the error flag
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  // Discards the invalid input
        std::cout << "Please enter a valid number (1-4): " << '\n';
        std::cout << "Here are Your Choices Again: " << '\n';
        std::cout << "1. BlackJack " << '\n';
        std::cout << "2. Baccarat " << '\n';
        std::cout << "3. Poker " << '\n';
        std::cout << "4. Exit " << '\n';
        std::cin >> choice;
    }
    switch (choice) {
        case 1:
            // Code to Call BlackJack
            break;
        case 2:
            // Code to Call Baccarat
            break;
        case 3:
            // Code to call Poker
            break;
        case 4:
            std::cout << "Thank You For Playing!" << '\n';
            return 0;
        default:
            std::cout << "Please Enter A Valid Number (1 - 4)! " << '\n';
            break;
    }
    
    return 0;
}
