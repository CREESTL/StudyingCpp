#include <iostream>
using namespace std;

void score()
{
	if (true)
	{
		cout << "This is always displayed" << endl;
	}
	if (false)
	{
		cout << "This is never displayed" << endl;
	}

	int score = 1000;
	if (score)
	{
		cout << "At least you didn't score zero..." << endl;
	}
	if (score >= 500)
	{
		cout << "You scored 500 or more - impressive!" << endl;
		if (score >= 1000)
		{
			cout << "You scored 1000 or more - awesome!!!" << endl;
		}
	}

}