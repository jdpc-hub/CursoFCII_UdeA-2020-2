#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  float mu;
  float sigma;
  float x;
  const float Pi=3.14;
  std::cout << "Ingrese el valor para x: ";
  std::cin >> x;
  std::cout << "Ingrese el valor para mu: ";
  std:: cin >> mu;
  std::cout << "Ingrese el valor para sigma: ";
  std:: cin >> sigma;
  float y = exp(-0.5*pow((x-mu)/sigma,2))/(sigma*sqrt(2*Pi));
  std::cout <<"y="<< y;
return 0;
}

    

