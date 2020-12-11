#include <iostream>
#include <string>

int loadInventory()
{
	const int MAX_ITEMS = 3;
	std::string inventory[MAX_ITEMS];
	int numItems = 0;
	// так можно делать индексацию при инициализации
	inventory[numItems++] = "sword";
	inventory[numItems++] = "armor";
	inventory[numItems++] = "shield";
	// если создавать массив, заполненный строками, то надо использовать {}!
	// и в таком случае не обязательно будет указывать размер массива
	std::cout << "Your items are: " << std::endl;
	for (int i = 0; i < numItems; i++)
	{
		std::cout << inventory[i] << std::endl;
	}
	std::cout << "You trade you sword for a battle axe!" << std::endl;
	inventory[0] = "battle axe";
	std::cout << "The item named " << inventory[0] << " has " << inventory[0].size() << " letters in it" << std::endl;
	std::cout << "You find a healing potion!" << std::endl;
	if (numItems < MAX_ITEMS)
	{
		inventory[numItems++] = "healing potion";
	}
	else
	{
		std::cout << "You have too many items!" << std::endl;
	}
	std::cout << "Your items are: " << std::endl;
	for (int i = 0; i < numItems; i++)
	{
		std::cout << inventory[i] << std::endl;
	}
	return 0;
}