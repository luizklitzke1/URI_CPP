#include <iostream>

using namespace std;

int main() 
{

    long lValorA = 0;
	long lValorB = 0;
	long lValorC = 0;

    cin >> lValorA >> lValorB >> lValorC;
	
	long lMaiorValor = 0;
	long lValorMedio = 0;
	long lMenorValor = 0;
	
	if (lValorA > lValorB && lValorA > lValorC)
	{
		lMaiorValor = lValorA;
		
		if (lValorB > lValorC)
		{
			lValorMedio = lValorB;
			lMenorValor = lValorC;
		}
		else
		{
			lValorMedio = lValorC;
			lMenorValor = lValorB;
		}
		
	}
	else
	{
		
		if (lValorB > lValorA && lValorB > lValorC)
		{
			lMaiorValor = lValorB;
			
			if (lValorA > lValorC)
			{
				lValorMedio = lValorA;
				lMenorValor = lValorC;
			}
			else
			{
				lValorMedio = lValorC;
				lMenorValor = lValorA;
			}
			
		}
		else
		{
			
			lMaiorValor = lValorC;
			
			if (lValorA > lValorB)
			{
				lValorMedio = lValorA;
				lMenorValor = lValorB;
			}
			else
			{
				lValorMedio = lValorB;
				lMenorValor = lValorA;
			}
		
		}
		
	}
	
	cout << lMenorValor << endl;
	cout << lValorMedio << endl;
	cout << lMaiorValor << endl;
	
	cout << endl;
	
	cout << lValorA << endl;
	cout << lValorB << endl;
	cout << lValorC<< endl;
	
    return 0;
    
}
