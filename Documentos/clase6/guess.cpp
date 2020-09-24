#include <stdlib.h>
#include <time.h>
#include<iostream>

using namespace std;
 
int main()
{
  char answer;
  int number;

  // ojo tenga en cuenta que si no inicializ esto, entoces siempre se generara el mismo numero aleatorio
  srand(time(NULL));// Necesario inicializa los numeros aleatorios. De lo contrario siempre dan lo mismo
  
  //int ale = 1 + rand() % 1000;
  //cout << "para saver el numero ale: " << ale << endl;

  
  cout << "usted desea jugar a adivinar un numero entre 0 y 1000? (y o n)" << endl;
  cin >> answer;

  while (answer == 'y'){

    int ale = 1 + rand() % 1000;

    cout << "por favor entre el numero que usted considera" << endl;
    cin >> number;

    while (number != ale){
      
      if (number < ale){
	cout << "su numero es demasiado bajo" << endl;
      }
      
      if(number > ale){
	cout << " el numero es demasiado alto" << endl;
      }
      
      cout << "por favor intente otro numero" << endl;
      cin >> number;	
      
    }
    
    if (number == ale){
      cout << "genial su numero es correcto" << endl;
    }
      
    cout << "usted desea jugar de nuevo a adivinar un numero entre 0 y 1000? (y o n)" << endl;
    cin >> answer;

  }

    

  return 0;

}

