#include "ExpN.h"

int main()
{
    double x_;
    unsigned int N_;
    
    cout << "Bienvenido al programa para calcular e^x \nIngrese el valor de x: " << endl;    
    cin >> x_;
    
    cout << "Ingrese el numero de terminos de la serie, N (max. 10): " << endl;
    cin >> N_;

    if (N_ > 10 || N_< 0 ) {
        cout << "El numero de terminos debe estar entre 0 y 10";
    }
    else {
        ExpN myExpN(x_, N_);
        myExpN.printExpX();
    }

    return 0;
}

