//Lo mismo de la TareaArreglos.cpp pero con vectores 

/*a) Escriba un programa para simular el tiro de dos dados. El programa debe utilizar rand para tirar el primer dado, y de
nuevo para tirar el segundo dado. Después debe calcularse la suma de los dos valores. [Nota: cada dado puede mostrar un valor
entero del 1 al 6, por lo que la suma de los valores variará del 2 al 12, siendo 7 la suma más frecuente, mientras que 2 y 12 serán
las sumas menos frecuentes]. existen 36 posibles combinaciones de los dos dados. Su programa debe
tirar los dados 36,000 veces. Utilice un arreglo unidimensional para registrar el número de veces que aparezca cada una de las
posibles sumas. Imprima los resultados en formato tabular. Determine además si los totales son razonables (es decir, hay seis
formas de tirar un 7, por lo que aproximadamente una sexta parte de los tiros deben ser 7).

b) Modifique el programa, de manera que utilice un vector para almacenar
el número de veces que aparece cada posible suma de los dos lados.*/

#include <iostream> //Para print y esas cosas xd
#include <iomanip>  // para el espacio y esas cosas 
#include <cstdlib> // rand
#include <ctime>  // tiempoooo

#include <vector> //Los vectores los vectoressss


using namespace std;

int main()
{
  int dado1 = 0;
  int dado2 = 0;
  int suma = 0;
  const int ta = 13;
  int tiros = 36000;
  vector<int> frecuencia(13,0);

  srand(time(0));  //Solo llamarla una vez

  for ( int tiro = 1; tiro <= tiros; tiro++ ){ //Contador es TIRO, limite es TIROS
	dado1 = 1 + rand() % 6; //# aleatorio entre 1 y 6
	dado2 = 1 + rand() % 6; //same
	suma = dado1 + dado2; //suma de los dos dados, esto debería dar entre 2 y 12
	frecuencia[ suma ]++; //Arreglo de 12 casillas donde frecuencia[0] y [1] siempre serán cero
						}


	cout << "\nSuma" << setw( 15 ) << "Frecuencia" << endl;

	cout<< setw( 13 ) << "-----------------------" << endl;

  for ( int i = 2; i < ta ; i++ ){ //cont i va de 2 hasta 13
	cout<< i << ':' << setw( 13 ) << frecuencia[i] << setw( 13 ) << endl;
	cout<< setw( 13 ) << "-----------------------" << endl;
  				  }

	cout << "\n #############  Histograma escalado  ############ \n" << endl;

for ( int cuenta = 2; cuenta < ta; cuenta++ ){

	cout << cuenta << ": ";

		 for ( int estrellas = 0; estrellas < frecuencia[ cuenta ]/100; estrellas++ ){
	cout << '*';
											}
	cout << endl;
						}

return 0;
}


