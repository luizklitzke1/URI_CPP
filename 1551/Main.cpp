#include <iostream>
#include <string>

using namespace std;

const long QUANTIDADE_LETRAS = 26;
const long MENOR_ASC = 97;
const long MAIOR_ASC = 122;

int main()
{
	long lQuantidadeTestes = 0;

	long  lPresentes = 0;
	string sFrase = "";

	cin >> lQuantidadeTestes;
	cin.ignore();
	
	while (lQuantidadeTestes--)
	{
		int aLetras[QUANTIDADE_LETRAS] = {0};
		sFrase = "";
		getline(cin, sFrase);

		lPresentes = 0;
		
		for (long idxChar = 0; idxChar < sFrase.length(); ++idxChar)
		{
			if ((sFrase[idxChar]) >= MENOR_ASC && (sFrase[idxChar]) <= MAIOR_ASC)
				++aLetras[sFrase[idxChar] - MENOR_ASC];
		}
		
		for (long idx = 0; idx < QUANTIDADE_LETRAS; ++idx)
		{
			if (aLetras[idx])
				++lPresentes;
		}

		if (lPresentes == QUANTIDADE_LETRAS)
			cout << "frase completa" << endl;
		else if (lPresentes >= QUANTIDADE_LETRAS / 2)
			cout << "frase quase completa" << endl;
		else
			cout << "frase mal elaborada" << endl;
	}
	
	return 0;
}