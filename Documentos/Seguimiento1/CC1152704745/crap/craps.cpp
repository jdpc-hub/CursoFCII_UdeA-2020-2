#include "craps.h"

craps_game::craps_game(){
	int dado_1 = 0;
	int dado_2 = 0;
	int player_sum = 0;
	bool next_move = true;
	srand(time(NULL));
	std::cout << "**********CRAP GAME**********" << std::endl;
	std::cout << "       _____    _____        " << std::endl;
	std::cout << "      /___ /|  /___ /|       " << std::endl;
	std::cout << "     | .. | | |... | |       " << std::endl;
	std::cout << "     |____|/  |____|/        " << std::endl;
	std::cout << "*****************************" << std::endl;
}

int craps_game::throw_dice(){
	return 1 + rand() % 6; 
}

void craps_game::play_move(int lst_punto = 0){
	dado_1 = throw_dice();
	dado_2 = throw_dice();

	std::cout << "Se tiraron los dados: " << dado_1 << " " << dado_2 << std::endl;
	
	if (lst_punto == 0){
		player_sum = dado_1 + dado_2;
	
		if ((player_sum == 7) || (player_sum == 11)){
			std::cout << "***** HA GANADO *****" << std::endl;
			play_again();
		}
		else if ((player_sum == 2) || (player_sum == 3) || (player_sum == 12)){
			std::cout << "***** CRAP: HA PERDIDO *****" << std::endl;
			play_again();
		}
		else {
			std::cout << "Su punto es: " << player_sum << std::endl;
			next_move = true;
		}
	} 
	else{
		int d_sum = dado_1 + dado_2;
		std::cout << "La suma de esta movida fue: " << d_sum  << std::endl;

		if (d_sum == 7){
			std::cout << "***** CRAP: HA PERDIDO *****" << std::endl;
			play_again();
		}
		else if (d_sum == player_sum){
			std::cout << "***** HA GANADO *****" << std::endl;
			play_again();
		}
		else{
			std::cout << "Su punto es: " << player_sum << std::endl;
			next_move = true;
		}
	}
}

void craps_game::play(){
	char inpt_char;
	player_sum = 0;

	while (next_move){
		std::cout << "Para tirar los dados, presione S, para salir presione N: ";
		std::cin >> inpt_char;

		switch (inpt_char){
			case 'S':
				play_move(player_sum);
				break;

			case 'N':
				next_move = false;
				break;

			default:
				std::cout << ">> Opción inválida" << std::endl;
		}
	}
}

void craps_game::play_again(){
	char pag;
	
	std::cout << "¿Desea jugar de nuevo? [S/N]: ";
	std::cin >> pag;

	switch (pag){
		case 'S':
			player_sum = 0;
			next_move = true;
			break;
	
		case 'N':
			next_move = false;
			break;

		default:
			std::cout << "> Opvión inválida, saliendo de todas maneras" << std::endl;
			next_move = false;
	}
}
