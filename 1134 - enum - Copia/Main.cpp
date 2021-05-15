#include <iostream>

using namespace std;

enum ECodigosCombustivel
{
	eAlcool = 1,
	eGasolina = 2,
	eDiesel = 3,
	eCodigoFim = 4,
}

int main()
{
	long lQuantidadeAlcool = 0;
	long lQuantidadeGasolina = 0;
	long lQuantidadeDiesel = 0;
	
	long lValorInformado = 0;
	
	bool bContinuar = true; 
	while (bContinuar)
	{
		cin >> lValorInformado;
		
		switch (lValorInformado)
		{
			case ECodigosCombustivel::eAlcool:
				++lQuantidadeAlcool;
				break;
			
			case ECodigosCombustivel::eGasolina:
				++lQuantidadeGasolina;
				break;
				
			case ECodigosCombustivel::eDiesel:
				++lQuantidadeDiesel;
				break;
				
			case ECodigosCombustivel::eCodigoFim:
				bContinuar = false;
				break;
		}
	}
	
	cout << "MUITO OBRIGADO" << endl;
	cout << "Alcool: " << lQuantidadeAlcool << endl;
	cout << "Gasolina: " << lQuantidadeGasolina << endl;
	cout << "Diesel: " << lQuantidadeDiesel << endl;
	
    return 0;
}