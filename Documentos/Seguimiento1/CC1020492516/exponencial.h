// ### Definición de clase ### // exponencial.h

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class AproxExponencial
{
public:
AproxExponencial( ); // el constructor que inicializará las variables
int Factorial( int ); //Función que calculará el factorial
void Exp( double, int ); //Función que calculará la exponencial
void Resultado(); // Función que mostrará el resultado ajajjaa esto no lo usé nunca
 
private:
int varX; // Variable X, privada
int varN; //La precisión N, el número de términos de la serie
}; // fin de la clase
