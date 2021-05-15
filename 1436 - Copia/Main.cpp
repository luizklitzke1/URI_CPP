#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;

int main()
{

	unsigned long ulTamanhoVetor = 0;

	long lDistanciaLinha = 0;
	long lDistanciaColuna = 0;
	long lMenorDistancia = 0;
	
	do 
	{
		cin >> ulTamanhoVetor;
		
		if (ulTamanhoVetor == 0)
			break;
		
		for (long idxLinha = 0; idxLinha < ulTamanhoVetor; ++idxLinha)
		{
			for (long idxColuna = 0; idxColuna < ulTamanhoVetor; ++idxColuna)
			{
				if (idxLinha > ulTamanhoVetor - 1 - idxLinha)
					lDistanciaLinha = ulTamanhoVetor - 1 - idxLinha;
				else
					lDistanciaLinha = idxLinha;
				
				if (idxColuna > ulTamanhoVetor - 1 - idxColuna)
					lDistanciaColuna = ulTamanhoVetor - 1 - idxColuna;
				else
					lDistanciaColuna = idxColuna;
				
				lMenorDistancia = min(lDistanciaLinha, lDistanciaColuna);
				
				if (idxColuna == 0)
					cout << right << setw(3) << lMenorDistancia + 1;
				else
					cout << right << " " << setw(3) << lMenorDistancia + 1;
				
			}
			cout << endl;
		}

		cout << endl;
	}
	while (ulTamanhoVetor != 0);
	
    return 0;
}
