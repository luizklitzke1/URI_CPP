#include <iostream>
#include <string>

using namespace std;

int main()
{
	unsigned long ulQuantidadeDeTestes = 0;
	cin >> ulQuantidadeDeTestes;

	while (ulQuantidadeDeTestes--)
	{
		string sEscolhaSheldon = "";
		string sEscolhaRaj = "";

		cin >> sEscolhaSheldon >> sEscolhaRaj;

		bool bVitoriaSheldon = true;
		bool bEmpate = false;

		if (sEscolhaSheldon == sEscolhaRaj)
			bEmpate = true;
		else if (sEscolhaRaj == "tesoura" &&
				(sEscolhaSheldon == "papel" || sEscolhaSheldon == "lagarto"))
				bVitoriaSheldon = false;
		else if (sEscolhaRaj == "papel" &&
			    (sEscolhaSheldon == "pedra" || sEscolhaSheldon == "spock"))
				bVitoriaSheldon = false;
		else if (sEscolhaRaj == "pedra" &&
			    (sEscolhaSheldon == "tesoura" || sEscolhaSheldon == "lagarto"))
				bVitoriaSheldon = false;
		else if (sEscolhaRaj == "lagarto" &&
			    (sEscolhaSheldon == "papel" || sEscolhaSheldon == "spock"))
				bVitoriaSheldon = false;
		else if (sEscolhaRaj == "spock" &&
			    (sEscolhaSheldon == "tesoura" || sEscolhaSheldon == "pedra"))
				bVitoriaSheldon = false;
		
		if (bEmpate)
			cout << "empate" << endl;
		else if (bVitoriaSheldon)
			cout << "rajesh" << endl;
		else
			cout << "sheldon" << endl;
	}
	
	return 0;
}