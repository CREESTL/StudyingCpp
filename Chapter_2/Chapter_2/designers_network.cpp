#include <iostream>
#include <string>
using namespace std;

void login()
{
	string username, password;
	bool success;
	cout << "Game Designer's Network" << endl;
	do
	{
		cout << "\nUsername: ";
		cin >> username;
		cout << "Password: ";
		cin >> password;
		if (username == "S.Meier" && password == "civilization")
		{
			cout << "Fucking Chinese are trying to conquer us!";
			success = true;
		}
		else if (username == "B.Akunin" && password == "arigato")
		{
			cout << "Mr. Fandorin is waiting for you, sir!";
			success = true;
		}
		else if (username == "guest" || password == "guest")
		{
			cout << "Welcome, guest!";
			success = true;
		}
		else
		{
			cout << "Your login failed!";
			success = false;
		}
	} while (!success);
}