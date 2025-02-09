#include <iostream>
#include "ConsoleGameView.h"
#include "WordsManager.h"
#include "Game.h"

int main()
{
	//IGameView* view = new ConsoleGameView();

	//std::cout << (view->IsGameExit() ? "true" : "false") << std::endl;
	//std::cout << view->GetInputLetter() << std::endl;

	//delete view;
	WordsManager manager;
	ConsoleGameView consoleView;
	Game game(std::make_shared< WordsManager>(manager), std::make_unique<ConsoleGameView>(consoleView);
	game.Start();

	return 0;
}