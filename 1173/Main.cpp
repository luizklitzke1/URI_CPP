#include <iostream>

using namespace std;

const long TAMANHO_VETOR = 10;

int main()
{
	long aValores[TAMANHO_VETOR] = {0};
	long lValorIinicial = 0;
	
	cin >> lValorIinicial;
	aValores[0] = lValorIinicial;
	for (long idxValor = 0; idxValor < TAMANHO_VETOR; ++idxValor)
	{
		if (idxValor == 0)
			aValores[idxValor] = lValorIinicial;
		else
			aValores[idxValor] = aValores[idxValor - 1] * 2;
		cout << "N[" << idxValor << "] = " << aValores[idxValor] << endl;
	}
    return 0;
}
