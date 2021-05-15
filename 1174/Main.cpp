#include <iostream>

using namespace std;

const long TAMANHO_VETOR = 100;

int main()
{
	long aValores[TAMANHO_VETOR] = {0};
	double dValorInformado = 0;
	
	for (long idxValor = 0; idxValor < TAMANHO_VETOR; ++idxValor)
	{
		cin >> dValorInformado;
		aValores[idxValor] = dValorInformado;
		
		if (dValorInformado <= 10)
		{
			cout.precision(1);
			cout << fixed << "A[" << idxValor << "] = " << dValorInformado << endl;
		}
	}
    return 0;
}
