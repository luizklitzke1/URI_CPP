#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	long lNumeroLinhas = 0;
	long lNumeroColunas = 0;

	std::vector<char> aDesenhoOriginal;
	string sLinhaString;

	long lNumeroLinhasNovo = 0;
	long lNumeroColunasNovo = 0;
	
	long lProporcaoLinhas = 0;
	long lProporcaoColunas = 0;

	while (true)
	{
		aDesenhoOriginal = {};
		sLinhaString = "";

		cin >> lNumeroLinhas >> lNumeroColunas;
		
		if (lNumeroLinhas == 0 && lNumeroLinhas == lNumeroColunas)
		{
			break;
		}

		for (long idxLinha = 0; idxLinha < lNumeroLinhas; ++idxLinha)
		{
			cin >> sLinhaString;
			for (long idxColuna = 0; idxColuna < lNumeroColunas; ++idxColuna)
			{
				aDesenhoOriginal.push_back(sLinhaString[idxColuna]);
			}
		}

		cin >> lNumeroLinhasNovo >> lNumeroColunasNovo;
		lProporcaoLinhas = lNumeroLinhasNovo / lNumeroLinhas;
		lProporcaoColunas = lNumeroColunasNovo / lNumeroColunas;

		for (long idxLinhaNova = 0; idxLinhaNova < lNumeroLinhasNovo; ++idxLinhaNova)
		{
			for (long idxColunaNova = 0; idxColunaNova < lNumeroColunasNovo; ++idxColunaNova)
			{
				printf("%c", aDesenhoOriginal[((idxLinhaNova / lProporcaoLinhas) * (lNumeroColunas)) + (idxColunaNova / lProporcaoColunas)]);
			}
			printf("\n");
		}

		printf("\n");
	}

    return 0;
}