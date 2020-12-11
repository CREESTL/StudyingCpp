#include <iostream>
#include <string>

int stringTest()
{
	// ���� �� ��������
	std::string word1 = "Game";
	// ����� ������� ������ ���, ������ ��� ��� - ������ �� ���������
	std::string word2("Over");
	// ��� ����������� ���������� �������� �������
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
	// ��� ������ ���������
	std::cout << "The sequence 'Over' begins at position " << phrase.find("Over") << std::endl;
	// npos - ������ ���������, ������� ���������� find(), ���� ��������� �� �������
	if (phrase.find("eggplant") == std::string::npos)
	{
		std::cout << "'eggplant' is not in the phrase" << std::endl;
	}
	// npos - ��� ������������ ������ ������ � C++
	std::cout << std::string::npos << std::endl;
	// �������� 5 ����, ������� � 4��!
	phrase.erase(4, 5);
	std::cout << "The phrase is now " << phrase << std::endl;
	// �������� ���� ����, ������� � 4��!
	phrase.erase(4, 5);
	std::cout << "The phrase is now " << phrase << std::endl;
	// �������� ���� ������
	phrase.erase();
	std::cout << "The phrase is now " << phrase << std::endl;
	// �������� ������� ������
	if (phrase.empty())
	{
		std::cout << "The phrase is no more!" << std::endl;
	}
	return 0;
}