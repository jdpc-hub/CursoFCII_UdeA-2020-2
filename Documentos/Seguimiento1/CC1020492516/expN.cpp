// ### Implementación de la clase ### /// archivo.cpp

#include <iostream>
using namespace std; //Para no escribir demasiado

//#include <cstdlib>

#include "exponencial.h" //Mi clase pana

AproxExponencial::AproxExponencial(){ //El constructor
  varX = 0;
  varN = 0;
} 

int AproxExponencial::Factorial( int X ){ 
if (X == 0 or X == 1){ 
	X=1;
	}
else if (typeid(X) != typeid( int ) or X<0 ){
 	cout << " No puedo calcularle el factorial a ese número, mala mía "<< " \n" << endl;
						}
else {
   int Xfact = X-1;
   while (Xfact > 0){
	X = (X)*Xfact;
	Xfact = Xfact-1;
			}
	}
return X;
					}


void AproxExponencial::Exp( double X, int N)
{
  if ( N <= 10 ){ 
	varN = N;}
  else { 
      varN = 10;
      cout << "N =  \"" << N << "\" Es un número muy grande, así que se tomará Nmax = 10 \n"<< endl;
	} 
	float result = 0;
	for(int i=0; i<=varN ; i++){
	result = result + pow(X,i)/( Factorial(i) );
				}
	cout << "e^"<< X << " = " << result << endl;
}

void AproxExponencial::Resultado(){
  cout << "Por favor ingrese x, el exponente de e^x"<< endl;
  double X;
  cin >> X;
  cout << "Por favor ingrese N, la precisión con la que se desea calcular" << endl;
  int N;
  cin >> N;
  cout << N << "! = " << Factorial( N ) << endl;
  Exp(X,N);
	}
