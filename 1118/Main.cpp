#include <iostream>

const long QUANTIDADE_CASAS_DECIMAIS = 2;

using namespace std;
int main()
{
    
    double dNota1 = 0.;
	double dNota2 = 0.;
	bool bPrimeiraRodada = true;
		
	long lContinuar = 1;
	
    while(lContinuar != 2)
	{
		cin >> dNota1;

		if (dNota1 < 0 || dNota1 > 10)
		{
			cout << "nota invalida" << endl;
		}
		else if (bPrimeiraRodada)
		{
			dNota2 = dNota1;
			bPrimeiraRodada = false;
		}
		else{
			
			cout.precision(QUANTIDADE_CASAS_DECIMAIS);
			cout << fixed << "media = " << (dNota1 + dNota2) / 2 << endl;

			while (!(lContinuar == 1 || lContinuar == 2))
			{
				cout << "novo calculo (1-sim 2-nao)" << endl;
				cin >> lContinuar;

				if (lContinuar == 1)
				{
					bPrimeiraRodada = true;
					lContinuar = 0;
					break;
				}
			}
		}
    } 
    return 0;
}