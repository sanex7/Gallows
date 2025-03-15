#pragma once
#include <iostream>
#include <string>

class GameWord
{
private:
	// 6 = letter
	std::string hidden_word;
	// 6 = l
	std::string external_word;
public:
	GameWord(std::string& word)
		: hidden_word(word),
		external_word(word)
	{}

	bool GameWorld:InputLetter(char letter)
	{
		bool flag = false;
		for (size_t i = 0; i < hidden_word.length(); i++)
		{
			if (hidden_word[i] == letter)
			{
				external_word[i] = letter;
				flag = true;
			}
		}
		return false;
	}

	std::string& GetExternalWord()
	{
		return external_word;
	}

	bool IsGuessed() const
	{
		return hidden_word == external_word;
	}
};

