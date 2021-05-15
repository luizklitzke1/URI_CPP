#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;

const long TAMANHO_VETORES = 100;

int main()
{

	long aValoresInformados[TAMANHO_VETORES][TAMANHO_VETORES] = {0};
	unsigned long ulTamanhoVetor = 0;
	
	do 
	{
		cin >> ulTamanhoVetor;
		
		if (ulTamanhoVetor == 0)
			break;
		
		for (long idxLinha = 0; idxLinha < ulTamanhoVetor; ++idxLinha)
		{
			for (long idxColuna = 0; idxColuna < ulTamanhoVetor; ++idxColuna)
			{
				if (idxLinha == 0 || idxColuna == 0)
					++aValoresInformados[idxLinha][idxColuna];
					cout << aValoresInformados[idxLinha][idxColuna];
				else
					if (min(aValoresInformados[idxLinha - 1][idxColuna], aValoresInformados[idxLinha + 1][idxColuna]))
			
			}
			cout << endl;
		}
		

		cout << endl;
	}
	while (ulTamanhoVetor != 0);
	
    return 0;
}
