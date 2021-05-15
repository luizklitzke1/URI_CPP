#include <iostream>

using namespace std;

int main()
{

	long lValorM = 1;
	long lValorN = 1;

	long lMaiorValor = 0;
	long lMenorValor = 0;

	long lSomaItens = 0;
	
	while (true)
	{

		cin >> lValorM >> lValorN;

		if (!(lValorM > 0 && lValorN > 0))
		{
			break;
		}

		if (lValorM > lValorN){

			lMaiorValor = lValorM;
			lMenorValor = lValorN;

		}
		else
		{
			lMaiorValor = lValorN;
			lMenorValor = lValorM;
		}

		lSomaItens = 0;

		for (lMenorValor; lMenorValor <= lMaiorValor; lMenorValor ++)
		{

			cout << lMenorValor << " ";
			lSomaItens += lMenorValor;

		}

		cout << "Sum=" << lSomaItens << endl;

	}
	

	return 0;
}
