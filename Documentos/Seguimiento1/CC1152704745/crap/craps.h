#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using std::rand;

class craps_game{
	public:
	craps_game();
	
	void play(); 

	private:
	// vars
	int dado_1;
	int dado_2;
	int player_sum;
	bool next_move;
	
	// funcs
	int throw_dice();
	void play_move(int);
	void play_again();
};
