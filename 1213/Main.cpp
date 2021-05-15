#include <iostream>

using namespace std;

int main()
{
	unsigned long long ullValorInicial = 0;
	unsigned long ulQuantidadeCasas = 0;
	unsigned long long ullValorTeste = 0;

	while (cin >> ullValorInicial)
	{
		ulQuantidadeCasas = 1;
		ullValorTeste = 1;

		while (ullValorTeste % ullValorInicial != 0) 
		{
			ullValorTeste = (10 * ullValorTeste + 1) % ullValorInicial;
			++ulQuantidadeCasas;
		}

		cout << ulQuantidadeCasas << endl;
	}

	return 0;
}