#include <iostream>
#include <string>

using namespace std;

const long QUANTIDADE_LETRAS = 26;
const long MENOR_ASC = 97;
const long MAIOR_ASC = 122;

int main()
{
	long lQuantidadeTestes = 0;
	cin >> lQuantidadeTestes;
	cin.ignore();
	
	while (lQuantidadeTestes--)
	{
		int aLetras[QUANTIDADE_LETRAS] = {0};
		string sFrase = "";
		getline(cin, sFrase);
		
		long lMaisFrequente = 0;
		
		for (long idxChar = 0; idxChar < sFrase.length(); ++idxChar)
		{
			if ((int)tolower(sFrase[idxChar]) >= MENOR_ASC && (int)tolower(sFrase[idxChar]) <= MAIOR_ASC)
			{
				++aLetras[(int)tolower(sFrase[idxChar]) - MENOR_ASC];
				if (aLetras[(int)tolower(sFrase[idxChar]) - MENOR_ASC] > lMaisFrequente)
					lMaisFrequente = aLetras[(int)tolower(sFrase[idxChar]) - MENOR_ASC];
			}
		}
		
		for (long idx = 0; idx < QUANTIDADE_LETRAS; ++idx)
		{
			if (aLetras[idx] == lMaisFrequente)
				cout << (char)(idx + MENOR_ASC);
		}
		cout << endl;
	}
	
	return 0;
}