/**
 * @author Santiago Duque Escobar
 * @brief  Clase diseñada para calcular el valor de la 
 *         exponencial de x con un cierto valor en la precisión.
 */

#include "Exp.h"
#include <math.h>
#include <iostream>

Exp::Exp(double x, unsigned int N)
{
  setX(x);
  setN(N);
}


double Exp::getExp()
{
  double e = 1;

  for(int n=1; n<=N; ++n)
    e += pow(x,n)/fact(n);
  return e;
}


void Exp::setX(double x)
{
  this->x = x;
}


void Exp::setN(unsigned int N)
{
  this->N = (N>10)? 10 : N;
}

void Exp::printExp()
{
  double e = getExp();
  std::cout <<"exp("<< x<< ") = "<< e << std::endl;
}

unsigned int Exp::fact(unsigned int n)
{
  unsigned int f = 1;
  
  for(;n>0; --n)
    f *= n;
  
  return f;
}
