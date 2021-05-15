#include <iostream>
#include <string>

using namespace std;

const long MAIOR_DIF_1 = 3;
const long DIFICULDADE_1 = 250;

const long MAIOR_DIF_2 = 5;
const long DIFICULDADE_2 = 500;

const long MENOR_DIF_3 = 6;
const long DIFICULDADE_3 = 1000;


int main()
{
	string sLinha = "";
	
	while (getline(cin,sLinha))
	{
		long lQuantidadePalavras = 0;
		long lTotalLetras = 0;
		
		long lLetras = 0;
		bool bPalavraValida = 1;

		
		for (long idxChar = 0; idxChar < sLinha.length(); ++idxChar)
		{
			if ( bPalavraValida &&
				(sLinha[idxChar] > 64 && (int)sLinha[idxChar] < 91)
				|| (sLinha[idxChar] > 96 && (int)sLinha[idxChar] < 123))
			{
				++lLetras;
				if (idxChar == sLinha.length() - 1 && bPalavraValida)
				{
					lTotalLetras += lLetras;
					++lQuantidadePalavras;
				}
				
			}
			else if ((sLinha[idxChar] == ' ') ||
					(sLinha[idxChar] == '.' && idxChar == sLinha.length() - 1) ||
					(sLinha[idxChar] == '.' && sLinha[idxChar + 1] == ' '))
			{
				if (bPalavraValida && (lLetras > 0))
				{
					lTotalLetras += lLetras;
					++lQuantidadePalavras;
				}
				
				else
					bPalavraValida = true;
				lLetras = 0;
				
			}
			else
			{
				bPalavraValida = false;
			}
		
		}
		
		if (lQuantidadePalavras == 0)
			lQuantidadePalavras = 1;
		
		long lMediaComprimento = lTotalLetras / lQuantidadePalavras;

		if (lMediaComprimento <= MAIOR_DIF_1)
			cout << DIFICULDADE_1 << endl;
		else if (lMediaComprimento <= MAIOR_DIF_2)
			cout << DIFICULDADE_2 << endl;
		else
			cout << DIFICULDADE_3 << endl;
	}
	
	return 0;
}