#include <iostream>

using namespace std;

int main() 
{

	long lQuantidadePares = 0;
	long lQuantidadeImpares = 0;
	long lQuantidadePositivios = 0;
	long lQuantidadeNegativos = 0;
	
	for (int i = 0; i <= 4 ; i ++)
	{
		
		long lValor = 0;
		
		cin >> lValor;
		
		if (lValor % 2 == 0)
		{
			lQuantidadePares ++;
		}
		else
		{
			lQuantidadeImpares ++;
		}
		
		if (lValor > 0)
		{
			lQuantidadePositivios ++;
		}
		else
		{
			if (lValor < 0)
			{
				lQuantidadeNegativos ++;
			}
		}
		
	}
	
	cout << lQuantidadePares << " valor(es) par(es)" << endl;
	cout << lQuantidadeImpares << " valor(es) impar(es)" << endl;
	cout << lQuantidadePositivios << " valor(es) positivo(s)" << endl;
	cout << lQuantidadeNegativos << " valor(es) negativo(s)" << endl;
	
    return 0;
    
}
