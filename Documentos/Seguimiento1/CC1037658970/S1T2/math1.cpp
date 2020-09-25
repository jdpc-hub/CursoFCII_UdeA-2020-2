/**
 * @author Valentina Roquemen Echeverry
 * @brief  Se diseña un a clase que calcula la exponencial
 *		   de un valor x usando series de Taylor. Los valores
 *		   de x y N (precision) son ingresados por el usuario 
 *         y se imprime el resultado en pantalla. 
 */

#include <iostream> 
#include <math.h>
#include "math1.h"
using namespace std;

Exponential::Exponential()
{
	//Se imponen valores por defecto para x y para N
	x = 1.0;
	N = 10;
}

void Exponential::getParameters()
{
    cout<<"Introduce el numero del cual quiere conocer el valor de su exponencial: "; 
    cin >> x;

    cout<<"Introduce la precision con la que quiere conocer  la funcion (Máximo de grado 10): "; 
    cin >> N;

    while(N<0 or N>=11)
    {
      cout<<"Por favor, ingrese un numero valido.\n Introduce la precision con la que quiere conocer la funcion (Máximo de grado 10!): "; 
      cin >> N;
    }
       
} 

int Exponential::calculateFactorial(int n)
{
	int fact=1;

	if(n>=2)
	{
		for (int i = 1; i <= n; ++i)
			fact*=i;
	
	}
	return fact;
} 

float Exponential::calculateExponential()
{
	float exp;

	for (int i = 0; i <= N; ++i)
		exp += pow(x,i)/calculateFactorial(i); 
	
	return exp;
} 

void Exponential::printResults()
{
      cout<<"Exponencial de " <<x<< "(con una precision de orden "<<N<<"): "<<calculateExponential()<<endl; 
} 