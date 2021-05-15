#include <iostream>
#include <string>

using namespace std;

const string RESPOSTA_CERTA = "Ciencia da Computacao";

int main()
{
	string sPrimeiroNome;
	string sPrimeiraEscolha;
	
	string sSegundoNome;
	string sSegundaEscolha;
	
	long lPrimeiroValor = 0;
	long lSegundoValor = 0;
	
    long lQuantidadeOpcoes = 0;
	cin >> lQuantidadeOpcoes;
	
	while (lQuantidadeOpcoes--)
	{
		cin >> sPrimeiroNome >> sPrimeiraEscolha >> sSegundoNome >> sSegundaEscolha;
		cin >> lPrimeiroValor >> lSegundoValor;
		
		if ((lPrimeiroValor + lSegundoValor) % 2 == 0)
		{
			if (sPrimeiraEscolha == "PAR")
				cout << sPrimeiroNome << endl;
			else
				cout << sSegundoNome << endl;
		}
		else
		{
			if (sPrimeiraEscolha == "IMPAR")
				cout << sPrimeiroNome << endl;
			else
				cout << sSegundoNome << endl;
		}
	}

    return 0;
}