#include <iostream>
using namespace std;

void count()
{
	int count = 0;
	cout << endl << endl;
	while (true)
	{
		count += 1;
		// цикл прекращаем на числе 10
		if (count > 10)
		{
			break;
		}
		// пропускаем число 5
		if (count == 5)
		{
			continue;
		}
		cout << count << endl;
	}
}