#include <stdio.h>
#include <math.h>
#include <iostream>
#include <string>
using namespace std;


class Exponencial
{
public:
Exponencial();
void AsignarValores();
int Factorial(int); 
float Exp(int, float);
void Resultados();

private:
 int N;
 float x;
};
