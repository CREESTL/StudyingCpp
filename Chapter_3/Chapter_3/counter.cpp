// демонстрация работы с циклами for

#include <iostream>
using namespace std;

int counting()
{
	cout << "Forward" << endl;
	for (int i = 0; i < 50; i++)
	{
		cout << i << ' ';
	}
	cout << endl << "Backward" << endl;
	for (int i = 50; i >= 0; i--)
	{
		cout << i << ' ';
	}
	cout << endl << "By fives" << endl;
	for (int i = 0; i < 50; i += 5)
	{
		cout << i << ' ';
	}
	cout << endl << "With null statements" << endl;
	int count = 0;
	for (; count < 50; )
	{
		cout << count << ' ';
		count++;
	}
	cout << endl << "Diagonal" << endl;
	int ROWS = 10;
	int COLS = 10;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (i < j)
			{
				cout << "*";
			}
			else if (i > j)
			{
				cout << "+";
			}
			else
			{
				cout << ".";
			}
		}
		cout << endl;
	}
	return 0;
}