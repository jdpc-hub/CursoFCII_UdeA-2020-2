// Johan Carrillo - 1214734681
// Here it is defined the class and its functions

#include "class.h"

ExponentialFunction::ExponentialFunction(){

	cout << "Este programa calcula la exponencial de x hasta el N-esimo termino de la serie\n";
	cout << "Introduzca un real x y un entero positivo N<=15" << endl;
	cin >> x >> N;  // Declared in class.h as private

	// Condition over N
	while(N<0 | N>15){
		cout << "El numero ingresado N no es valido, intente de nuevo\n";
		cin >> N;
	}
}

long long int ExponentialFunction::factorial(int N){

	long long int fact=1;  // accumulator

	if(N == 0)
		N=1;
	
	for(int i=1; i<=N; i++)
		fact = fact * i;

	return fact;
}

double ExponentialFunction::exponential(float x, int N){

	double sum=0.0;  // accumulator

	for(int i=0; i<=N; i++)
		sum += pow(x, i) / factorial(i);
	
	return sum;
}

void ExponentialFunction::show(){

	// The result is shown at 8 significant figures
	cout << "exp(" << x << ") = " << setprecision(8) << exponential(x, N) << endl;
}