#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

/*
ПОНЯТИЕ ИГРОВОГО ЦИКЛА

1) Настройка параметров игры
2) Получение пользовательского ввода
3) Обновления состояние игры
4) Обновление изображения 
5) Игра окончена?
	ДА -> Конец
	НЕТ -> Вернуться к шагу 2)

*/


/*
Компьютер генерирует случайное число. Пользователь пробует его угадать. Компьюетр дает простые подсказки: "больше" или "меньше"
*/

void guess_number()
{
	srand(static_cast<unsigned int>(time(0)));
	int number = rand() % 100 + 1; // число от 1 до 100
	int guess = NULL;
	while (guess != number)
	{
		cout << "\nEnter a guess: ";
		cin >> guess;
		if (guess < number)
		{
			cout << "\nToo low!";
		}
		else if (guess > number)
		{
			cout << "\nToo high!";
		}
		else
		{
			cout << "That's right! Good job!" << endl;
		}
	}
}