#pragma once
#include <string>

class MainMenu {
private:
    std::string playerName;
    bool isGameRunning;
    int score;

    void StartNewGame();
    void ShowRecords();
    void ExitGame();
    void ChangePlayerName();
    void AddNewWord();
    void SettingsMenu();

public:
    MainMenu();
    void DisplayMenu();
    std::string GetPlayerName();
    int GetScore();
    void IncreaseScore();
};
