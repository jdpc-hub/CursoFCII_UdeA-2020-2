#include "exponential.h"

int main()
{
  //Para probar las funciones se pide ingresar un entero y otro valor para calcular exp(x) 
  int n;
  float y;
  cout << "Ingrese el entero (0 a 10) para calcular su factorial y que defina la precision: \n";
  cin >> n;
  cout << "Ingrese el x para calcular la funcion exp(x): \n";
  cin >> y;

  Exponential f_exp(n); //Se crea el objeto

  //Se usan las funciones asociadas al objeto
  cout << "\n" << n << "! = " << f_exp.factorial(n) << endl; //Se imprime en pantalla el factorial
  cout << "exp("<< y << ") = " << f_exp.exponential(y) << endl; //Se imprime en pantalla exp(x)
  f_exp.mostrarValor(); //Se muestra el valor de exp(x)
  
  return 0; 
} 
