/*
 * @author Santiago Duque Escobar
 * @brief Resolución del ejercicio 6 del capitulo 3 del
 *        libro "c++ para ingeniería y ciencias" de Barson.
 */
#include <iostream>
#include <cmath>

using namespace std;


/**
 * @brief función de densidad de probailidad gaussiana
 * @param x  Variable independiante
 * @param u  Media
 * @param s  Desviación estándar
 * @return Valor de la PDF evaluada en el punto x
 */
double gaussPDF(double x, double u=0, double s=1);

int main()
{
  cout << "//=================================//" << endl;
  cout << "//               6.a               //" << endl;
  cout << "//=================================//" << endl;

  cout << "x = 80; u=90; s=4" << endl;
  cout << endl <<"y = " << gaussPDF(80, 90, 4) << endl << endl;

  cout << "//=================================//" << endl;
  cout << "//               6.b               //" << endl;
  cout << "//=================================//" << endl;

  double x,u,s; //Parámetros de la distribución gaussiana
  cout << endl << "Ingrese la media: ";
  cin >> u;
  cout << "Ingrese la desviacion estandar: ";
  cin >> s;
  cout << "Ingrese el valor de x: ";
  cin >> x;

  /* Resultado */
  cout << endl <<"y = " << gaussPDF(x, u, s) << endl;
  
  return 0;
}


double gaussPDF(double x, double u, double s)
{  
  double v = pow((x-u)/s,2);
  return exp(-0.5*v) / (s*sqrt(2*M_PI));
}

