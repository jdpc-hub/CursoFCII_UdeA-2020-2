#include "exponencial.h"
# include <iostream>

using namespace std;
int main()
{
  int N;
  float x;
  cout << "Ingrese el número de términos para la serie:" << endl;
  cin >> N;
  if (N>10)
    {
      cout << "Ingresó un valor superior a 10. Ingrese de nuevo el número de términos de la serie:" << endl;
    cin >> N;
}
  cout << "Ingrese un valor de x" << endl;
  cin >> x;  
    D_Cal_exp creat_exp(N,x);
    creat_exp.expon();
      creat_exp.report_exp();
    return 0;
    }  
    
