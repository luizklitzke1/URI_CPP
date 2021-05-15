#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	long lQuantidadeDeCasos = 0;
	cin >> lQuantidadeDeCasos;
	cin.ignore();

	while (lQuantidadeDeCasos--)
	{
		string sLinha = "";

		getline(cin,sLinha);

		vector <string> vPalavras = {}; 

		string sPalavra = "";

		long lQuantidadePalavras = 0;

		for (long idxChar = 0; idxChar < sLinha.length(); ++idxChar)
		{
			if (sLinha[idxChar] != ' ')
				sPalavra += sLinha[idxChar];
			if (sLinha[idxChar] == ' ' || idxChar == sLinha.length() - 1)
			{
				vPalavras.push_back(sPalavra);
				++lQuantidadePalavras;
				sPalavra = "";
			}
		}

		for (long idxPalavra = 0; idxPalavra < lQuantidadePalavras - 1; ++idxPalavra)
		{
			for (long idxPalavra2 = 0; idxPalavra2 < lQuantidadePalavras - 1 - idxPalavra; ++idxPalavra2)
			{

				if (vPalavras[idxPalavra2].length() < vPalavras[idxPalavra2 + 1].length() )
				{
					swap(vPalavras[idxPalavra2], vPalavras[idxPalavra2 + 1]);
				}
				
			}
		}

		for (long idxPalavra = 0; idxPalavra < lQuantidadePalavras; ++idxPalavra)
		{
			if (idxPalavra < lQuantidadePalavras - 1)
				cout << vPalavras[idxPalavra] << " ";
			else
				cout << vPalavras[idxPalavra] << endl;
		}
	}
	
	return 0;
}