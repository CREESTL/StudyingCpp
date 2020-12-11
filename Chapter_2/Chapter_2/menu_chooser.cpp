#include <iostream>
using namespace std;

void menu()
{
	cout << "Difficulty levels\n\n";
	cout << "1 - Easy" << endl;
	cout << "2 - Normal" << endl;
	cout << "3 - Hard" << endl;
	int choice;
	cout << "Your choice: " << endl;
	cin >> choice;
	switch (choice)
	{
	case 1:
		cout << "You picked Easy level";
		break;
	case 2:
		cout << "You picked Medium level";
		break;
	case 3:
		cout << "You picked Hard level";
		break;
	default:
		cout << "You made an illegal choice!" << endl;
	}
}