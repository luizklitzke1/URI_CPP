#include <iostream>
#include <string>

using namespace std;

int main()
{
	
	unsigned long ulQuantidadeDeTestes = 0;
	cin >> ulQuantidadeDeTestes;

	for (long idxTeste = 1; idxTeste <= ulQuantidadeDeTestes; ++idxTeste)
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
			    (sEscolhaSheldon == "pedra" || sEscolhaSheldon == "Spock"))
				bVitoriaSheldon = false;
		else if (sEscolhaRaj == "pedra" &&
			    (sEscolhaSheldon == "tesoura" || sEscolhaSheldon == "lagarto"))
				bVitoriaSheldon = false;
		else if (sEscolhaRaj == "lagarto" &&
			    (sEscolhaSheldon == "papel" || sEscolhaSheldon == "Spock"))
				bVitoriaSheldon = false;
		else if (sEscolhaRaj == "Spock" &&
			    (sEscolhaSheldon == "tesoura" || sEscolhaSheldon == "pedra"))
				bVitoriaSheldon = false;
		
		if (bEmpate)
			cout << "Caso #" << idxTeste << ": De novo!" << endl;
		else if (bVitoriaSheldon)
			cout << "Caso #" << idxTeste << ": Bazinga!" << endl;
		else
			cout << "Caso #" << idxTeste << ": Raj trapaceou!" << endl;
	}
	
	return 0;
}