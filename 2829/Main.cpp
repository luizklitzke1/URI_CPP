#include <cctype>
#include <iostream>
#include <cstring>
#include <cstdio>
#include <algorithm>
#include <string>

using namespace std;

const long TAMANHO_MAXIMO_VETOR = 10000;

int main() 
{
	string aPalavras[TAMANHO_MAXIMO_VETOR] = {};

	cout << aPalavras[0] << endl;

	unsigned long ulQuantidadePalavras = 0;
	cin >> ulQuantidadePalavras;

	for (long idxPalavra = 0; idxPalavra < ulQuantidadePalavras; ++idxPalavra)
	{
		cin >> aPalavras[idxPalavra];
	}

	for (long idxPalavra = 0; idxPalavra < ulQuantidadePalavras; ++idxPalavra)
	{
		for (long idxChar = 0; idxChar < aPalavras[idxPalavra].length(); ++idxChar)
		{
			if (toupper(aPalavras[idxPalavra + 1][idxChar]) > toupper(aPalavras[idxPalavra][idxChar]))
			{
				string sTemp = aPalavras[idxPalavra + 1];
				aPalavras[idxPalavra + 1] = aPalavras[idxPalavra];
				aPalavras[idxPalavra] = sTemp;
				break;
			}
			if (toupper(aPalavras[idxPalavra + 1][idxChar]) < toupper(aPalavras[idxPalavra][idxChar]))
			{
				string sTemp = aPalavras[idxPalavra + 1];
				aPalavras[idxPalavra + 1] = aPalavras[idxPalavra];
				aPalavras[idxPalavra] = sTemp;
				break;
			}

		}
	}
	

	cout << "--------------------" << endl;
	for (long idxPalavra = 0; idxPalavra < ulQuantidadePalavras; ++idxPalavra)
		cout << aPalavras[idxPalavra] << endl;

	cout << "--------------------" << endl;

	for (long idxPalavra = 0; idxPalavra < ulQuantidadePalavras - 1; ++idxPalavra)
	{
		bool bDesempatar = true;

		for (long idxChar = 0; idxChar < aPalavras[idxPalavra].length(); ++idxChar)
		{
			if (idxChar < aPalavras[idxPalavra + 1].length())
			{
				if (toupper(aPalavras[idxPalavra + 1][idxChar]) != toupper(aPalavras[idxPalavra][idxChar]) )
				{
					bDesempatar = false;
					break;
				}
			}
			
		}
		cout << bDesempatar << endl;

		if (bDesempatar)
		{
			cout << aPalavras[idxPalavra] << " desempatar " <<  aPalavras[idxPalavra + 1] << endl;
			bool bPrimeiraMenor = false;

			for (long idxChar = 0; idxChar < aPalavras[idxPalavra].length() - 1; ++idxChar)
			{
				if (aPalavras[idxPalavra][idxChar] < aPalavras[idxPalavra + 1][idxChar])
					bPrimeiraMenor = true;
			}

			if (!bPrimeiraMenor)
			{
				string sTemp = aPalavras[idxPalavra + 1];
				aPalavras[idxPalavra + 1] = aPalavras[idxPalavra];
				aPalavras[idxPalavra] = sTemp;
			}

		}
	}
	cout << endl <<  "--------------------" << endl;
	for (long idxPalavra = 0; idxPalavra < ulQuantidadePalavras; ++idxPalavra)
		cout << aPalavras[idxPalavra] << endl;



    return 0;
}
