#include <iostream>
#include <cmath>
using namespace std;

float Gaussian(float m, float s, float x)
{
  float pi = 2*acos(0.0);
  float y = 1/(s*sqrt(2*pi));
  y *= exp ( -0.5 * pow( (x-m)/2 , 2));
  return y;
}

int main()
  {
    float med ; float std ; float x ;
    
    cout << "Enter the median: ";
    cin >> med;
    cout << "Enter the standard deviation: ";
    cin >> std;
    cout << "Enter the point which you want to evalute: ";
    cin >> x;

    float y = Gaussian(med,std,x);
    cout << y << endl;
    return 0;
  }
