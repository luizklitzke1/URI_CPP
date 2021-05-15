#include <iostream>

using namespace std;

const long QUANTIDADE_DE_ENTRADAS = 15;
const long TAMANHO_VETORES		  = 5;

int main()
{
	long aValoresPares[TAMANHO_VETORES] = {0};
	long lQuantidadePares = 0;
	
	long  aValoresImpares[TAMANHO_VETORES] = {0};
	long lQuantidadeImpares = 0;
	
	long lValorTeste = 0;

	for (long idxValor = 0; idxValor < QUANTIDADE_DE_ENTRADAS; ++ idxValor)
	{
		cin >> lValorTeste;
		if (lValorTeste % 2 == 0)
		{
			if (lQuantidadePares == TAMANHO_VETORES)
			{
				lQuantidadePares = 0;
				for (long idxValor = 0; idxValor < TAMANHO_VETORES; ++idxValor)
				{
					cout << "par[" << idxValor << "] = " << aValoresPares[idxValor] << endl;
				}
			}
			aValoresPares[lQuantidadePares] = lValorTeste;
			++lQuantidadePares;
		}
		else
		{
			if (lQuantidadeImpares == TAMANHO_VETORES)
			{
				lQuantidadeImpares = 0;
				for (long idxValor = 0; idxValor < TAMANHO_VETORES; ++idxValor)
				{
					cout << "impar[" << idxValor << "] = " << aValoresImpares[idxValor] << endl;
				}
			}
			aValoresImpares[lQuantidadeImpares] = lValorTeste;
			++lQuantidadeImpares;
		}
			
	}
	if (lQuantidadeImpares != 4)
	{
		for (long idxValor = 0; idxValor < lQuantidadeImpares; ++idxValor)
		{
			cout << "impar[" << idxValor << "] = " << aValoresImpares[idxValor] << endl;
		}
	}
	
	if (lQuantidadePares != 4)
	{
		for (long idxValor = 0; idxValor < lQuantidadePares; ++idxValor)
		{
			cout << "par[" << idxValor << "] = " << aValoresPares[idxValor] << endl;
		}
	}
	
	
	

    return 0;
}