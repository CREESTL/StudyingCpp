#include <iostream>
#include "score_rater.h"
#include "score_rater_2.h"
#include "menu_chooser.h"
#include "play_again.h"
#include "tricky_counter.h"
#include "designers_network.h"
#include "die_roller.h"
#include "guess_my_number.h"
using namespace std;

/*
Главная функция главы 2
*/

int main()
{
	score();
	score_2();
	menu();
	play_again();
	count();
	login();
	roll_die();
	guess_number();
}

