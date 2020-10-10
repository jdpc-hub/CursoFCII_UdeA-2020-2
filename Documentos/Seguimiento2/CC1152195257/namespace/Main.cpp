#include <iostream>
#include </home/jdpc/CursoFCII_UdeA-2020-2/Documentos/Seguimiento2/CC1152195257/namespace/enterodecimal.cpp>

using namespace intdec;

int main()
{
  //5.b
  float num1 = 1.234;
  double num2 = 5.67892;

  std::cout << "num1 = " << num1 << std::endl;
  std::cout << "num2 = " << num2 << std::endl;
  
  std::cout << "entero(num1) = " << entero(num1) << std::endl;
  std::cout << "entero(num2) = " << entero(num2) << std::endl;

  //6.b
  std::cout << "partefracc(num1) = " << partefracc(num1) << std::endl;
  std::cout << "partefracc(num2) = " << partefracc(num2) << std::endl;
  
  return 0;
}
