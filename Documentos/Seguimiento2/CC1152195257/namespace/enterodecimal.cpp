//5.c y 6.c
namespace intdec
{
  //5.a.
  int entero(double numero)
  {
    int resultado = numero;
    return resultado;
  }

  //6.a
  double partefracc(double numero)
  {
    double resultado;
    resultado = numero - entero(numero);
    return resultado;
  }
}
