#include <iostream>
#include <iomanip>
#include <cstdlib> //rand function
#include <ctime>
#include <vector>

using std::setw;
using std::rand;
using namespace std;


int main()
{
  const int LA= 13; // LengthArray longitud del arreglo (2-12)
  vector<int> Frecuency(LA); //Vector para la frecuencia
  srand(time(NULL)); //semilla con el reloj del pc
  
  int d1, d2, s; // d1 dado 1, d2 dado 2 y s su suma

  for ( int t = 1; t <= 36000; t++ ){
    d1= 1 + rand() % 6;
    d2= 1 + rand() % 6;
    s= d1 + d2;
    Frecuency[s]++;
  }
  
cout << "Suma" << setw( 13 ) << "Frecuencia" << setw( 20 ) << "Frecuencia Relativa"<< endl;

   for ( int suma = 2; suma < LA; suma++ ){
    cout << setw( 3 ) << suma << setw( 11 ) << Frecuency[ suma ]<< setw( 20 ) << Frecuency[ suma ]/36000.0 << endl;
   }
    cout<<"Donde la frecuencia relativa corresponde a las posibles opciones que se tienen de obtener un numero de la suma, asi:"<<endl;
    for ( int i = 1; i <= 6; i++ ){
      cout << setw( 3 ) << i << setw( 11 ) << i<<"/36 = "<< Frecuency[ i+1 ]/36000.0 << endl;
  }
  
return 0; 
  
}



