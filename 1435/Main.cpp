#include <iostream>
#include <algorithm>

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
				lDistanciaLinha = min(idxlinha, ulTamanhoVetor - 1 - idxlinha);
				lDistanciaColuna = min ((idxColuna, ulTamanhoVetor - 1 - idxColuna);
				lMenorDistancia = min(lDistanciaLinha, lDistanciaColuna);
				
				cout << lMenorDistancia + 1;
			}
			cout << endl;
		}
		

		
		
	while (ulTamanhoVetor != 0);
	
	

    return 0;
}