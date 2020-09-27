#include <iostream>
#include <cmath>
#include "seg2.h"
using namespace std;

int main()
  {
    float x ; int N ;  
    
    cout << "Enter a real number which you want to calculate the exponential of: ";
    cin >> x;
    cout << "Enter the number of terms used in the series expansion:  ";
    cin >> N;
    
    ExpClass Exp(x,N);
    cout << "e^" << Exp.getValue() << " is " << Exp.getExponential() << endl;
    return 0;
  }

