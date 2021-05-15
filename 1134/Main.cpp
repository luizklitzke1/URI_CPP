#include <iostream>

using namespace std;

enum EOpcoesMenu
{
	eAlcool = 1,
	eGasolina,
	eDiesel,
	eParada,
};

int main()
{
	long lCodigo = 0;
	
	unsigned long ulTotalAlcool = 0;
	unsigned long ulTotalGasolina = 0;
	unsigned long ulTotalDiesel = 0;
	
	while (cin >> lCodigo && lCodigo != EOpcoesMenu::eParada)
	{
		switch (lCodigo)
		{
			case EOpcoesMenu::eAlcool:
				++ulTotalAlcool;
				break;
				
			case EOpcoesMenu::eGasolina:
				++ulTotalGasolina;
				break;
			
			case EOpcoesMenu::eDiesel:
				++ulTotalDiesel;
				break;
		}
	}
	
	cout << "MUITO OBRIGADO" << endl;
	
	cout << "Alcool: " << ulTotalAlcool << endl;
	cout << "Gasolina: " << ulTotalGasolina << endl;
	cout << "Diesel: " << ulTotalDiesel << endl;
	
	return 0;
}