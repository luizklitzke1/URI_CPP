#include <iostream>

using namespace std;

const long QUANTIDADE_CASAS_DECIMAIS = 1;

int main() 
{

	long lQuantidadePositivos = 0;
	double dSomaPositivos = 0;
	
	long lContador = 0;
	while (lContador < 6)
	{
		cin >> dValor;
		
		if (dValor > 0)
		{
			lQuantidadePositivos ++;
			dSomaPositivos += dValor;
			
		}
		++lContador;
		
	}
	
	double dMediaPositivios = dSomaPositivos / lQuantidadePositivos;
	
	cout.precision(QUANTIDADE_CASAS_DECIMAIS);
	cout << lQuantidadePositivos << " valores positivos" << endl;
	cout << fixed << dMediaPositivios << endl;
	
    return 0;
    
}
