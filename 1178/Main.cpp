#include <iostream>
#include <cmath>

using namespace std;

const long TAMANHO_VETOR = 10;

int main()
{
	double long aValores[TAMANHO_VETOR] = {0};
	double long dValorInicial = 0;
	
	cin >> dValorInicial;

	for (long idxValor = 0; idxValor < TAMANHO_VETOR; ++ idxValor)
	{
		aValores[idxValor] = dValorInicial / (pow(2, idxValor));
		cout.precision(4);
		cout << fixed << "N[" << idxValor << "] = " << aValores[idxValor] << endl;
	}

    return 0;
}