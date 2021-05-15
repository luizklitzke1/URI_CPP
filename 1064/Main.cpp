#include <iostream>

using namespace std;

const long QUANTIDADE_CASAS_DECIMAIS = 1;

int main() 
{

	long lQuantidadePositivos = 0;
	double dSomaPositivos = 0;
	
	for (int i = 0; i <= 5 ; i ++)
	{
		
		double dValor = 0;
		
		cin >> dValor;
		
		if (dValor > 0)
		{
			lQuantidadePositivos ++;
			dSomaPositivos += dValor;
			
		}
		
	}
	
	double dMediaPositivios = dSomaPositivos / lQuantidadePositivos;
	
	cout.precision(QUANTIDADE_CASAS_DECIMAIS);
	cout << lQuantidadePositivos << " valores positivos" << endl;
	cout << fixed << dMediaPositivios << endl;
	
    return 0;
    
}
