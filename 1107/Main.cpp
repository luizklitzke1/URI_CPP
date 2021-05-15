#include <iostream>

using namespace std;

int main()
{
	
	unsigned long ulAltura = 0;
	unsigned long ulComprimento = 0;
	
	while ((cin >> ulAltura >> ulComprimento) && ulAltura && ulComprimento)
	{
		long lValor = 0;
		long lAnterior = ulAltura;
		long lQuantidadePerfs = 0;
		
		for (long idx = 0; idx < ulComprimento; ++idx)
		{
			cin >> lValor;
			
			if (lValor < lAnterior)
				lQuantidadePerfs += lAnterior - lValor;
			
			lAnterior = lValor;
		}
		
		cout << lQuantidadePerfs << endl;
	}

    return 0;
}