/**
 * @author Valentina Roquemen Echeverry
 * @brief  Se diseña un a clase que calcula la exponencial
 *		   de un valor x usando series de Taylor. Los valores
 *		   de x y N (precision) son ingresados por el usuario 
 *         y se imprime el resultado en pantalla. 
 */
  
class Exponential
{
	public :

   /**
   * @param x  Valor al cual se le va a calcular la exponencial.
   * @param N  Precision con la cual se va a calcular la serie
   * @note El máximo valor del N es 10, si el usuario ingresa un número
   *	   que no se encuentre en el rango se le pedirá que lo vuelva a ingresar
   */     
	Exponential(); 

	/*
	* Pide al usuario que ingrese por consola los valores de x y N
	*/
	void getParameters();      

	/*
	* Realiza el calculo del factorial
	*/
	int calculateFactorial(int);
	
	/*
	* Realiza el calculo de exp(x) con precision de N
	*/
	float calculateExponential();   

	/*
	* Imprime en pantalla el resultado del calculo
	*/
	void printResults(); 
	
	private :     
	
	int N;
	float x;
};
