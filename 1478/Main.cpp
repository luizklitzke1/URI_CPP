#include <iostream>
#include <algorithm>
#include <iomanip>


using namespace std;

const long TAMANHO_VETOR = 100;

int main()
{
	long aVetor[TAMANHO_VETOR][TAMANHO_VETOR] = {0};
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
				if (idxLinha == 0)
					aVetor[idxLinha][idxColuna] = idxColuna + 1;
				else if (idxColuna == 0)
					aVetor[idxLinha][idxColuna] = idxLinha + 1;
				else
				{
					if (aVetor[idxLinha - 1][idxColuna] > aVetor[idxLinha][idxColuna - 1])
						aVetor[idxLinha][idxColuna] = aVetor[idxLinha - 1][idxColuna] - 1;
					else
						aVetor[idxLinha][idxColuna] = aVetor[idxLinha][idxColuna - 1] - 1;
				}
				
				if (idxColuna == 0)
					cout << right << setw(3) << idxLinha + 1;
				else
					cout << right << " " << setw(3) << aVetor[idxLinha][idxColuna];
				
			}
			
			cout << endl;
		}
		
		cout << endl;
	}
	while (ulTamanhoVetor != 0);
	
    return 0;
}
