#include <iostream>

using namespace std;

int main()
{
	long lValorObjetivo = 0;
	long lValorMaximoLinha = 0;
	cin >> lValorMaximoLinha >> lValorObjetivo;
	
	long lValorInicial = 1;
	
	for (long idxLinha = 0; idxLinha < (lValorObjetivo / lValorMaximoLinha); ++idxLinha)
	{
		for (long idxColuna = 0; idxColuna < lValorMaximoLinha; ++idxColuna)
		{
			cout << lValorInicial;
			if (idxColuna != lValorMaximoLinha -1)
			{
				cout << " ";
				++lValorInicial;
			}
			else
			{
				cout << endl;
				++lValorInicial;
			} 
		}	
	}

	if (lValorInicial - 1 != lValorObjetivo)
	{

		while (lValorInicial < lValorObjetivo)
		{
			cout << lValorInicial << "a";
			++ lValorInicial;
		}
		cout << lValorInicial;
	}
	
	return 0;
}