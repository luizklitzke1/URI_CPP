#include <iostream>

using namespace std;

const long TAMANHO_VETOR = 20;

int main()
{
	long aValores[TAMANHO_VETOR] = {0};
	double dValorInformado = 0;
	
	for (long idxValor = 0; idxValor < TAMANHO_VETOR; ++idxValor)
	{
		cin >> dValorInformado;
		aValores[TAMANHO_VETOR - 1 - idxValor] = dValorInformado;
	}
	
	for (long idxValor = 0; idxValor < TAMANHO_VETOR; ++idxValor)
	{
		cout << fixed << "N[" << idxValor << "] = " << aValores[idxValor] << endl;
	}
	
    return 0;
}
