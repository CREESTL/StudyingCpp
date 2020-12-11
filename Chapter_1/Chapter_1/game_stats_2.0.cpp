#include <iostream>
using namespace std;

void stats_2()
{
	unsigned int score = 5000;
	cout << "score: " << score << endl;
	score += 100;
	cout << "score: " << score << endl;

	/*
	Операторы инкремента
	*/
	int lives = 3;
	++lives;
	cout << "lives: " << lives << endl;
	lives = 3;
	lives++;
	cout << "lives: " << lives << endl;
	lives = 3;
	/*
	Префиксный инкремент СНАЧАЛА увеличивает переменную, а потом вычисляется ВСЕ выражение
	*/
	int bonus = ++lives * 10;
	cout << "lives, bonus: " << lives << ", " << bonus << endl;
	lives = 3;
	/*
	Постфиксный инкремент СНАЧАЛА вычисляет ВСЕ выражение, а потом увеличивает переменную
	*/
	bonus = lives++ * 10;
	cout << "lives, bonus: " << lives << ", " << bonus << endl;
	/*
	Если присвоить переменной предельное значение int, то она все еще выведется, а если потом ее увеличить на 1, превысив диапозон, то ее значение
	автоматически станет минимальным возможным, то есть 0
	*/
	score = 4294967295;
	cout << "\nscore: " << score << endl;
	score++;
	cout << "\nscore: " << score << endl;

	cout << "==================================" << endl << endl;
}
