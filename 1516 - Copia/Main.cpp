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
	string sDesenhoNovo;

	long lNumeroLinhasNovo = 0;
	long lNumeroColunasNovo = 0;
	
	long lAumentoLinhas = 0;
	long lAumentoColunas = 0;

	while (true)
	{

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


		lAumentoLinhas = lNumeroLinhasNovo / lNumeroLinhas;
		lAumentoColunas = lNumeroColunasNovo / lNumeroColunas;

		for (long idxLinhaNova = 0; idxLinhaNova < lNumeroLinhasNovo; ++idxLinhaNova)
		{
			for (long idxColunaNova = 0; idxColunaNova < lNumeroColunasNovo; ++idxColunaNova)
			{
				sDesenhoNovo += aDesenhoOriginal[((idxLinhaNova / lAumentoLinhas) * (lNumeroColunas)) + (idxColunaNova / lAumentoColunas)]);
			}
			sDesenhoNovo += "\n";
			cout << sDesenhoNovo << endl;
		}
	}

    return 0;
}
