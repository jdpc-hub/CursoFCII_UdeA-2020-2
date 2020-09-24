#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using std::rand;
using std::setw;

int throw_dice(void);
void update_frequency(int);
void sum_frequency(int);
void print_frequencies(int);

static const int n_pos = 11; // de 2 a 12

static int freqs[n_pos];
static int is_seven=0;

int main(){	
	srand(time(NULL));

	int n_throws = 36000;
	
	sum_frequency(n_throws);

	print_frequencies(n_throws);

	return 0;
}


/*------ functions ------------------*/


int throw_dice(void){
	return 1 + rand() % 6;
}

void update_frequency(int sum){
	freqs[sum-2] += 1;
}

void sum_frequency(int n){
	int d1,d2,sum;

	for (int i; i < n; i++){
		d1 = throw_dice();
		d2 = throw_dice();

		sum = d1+d2;

		if (sum == 7){
			is_seven += 1;
		}
	
		update_frequency(d1+d2);	
	}

	std::cout << "Frecencia de la suma de 7: " << (float)is_seven / (float)n;
	std::cout << " | Frecuencia esperada: " << 1./6. << std::endl;
}

void print_frequencies(int n_throws){
	
	std::cout <<"|" << setw(4) << "suma" << "|" << setw(10) << "frecuencia" << "|" << std::endl;
	for (int i=0; i < n_pos; i++){
		std::cout <<"|" << setw(4) << i+2 << "|" << setw(10) << freqs[i]  << "|";
		
		int rast = freqs[i]*100/n_throws;
		
		for (int n_r = 0; n_r < rast; n_r++){
			std::cout << "*";
		}
		std::cout << std::endl;
	}

}

