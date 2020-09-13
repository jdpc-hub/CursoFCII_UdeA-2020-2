#include <iostream>

using namespace std;

#include "exponencial.h"

int main() {
	Exponencial a;
	a.asignar_datos(4.3, 6);
	a.calcular_exponencial();
	a.mostrar_resultado();
	return 0;
	}
