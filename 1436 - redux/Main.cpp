#include <iostream>

using namespace std;

const long TAMANHO_VETORES = 100;

int main()
{
	long aValoresInformados[TAMANHO_VETORES][TAMANHO_VETORES] = {0};
	
	unsigned long ulTamanhoVetor = 0;
	
	do 
	{
		cin >> ulTamanhoVetor;
		
		for (long idxLinha = 0; idxLinha < ulTamanhoVetor; ++idxLinha)
		{
			for (long idxColuna = 0; idxColuna < ulTamanhoVetor; ++idxColuna)
			{
				

				cout << aValoresInformados[idxLinha][idxColuna] << " "; 
			}
			cout << endl;
		}
		
	}
	while (ulTamanhoVetor != 0);
	
	

    return 0;
}