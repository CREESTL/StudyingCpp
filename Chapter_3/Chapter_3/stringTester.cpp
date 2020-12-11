#include <iostream>
#include <string>

int stringTest()
{
	// пишу по хардкору
	std::string word1 = "Game";
	// можно создать строку так, потому что она - объект от аргумента
	std::string word2("Over");
	// так указывается количество повторов символа
	std::string word3(3, '!');
	std::string phrase = word1 + " " + word2 + word3;
	std::cout << "The phrase is " << phrase << std::endl;
	std::cout << "The phrase has " << phrase.size() << " characters in it.\n\n" << std::endl;
	std::cout << "The character ar position 0 is " << phrase[0] << std::endl;
	std::cout << "Changing it..." << std::endl;
	phrase[0] = 'L';
	std::cout << "Now the character ar position 0 is " << phrase[0] << std::endl;
	for (unsigned int i = 0; i < phrase.size(); i++)
	{
		std::cout << "The character at position " << i << " is " << phrase[i] << std::endl;
	}
	// так ищется подстрока
	std::cout << "The sequence 'Over' begins at position " << phrase.find("Over") << std::endl;
	// npos - особая константа, которую возвращает find(), если подстрока не найдена
	if (phrase.find("eggplant") == std::string::npos)
	{
		std::cout << "'eggplant' is not in the phrase" << std::endl;
	}
	// npos - это максимальный размер строки в C++
	std::cout << std::string::npos << std::endl;
	// удаление 5 букв, начиная с 4ой!
	phrase.erase(4, 5);
	std::cout << "The phrase is now " << phrase << std::endl;
	// удаление всех букв, начиная с 4ой!
	phrase.erase(4, 5);
	std::cout << "The phrase is now " << phrase << std::endl;
	// удаление всей строки
	phrase.erase();
	std::cout << "The phrase is now " << phrase << std::endl;
	// проверка пустоты строки
	if (phrase.empty())
	{
		std::cout << "The phrase is no more!" << std::endl;
	}
	return 0;
}