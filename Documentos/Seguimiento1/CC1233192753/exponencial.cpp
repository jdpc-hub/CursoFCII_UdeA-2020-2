#include <iostream>
#include "exponencial.h"
#include <cmath>
using namespace std;

FuncionExponencial::FuncionExponencial()
{
  x=0.0;
  N=1;
}

void FuncionExponencial::setValues()
{
  cout << "Ingrese el numero de terminos N" <<endl;
  cin>>N;
  cout<<"Ingrese el numeo x"<<endl;
  cin>>x;
}

int FuncionExponencial::Factorial(int N)
{
  int fact;
  if(N == 0)
  {
    fact=1;
  }
  else
  {
    fact=1;
    for(int i=1;i<=N;i++)
    {
      fact=fact*i;
    }
  }
  return fact;
}

double FuncionExponencial::Exp(int N, double x)
{
  double serie;
  int j;
  serie=0;

  for(j=0;j<= N;j++)
  {
    serie+= pow(x,j)/Factorial(j);
  }

  return serie;
}


void FuncionExponencial::Print()
{
  cout<<"El valor de e^"<<x<<" "<<"utilizando su expancion en series para N="<<N<<" "<<"terminos es"<<endl;
  cout<<"exp("<<x<<") = "<<Exp(N,x)<<endl;
}
