#include <iostream>
using namespace std;

void play_again()
{
	char again = 'y';
	while (again == 'y')
	{
		cout << "\n\n** Played an exciting game **" << endl;
		cout << "Do you want to play again? (y/n)" << endl;
		cin >> again;
	}
	cout << "OK, Bye!";
}