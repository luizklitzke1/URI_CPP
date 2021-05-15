#include <iostream>

using namespace std;

const long QUANTIDADE_DE_TESTES = 10;

int main()
{
	long aValores[QUANTIDADE_DE_TESTES] = {0};
	long lValorDeTeste = 0;
	for (long idxTeste = 0; idxTeste <  QUANTIDADE_DE_TESTES; ++idxTeste)
	{
		cin >> lValorDeTeste;
		
		if (lValorDeTeste > 0)
		{
			aValores[idxTeste] = lValorDeTeste;
		}
		else
		{
			aValores[idxTeste] = 1;
		}
		cout << "X[" << idxTeste << "] = " << aValores[idxTeste] << endl;
	}
    return 0;
}
