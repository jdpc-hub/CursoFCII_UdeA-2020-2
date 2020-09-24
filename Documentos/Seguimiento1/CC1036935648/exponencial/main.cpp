/**
 * Archivo para probar la clase EXP
 * @author Santiago Duque Escobar
 */

#include "Exp.h"
#include <iostream>

using namespace std;

int main()
{
  Exp exp(1,10);

  cout << "=========================================" << endl;
  cout << "              Prueba valores             " << endl;
  cout << "=========================================" << endl;
  
  cout <<"exp(1) = "<< exp.getExp() <<endl;

  exp.setX(2);
  exp.printExp();

  exp.setX(3);
  exp.printExp();

  exp.setX(4);
  exp.printExp();

  cout << "=========================================" << endl;
  cout << "             Prueba precision            " << endl;
  cout << "=========================================" << endl;

  exp.setX(1);
  for(int n=1; n<=10; ++n)
  {
    exp.setN(n);
    cout << "N = " << n << "\t";
    exp.printExp();    
  }
  
  return 0;
}
