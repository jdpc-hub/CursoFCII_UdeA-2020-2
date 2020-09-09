#include <iostream>
#include "exponential.h"

using namespace std;

int main()
{
  cout << "This program calculates the exponential of a real number x,\n"
       << "i.e. exp(x) or e^x, by means of a Taylor series.\n" << endl;
  char answer;
  
  do
    {
  cout << "Type the number x you wish to calculate the exponential: ";
  double x;
  cin >> x;
  cout << "Now type how many terms will be used to calculate the power series: ";
  int n;
  cin >> n;
  cout << " " << endl;
  
  Exponential myExp( x , n );//An object of the Exponential class is instantiated

  cout << "exp(" << x << ") = ";
  myExp.printExp(  );
  cout << " " << endl;

  cout << "Do you want to calculate another exponential? [y/n] ";
  cin >> answer;
  cout << " " << endl;
    }
  while ( answer == 'y' );
  
  return 0;
}
