#pragma once
#include "WordsManager.h"
#include "GameWord.h"

using std::shared_ptr;

class GameWordsBuilder
{
private:
	vector<string> buffer;
	shared_ptr<WordsManager> manager;
public:
	GameWordsBuilder(const shared_ptr<WordsManager>& manager)
		: manager(manager)
	{
		buffer = manager->GetWords();
	}

	GameWord GameWordsBuilder::GetRandomWord()
{
    if (buffer.empty()) {
        // Якщо немає слів, повертаємо порожнє слово
        return GameWord("");
    }

    auto&& first = buffer.begin();
    GameWord result(*first);
    buffer.erase(first);
    return result;
}

};

