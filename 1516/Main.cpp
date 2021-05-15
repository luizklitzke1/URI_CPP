#include <iostream>
#include <string>
#include <vector>
#include <stdio.h>

using namespace std;

int main()
{
	
	long lNumeroLinhas = 0;
	long lNumeroColunas = 0;
	cin >> lNumeroLinhas >> lNumeroColunas;

	std::vector<char> aDesenhoOriginal;
	string sLinhaString;
	for (long idxLinha = 0; idxLinha < lNumeroLinhas; ++idxLinha)
	{
		cin >> sLinhaString;
		for (long idxColuna = 0; idxColuna < lNumeroColunas; ++idxColuna)
		{
			aDesenhoOriginal.push_back(sLinhaString[idxColuna]);
		}

	}

	long lNumeroLinhasNovo = 0;
	long lNumeroColunasNovo = 0;
	
	long lAumentoLinhas = 0;
	long lAumentoColunas = 0;

	while (true)
	{
		cin >> lNumeroLinhasNovo >> lNumeroColunasNovo;

		if (lNumeroLinhasNovo <= 100 && lNumeroColunasNovo <= 100)
		{
			if (lNumeroLinhasNovo == 0 && lNumeroLinhasNovo == lNumeroColunasNovo)
			{
				break;
			}

			lAumentoLinhas = lNumeroLinhasNovo / lNumeroLinhas;
			lAumentoColunas = lNumeroColunasNovo / lNumeroColunas;

			for (long idxLinha = 0; idxLinha < lNumeroLinhas; ++idxLinha )
			{
				for (long idxLinhaNova = 0; idxLinhaNova < lAumentoLinhas; ++idxLinhaNova)
				{
					for (long idxColuna = 0; idxColuna < lNumeroColunas; ++idxColuna)
					{
						for (long idxColunaNova = 0; idxColunaNova < lAumentoColunas; ++idxColunaNova)
						{
							printf("%c", aDesenhoOriginal[idxLinha * lNumeroColunas + idxColuna]);
						}
					}
					printf("\n");
				}
			}
			printf("\n");

		}
		else
		{
			break;
		}
		
	}

    return 0;
}
