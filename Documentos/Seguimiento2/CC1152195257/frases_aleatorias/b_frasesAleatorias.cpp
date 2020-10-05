#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cctype>

using namespace std;

void frase_aleatoria( char [] );

int main()
{
  srand(time(NULL));
  
  //Tamaño máximo que pueden tener las frases aleatorias
  const int //    artic.   sustan.    verbo    prepoci.   artic.   sustantivo
    size_frase = (4 + 1) + (6 + 1) + (6 + 1) + (9 + 1) + (4 + 1) + (6 + 1) + 1;
  
  //Cantidad de frases en un párrafo
  int size_frase_parrafo;
  cout << "¿Cuántas frases tendrá el párrafo? (ingrese un número entero) ";
  cin >> size_frase_parrafo;

  //Arreglo que guardará las frases aleatórias que componen al párrafo
  char frase_parrafo[size_frase_parrafo][size_frase];

  //Se llena el arreglo frase_parrafo con frases aleatorias
  for (int i = 0; i < size_frase_parrafo; i++)
    {
      frase_aleatoria(frase_parrafo[i]);
      //cout << frase_parrafo[i] << endl;
    }

  //Tamaño máimo que puede tener el parrafo
  const int size_parrafo = size_frase_parrafo * size_parrafo;
  char parrafo[size_parrafo]; //Este será el parrafo de frases aleatorias

  int i = 0; //Índice que recorre a parrafo (los carácteres del parrafo final)
  int j = 0; //Índice que recorre a frase_parrafo (las cadenas que almacenada)
  int k = 0; //Índice que recorre a las frases en frase_parrafo (los crácteres)
  for ( ; ; i++, k++)
    {
      if (frase_parrafo[j][k] == '\0')//Si es el final de la frase j:
	{
	  if (j == size_frase_parrafo - 1)
	                             //   Si es la última frase en frase_parrafo:
	    {
	      parrafo[i] = '\0';     //    Se pone el carácter final
	      break;                 //    Se termina el ciclo
	    }
	  else                       //   En cualquier otro caso:
	    {
	      parrafo[i] = ' ';      //      Se pone un espacio
	      j++;                   //      Se pasa a la siguiente frase
	      k = -1;                //      Se reinicia el índice de las frases
	      continue;              //      Se pasa al siguiente ciclo
	    }
	}
      parrafo[i] = frase_parrafo[j][k];
    }

  cout << parrafo << endl;
  
  return 0;
}

void frase_aleatoria( char frase[] )
{
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
}
