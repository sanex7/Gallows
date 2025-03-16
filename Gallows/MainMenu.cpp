#include "MainMenu.h"
#include <iostream>

MainMenu::MainMenu() : isGameRunning(true), score(0) {
    std::cout << "Enter your name: ";
    std::cin >> playerName;
}

void MainMenu::DisplayMenu() {
    while (isGameRunning) {
        std::cout << "\nMain Menu:\n";
        std::cout << "1. New Game\n";
        std::cout << "2. Records\n";
        std::cout << "3. Exit\n";
        std::cout << "4. Settings\n";
        std::cout << "Enter your choice: ";
        int choice;
        std::cin >> choice;

        switch (choice) {
            case 1:
                StartNewGame();
                break;
            case 2:
                ShowRecords();
                break;
            case 3:
                ExitGame();
                break;
            case 4:
                SettingsMenu();
                break;
            default:
                std::cout << "Invalid choice, please try again.\n";
        }
    }
}

void MainMenu::StartNewGame() {
    std::cout << "Starting a new game...\n";
}

void MainMenu::ShowRecords() {
    std::cout << "Displaying records...\n";
}

void MainMenu::ExitGame() {
    std::cout << "Exiting the game.\n";
    isGameRunning = false;
}

void MainMenu::ChangePlayerName() {
    std::cout << "Enter your new name: ";
    std::cin >> playerName;
    std::cout << "Name updated to: " << playerName << std::endl;
}

void MainMenu::AddNewWord() {
    std::string newWord;
    std::cout << "Enter the new word to add: ";
    std::cin >> newWord;
    std::cout << "Word added: " << newWord << std::endl;
}

void MainMenu::SettingsMenu() {
    std::cout << "Settings:\n";
    std::cout << "1. Change player name\n";
    std::cout << "2. Add new word\n";
    std::cout << "Enter your choice: ";
    int choice;
    std::cin >> choice;

    switch (choice) {
        case 1:
            ChangePlayerName();
            break;
        case 2:
            AddNewWord();
            break;
        default:
            std::cout << "Invalid choice, please try again.\n";
    }
}

std::string MainMenu::GetPlayerName() {
    return playerName;
}

int MainMenu::GetScore() {
    return score;
}

void MainMenu::IncreaseScore() {
    score++;
}
