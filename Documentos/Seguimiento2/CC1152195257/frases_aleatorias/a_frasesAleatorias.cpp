#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cctype>

using namespace std;

int main()
{
  srand(time(NULL));

  //Definición de las palabras a utilizar
  char
    el[] = "el", un[] = "un", algun[] = "algún", ningun[] = "ningún",
    ninio[] = "niño", senior[] = "señor", perro[] = "perro", ciudad[] = "ciudad",
    Auto[] = "auto", a[] = "a", desde[] = "desde", encima_de[] = "encima de",
    debajo_de[] = "debajo de", sobre[] = "sobre", manejo[] = "manejó",
    salto[] = "saltó", corrio[] = "corrió", camino[] = "caminó", paso[] = "pasó";

  //Definición de los arreglos que guardarán los apuntadores de las palabras
  const int size_art = 4;
  const int size_sus = 5;
  const int size_pre = 5;
  const int size_ver = 5;
  
  char* articulo[size_art] = {el, un, algun, ningun};
  char* sustantivo[size_sus] = {ninio, senior, perro, ciudad, Auto};
  char* preposicion[size_pre] = {a, desde, encima_de, debajo_de, sobre};
  char* verbo[size_ver] = {manejo, salto, corrio, camino, paso};

  //Definición del arreglo que guardará los apuntadores de las palabras que for-
  //marán la frase aleatoria.
  const int size_palabra = 6;
  
  char* palabra[size_palabra] = {articulo[rand()%size_art],
				 sustantivo[rand()%size_sus],
				 verbo[rand()%size_ver],
				 preposicion[rand()%size_pre],
				 articulo[rand()%size_art],
				 sustantivo[rand()%size_sus]};

  //Tamaño máximo que pueden tener las frases aleatorias
  const int //    artic.   sustan.    verbo    prepoci.   artic.   sustantivo
    size_frase = (4 + 1) + (6 + 1) + (6 + 1) + (9 + 1) + (4 + 1) + (6 + 1) + 1;
  char frase[size_frase]; //Esta será la frase aleatoria
  /*
    Para calcular el tamaño del arreglo frase (size_frase):
    Se toma el tamaño máximo que puede llegar a tener cada palabra de la frase y
    se le suma 1 para tener en cuenta el espacio que la separa de la palabre si-
    guiente o para tener en cuenta el punto final. Al final se suma otro 1 que
    corresponde al carácter '\0' que va al final del arreglo de chars frase.
  */
  
  int i = 0; //Índice que recorre a frase (los carácteres de la frase final)
  int j = 0; //Índice que recorre a palabra (las palabras almacenadas en palabra)
  int k = 0; //Índice que recorre a las palabras en palabra (los carácteres)
  for ( ; ; i++, k++)
    {
      if (palabra[j][k] == '\0')     //Si es el final de la palabra j:
	{
	  if (j == size_palabra - 1) //  Si es la última palabra en palabra:
	    {
	      frase[i] = '.';        //      Se pone punto final
	      frase[i+1] = '\0';     //      Se pone el carácter de final
	      break;                 //      Se termina el ciclo
	    }
	  else                       //  En cualquier otro caso:
	    {
	      frase[i] = ' ';        //      Se pone un espacio
	      j++;                   //      Se pasa a la siguiente palabra
	      k = -1;                //      Se reinicia el índice de las palabr
	      continue;              //      Se pasa al siguiente ciclo
	    }
	}
      frase[i] = palabra[j][k];
    }

  frase[0] = toupper(frase[0]);
  
  cout << frase << endl;
  
  return 0;
}
