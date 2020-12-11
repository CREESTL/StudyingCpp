/*
Главный файл для Главы 1
*/

#include <iostream> // треугольные скобки значат "искать файл, среди тех, которые идут с компилятором в комплекте"
/*
Для того, чтобы вызвать функию из другого файла, нужно создать файл .h (его лучше назвать так же как и файл, функция которого нужна), затем
его подрубаем через #include и просто вызываем функцию в main()
*/
#include "game_over.h"
#include "loot_calculator.h"
#include "game_stats.h"
#include "game_stats_2.0.h"
#include "game_stats_3.0.h"
#include "lost_fortune.h"
using namespace std;

int main()
{
	print();
	count_money();
	stats();
	stats_2();
	stats_3();
	start_game();
}

