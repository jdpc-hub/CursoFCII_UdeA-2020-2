/*
Implementación de la clase para calcular e^x
*/

#include <iostream>
#include <math.h>
#include "exponential.h"

using namespace std;

// El constructor 
CalculoEXP::CalculoEXP(int n, float x)
{
	CalculoEXP::establecerNX(n, x);
}

// La buena definición de n 
void CalculoEXP::establecerNX(int n, float x)
{
	XValue = x;
	if ( n > 0 and n <=10)
	{
		NTerms = n;
	}
	else
	{
		cout << "el número de términos " << n << "no está en el rango (0,10]" << endl;
		cout << "fijando número de términos en 5... " << endl;
		NTerms = 5;
	}
}

// Obtener valores ingresados 
int CalculoEXP::getNterm()
{
	return NTerms;
}

float CalculoEXP::getXval()
{
	return XValue;
}

// Función que calcula el factorial de un número M
int CalculoEXP::factorial(int M)
{
	int m = 1;
	if (M==0 or M==1)
	{
		return m;
	}
	else
	{
		for(int i=1; i<=M; i++)
		{
			m = m*i;
		}
		return m;
	}
}

// Función que calcula el valor de e^x con series de taylor
float CalculoEXP::taylorEXP()
{
	float X = getXval();
	int N = getNterm();

	float Tsum=1;

	for(int i=1; i<=N; i++)
	{
		Tsum = Tsum + pow(X, i)/factorial(i);
	}

	return Tsum;
}

// Función que muestra el valor obtenido
void CalculoEXP::returnval()
{
	cout << "el valor de e^" << getXval() << " aproximado con " << getNterm() << " terminos es: " << taylorEXP() << endl;
}




