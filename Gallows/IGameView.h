#pragma once
#include <string>

class IGameView {
public:
    virtual ~IGameView() = default;
    virtual void DisplayWord(const std::string& word) = 0;
    virtual void DisplayMistakes(int mistakes) = 0;
    virtual void DisplayMessage(const std::string& message) = 0;
    virtual char GetInputLetter() = 0;
    virtual void WordGuessed() = 0;
    virtual void GameOver() = 0;
    virtual bool IsGameContinue() = 0;
};
