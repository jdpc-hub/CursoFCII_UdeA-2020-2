#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int resultado[11] = {};
	int dado1;
	int dado2;
	
	srand(time(NULL));

	for(int i = 0; i < 36000; i++)
	{
		dado1 = 1 + (rand() % 6);
		dado2 = 1 + (rand() % 6);
		resultado[dado1 + dado2 - 2] += 1;
	}
	cout << setw(9) << "resultado" << "|" << setw(10) << "frecuencia" << endl
			 << "--------------------" << endl
			 << setw(9) << 2 << "|" << setw(10) << resultado[0] << endl
			 << setw(9) << 3 << "|" << setw(10) << resultado[1] << endl
			 << setw(9) << 4 << "|" << setw(10) << resultado[2] << endl
			 << setw(9) << 5 << "|" << setw(10) << resultado[3] << endl
			 << setw(9) << 6 << "|" << setw(10) << resultado[4] << endl
			 << setw(9) << 7 << "|" << setw(10) << resultado[5] << endl
			 << setw(9) << 8 << "|" << setw(10) << resultado[6] << endl
			 << setw(9) << 9 << "|" << setw(10) << resultado[7] << endl
			 << setw(9) << 10 << "|" << setw(10) << resultado[8] << endl
			 << setw(9) << 11 << "|" << setw(10) << resultado[9] << endl
			 << setw(9) << 12 << "|" << setw(10) << resultado[10] << endl
			 << "--------------------" << endl;
}

/*Corriendo el programa varias veces se puede observar que los resultados son aproximadamente los que dicta la teoria de probabilidad
	por lo tanto son resultados razonables*/
