#include <iostream>
using namespace std;

void stats()
{
	long int score; // long увеличивает количество разрядов 
	double distance; // как float только двойной точности
	char play_again;
	bool shields_up;
	short lives, aliens_killed;
	double engine_temp;
	int fuel;

	score = 0;
	distance = 1200.76;
	play_again = 'y';
	shields_up = true;
	lives = 3;
	aliens_killed = 10;
	engine_temp = 6572.89;

	cout << "\nscore: " << score << endl;
	cout << "distance: " << distance << endl;
	cout << "play_again: " << play_again << endl;
	cout << "lives: " << lives << aliens_killed << endl;
	cout << "engine_temp: " << engine_temp << endl;

	cout << "How much fuel? ";
	cin >> fuel;
	cout << "fuel: " << fuel << endl;

	/*
	signed = положителдьные И отрицательные значения
	unsigned = ТОЛЬКО неотрицательные значение

	typedef служит для создания нового имени для уже существующего типа
	теперь unsigned short int называется unshort
	*/
	typedef unsigned short int unshort;
	unshort bonus = 10;
	cout << "\nbonus: " << bonus << endl;

	cout << "==================================" << endl << endl;
}