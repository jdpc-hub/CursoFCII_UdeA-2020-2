/**
 * @author Santiago Duque Escobar
 * @brief  Clase diseñada para calcular el valor de la 
 *         exponencial de x con un cierto valor en la precisión.
 */


class Exp
{
 public:

  /**
   * @param x  Valor para el cual se desea calcular la exponencial.
   * @param N  Numero de términos en los que se expandirá la serie
   *           para calcular exp(x).
   * @note El máximo valor del N es 10, si el usuario ingresa un número 
   *       superior, este será tomado como 10 por defecto.
   */
  Exp(double x, unsigned int N=5);

  /**
   * Retorna el valor de la exponencial de x 
   * para una expanción en N términos
   */
  double getExp();

  /**
   * Actualiza el valor de x
   */
  void setX(double);

  /**
   * Actualiza el valor de N
   */
  void setN(unsigned int);

  /**
   * Imprime en pantalla el valor de exp(x)
   */
  void printExp();

 private:

  double x; ///< Valor para el cual se desea calcular la exponencial.
  unsigned int N; ///< Numero de términos en los que se expandirá la serie.

  /**
   * Retorna el factorial de un entero
   */
  unsigned int fact(unsigned int);  
  
};
