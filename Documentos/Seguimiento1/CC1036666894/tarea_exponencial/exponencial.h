
#include <string> 

class Exponencial
{
public:
  Exponencial(float,int);
  
  int factorial(int);
  float valorExponencial(float,int);
  void mostrarValor();
  
private:
  float prv_x; 
  int prv_N; 

}; 
