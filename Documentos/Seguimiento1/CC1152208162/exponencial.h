//clase para calcular e^x

#include <iostream>

using namespace std;

class Exponencial{

private:
    double x;
    int N;
    
public:
    Exponencial();
    void asignar_datos(float, int);
    int calcular_factorial(int);
    double calcular_exponencial();
    void mostrar_resultado();

};
