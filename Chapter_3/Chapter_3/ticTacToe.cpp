// функция создает доску для игры в крестики-нолики
#include <iostream>

int ticTacToe()
{
	const int ROWS = 3;
	const int COLS = ROWS;
	char board[ROWS][COLS] = {
		{'O', 'X', 'O'},
		{'*', 'X', 'X'},
		{'X', 'O', 'O'},
	};
	std::cout << "Here is your board!" << std::endl;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			std::cout << board[i][j];
		}
		std::cout << std::endl;
	}
	std::cout << "X moves to an empty location" << std::endl;
	board[0][2] = 'X';
	std::cout << "Here is your board!" << std::endl;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			std::cout << board[i][j];
		}
		std::cout << std::endl;
	}
	return 0;
}