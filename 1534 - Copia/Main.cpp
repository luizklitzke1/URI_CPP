#include <iostream>

using namespace std;

const long TAMANHO_MAXIMO_MATRIZ = 70;

int main()
{
	long aValores[TAMANHO_MAXIMO_MATRIZ][TAMANHO_MAXIMO_MATRIZ] = {0};
	long lTamanhoMatriz = 0;
	
	while (cin >> lTamanhoMatriz)
	{
		for (long idxLinha = 0; idxLinha < lTamanhoMatriz; ++idxLinha)
		{
			for (long idxColuna = 0; idxColuna < lTamanhoMatriz; ++idxColuna)
			{
				if (idxLinha == 0)
				{
					if (idxColuna == 0)
						aValores[idxLinha][idxColuna] = 1;
					else if (idxColuna == lTamanhoMatriz - 1)
						aValores[idxLinha][idxColuna] = 2;
					else
						aValores[idxLinha][idxColuna] = 3;
				}
				else if (idxColuna == 0)
				{
					if (idxLinha == 0)
						aValores[idxLinha][idxColuna] = 1;
					else if (idxLinha == lTamanhoMatriz - 1)
						aValores[idxLinha][idxColuna] = 2;
					else
						aValores[idxLinha][idxColuna] = 3;
				}
				else if (idxColuna == lTamanhoMatriz - 1 && idxLinha != 0 && idxLinha != lTamanhoMatriz - 1)
					aValores[idxLinha][idxColuna] = 3;
				else
					aValores[idxLinha][idxColuna] = 5;
				
				cout << aValores[idxLinha][idxColuna];
			}
			cout << endl;
		}
		
	}
	
	return 0;
}
