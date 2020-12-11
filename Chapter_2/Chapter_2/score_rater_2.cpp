#include <iostream>
using namespace std;

void score_2()
{
	int score;
	cout << endl << endl;
	cout << "Enter your score: ";
	cin >> score;
	if (score >= 1000)
	{
		cout << "You scored 1000 or more. Impressive!" << endl;
	}
	else
	{
		cout << "Unfortunately, you scored less than 1000." << endl;
	}
}