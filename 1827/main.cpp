#include <iostream>

using namespace std;

const long TAMANHO_MAXIMO_MATRIZ = 101;

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
				if (idxLinha == lTamanhoMatriz / 2  && idxColuna == lTamanhoMatriz / 2 )
					aValores[idxLinha][idxColuna] = 4;
				else if (idxLinha >= lTamanhoMatriz / 3 && idxColuna >= lTamanhoMatriz / 3
						 && idxLinha < lTamanhoMatriz - lTamanhoMatriz / 3
						 && idxColuna < lTamanhoMatriz - lTamanhoMatriz / 3)
					aValores[idxLinha][idxColuna] = 1;
				else if (idxColuna + idxLinha == lTamanhoMatriz - 1)
					aValores[idxLinha][idxColuna] = 3;
				else if (idxColuna == idxLinha)
					aValores[idxLinha][idxColuna] = 2;
				else 
					aValores[idxLinha][idxColuna] = 0;
				cout << aValores[idxLinha][idxColuna];
			}
			cout << endl;
		}
		cout << endl;
	}
	
	return 0;
}