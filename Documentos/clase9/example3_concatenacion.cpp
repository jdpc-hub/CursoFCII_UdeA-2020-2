#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{

  string cadena1( "cat" );
  string cadena2; // se inicializa con la cadena vacía

  string cadena3; 
  cadena2 = cadena1; // asigna cadena1 a cadena2
  cadena3.assign( cadena1 ); // asigna cadena1 a cadena3
  cout << "cadena1: " << cadena1 << "\ncadena2: " << cadena2
       << "\ncadena3: " << cadena3 << "\n\n";
  
  // modifica cadena2 y cadena3
  cadena2[ 0 ] = cadena3[ 2 ] = 'r';

  cout << "Despues de modificar cadena2 y cadena3:\n" << "cadena1: "
       << cadena1 << "\ncadena2: " << cadena2 << "\ncadena3: ";
  
  for ( int i = 0; i < cadena3.length(); i++ ){
    cout << cadena3.at( i );
  }

  string cadena4( cadena1 + "apulta" ); // concatenación
  string cadena5;

  cadena3 += "peta"; // crea "carpeta"
  cadena1.append( "acumba" ); // crea "catacumba"
  
  // adjunta las ubicaciones de los subíndices 4 hasta el final de cadena1 para crear la cadena "cumba"
  cadena5.append( cadena1, 4, cadena1.length() - 4 );

  cout << "\n\nDespues de concatenar:\ncadena1: " << cadena1
       << "\ncadena2: " << cadena2 << "\ncadena3: " << cadena3
       << "\ncadena4: " << cadena4 << "\ncadena5: " << cadena5 << endl;
  

return 0; 
}  
