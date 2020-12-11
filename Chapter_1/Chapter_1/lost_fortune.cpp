/*
Финальная задача первой главы
*/

#include <iostream>
#include <string>
using namespace std;

void start_game()
{
	const int GOLD_PIECES = 900;
	int adventurers, killed, survived;
	string leader;

	// получение информации
	cout << "Welcone to Lost Fortune!" << endl;
	cout << "Customize your adventure: " << endl;
	cout << "Enter a number: ";
	cin >> adventurers;
	cout << "Enter a smaller number: ";
	cin >> killed;
	survived = adventurers - killed;
	cout << "Enter your last name: ";
	cin >> leader;

	// излагаю сюжет
	cout << "A brave group of " << adventurers << "set out on a quest ";
	cout << " - in search of the lost treasure of the Ancient Dwarves.";
	cout << " The group was led by that legendary rogue " << leader << "." << endl;
	cout << "Along the way, a band of marauding ogres ambushed the party.";
	cout << " All fought bravely under the command of " << leader;
	cout << ", and ogres were defeated, but at a cost.";
	cout << " Of the adventurers, " << killed << " were vanquised";
	cout << " leaving just " << survived << " in the group." << endl;
	cout << "The party was about to give up all hope.";
	cout << " But while laying the deceased to rest, they stumbled upon";
	cout << " the buried fortune.";
	cout << " So the adventurers split " << GOLD_PIECES << " gold pieces.";
	cout << " " << leader << " held on to the extra " << (GOLD_PIECES % survived);
	cout << " pieces to keep things fair of course.\n\n";


}