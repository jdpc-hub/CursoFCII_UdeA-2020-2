/*
 * @author Santiago Duque Escobar
 * @brief Gráfica de una función gaussiana usando la librería 
 *        matplotlib-cpp (https://github.com/Cryoris/matplotlib-cpp.git).
 *
 * @note  Compilar usando el comando "g++ plot.cpp -std=c++11 -I/usr/include/python2.7 -lpython2.7"
 */

#include "matplotlibcpp.h"
#include <vector>
#include <iostream>

using namespace std;

namespace plt = matplotlibcpp;

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
    double u,s; //Parámetros de la distribución gaussiana
    cout << endl << "Ingrese la media: ";
    cin >> u;
    cout << "Ingrese la desviacion estandar: ";
    cin >> s;

    const int N_POINTS = 100; //Número de puntos a graficar
    std::vector<double> x(N_POINTS), y(N_POINTS);

    /* Graficar seis sigmas centrado en la media*/
    double start = u - 3*s;
    double stop = u + 3*s;
    double step = (stop - start)/N_POINTS; 

    for(int i=0; i < N_POINTS; ++i)
    {
        x.at(i) = start + step*i;
        y.at(i) = gaussPDF(x.at(i), u, s);
    }

    plt::plot(x, y);
    plt::show();

    return 0;
}

double gaussPDF(double x, double u, double s)
{  
  double v = pow((x-u)/s,2);
  return exp(-0.5*v) / (s*sqrt(2*M_PI));
}