#include <iostream>
using namespace std;

void count_money()
{	
	cout << endl << endl;
	cout << "7 + 3 = " << 7 + 3 << endl;
	cout << "7 - 3 = " << 7 - 3 << endl;
	cout << "7 * 3 = " << 7 * 3 << endl;
	cout << "7 / 3 = " << 7 / 3 << endl;
	/*
	Выводит 2.3333 потому что C++ делает очень точные вычисления, если есть в исходных
	числах дробная часть
	*/
	cout << "7.0 / 3.0 = " << 7.0 / 3.0 << endl;
	cout << "7 % 3 = " << 7 % 3 << endl; // остаток от деления
	cout << "7 + 3 * 5 = " << 7 + 3 * 5 << endl;
	cout << "(7 + 3) * 5 = " << (7 + 3) * 5 << endl;

}