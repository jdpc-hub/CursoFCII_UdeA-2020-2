/* 
Definición de la clase para calcular e^x
*/

class CalculoEXP
{
	public:

		CalculoEXP(int, float);
		void establecerNX(int, float);
		int getNterm();
		float getXval();
		int factorial(int);
		float taylorEXP();
		void returnval();
		

	private:
		int NTerms;
		float XValue;
};

