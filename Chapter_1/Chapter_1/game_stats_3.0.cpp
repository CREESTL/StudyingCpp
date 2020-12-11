#include <iostream>
using namespace std;

void stats_3()
{	
	/*
	Создание констант
	*/
	const int ALIEN_POINTS = 150;
	int aliens_killed = 10;
	int score = aliens_killed * ALIEN_POINTS;
	cout << "score: " << score << endl;

	/*
	Перечисляемые множества
	= НЕ СТАВИТСЯ!
	По умолчанию каждое значение соответствует числу от 0 до N
	*/
	enum difficulty{ NOVICE, EASY, NORMAL, HARD, PEZDETS };
	/*
	Здесь CRUISER = 26, так как оно равняется предыдущему значению + 1
	*/
	enum ship_cost{ FIGHTER = 25, CRUISER, BOMBER = 50};
	difficulty my_difficulty = EASY;
	ship_cost my_cost = CRUISER;
	cout << "Upgrading my ship to a BOMBER will cost: " << (BOMBER - my_cost) << " resource points!" << endl;
	cout << "==================================" << endl << endl;
}