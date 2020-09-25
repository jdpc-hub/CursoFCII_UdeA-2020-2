#include <iostream>
#include <cmath>

using namespace std;

#include "exponencial.h"

Exponencial::Exponencial(){
    x = 0;
    N = 0;
};

void Exponencial::asignar_datos(float base, int orden){
	x= base;
	N= orden;
	}

int Exponencial::calcular_factorial(int n){
    int fact =1;
    for(int i= 1; i<=n; i++){
    fact= fact*i;
    }
    return fact;
}

double Exponencial::calcular_exponencial(){
	float exp= 1;
	for(int j=1; j<=N; j++){
	exp= exp + pow(x,j)/calcular_factorial(j);
	}
	return exp;

}

void Exponencial::mostrar_resultado(){
	 cout << "el valor de exp(" << x <<") es:" << calcular_exponencial() <<endl;
	 }
