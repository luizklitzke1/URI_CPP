#include <iostream>
#include <string>

using namespace std;

int main()
{
	string sPrimeiro = "";
	string sSegundo = "";

	long lCasosTeste = 0;
	cin >> lCasosTeste;

	while (lCasosTeste--)
	{
		cin >> sPrimeiro >> sSegundo;

		if (sPrimeiro == "pedra" && sPrimeiro == sSegundo)
			cout << "Sem ganhador" << endl;
		
		else if (sPrimeiro == "papel" && sPrimeiro == sSegundo)
			cout << "Ambos venceram" << endl;
		
		else if (sPrimeiro == sSegundo)
			cout << "Aniquilacao mutua" << endl;

		else if (sPrimeiro == "pedra")
		{
			if (sSegundo == "papel")
				cout << "Jogador 1 venceu" << endl;
			else
				cout << "Jogador 2 venceu" << endl;
		}
		else if (sPrimeiro == "papel")
		{
			if (sSegundo == "pedra")
				cout << "Jogador 2 venceu" << endl;
			else 
				cout << "Jogador 2 venceu" << endl;
		}
		else if (sPrimeiro == "ataque")
			cout << "Jogador 1 venceu" << endl;
		else
			cout << "Jogador 2 venceu" << endl;


	}

	return 0;
}
