#include <iostream>

using namespace std;

const long CODIGO_ALCOOL   = 1;
const long CODIGO_GASOLINA = 2;
const long CODIGO_DIESEL   = 3;
const long CODIGO_FIM      = 4;

int main()
{
	long lQuantidadeAlcool = 0;
	long lQuantidadeGasolina = 0;
	long lQuantidadeDiesel = 0;
	
	long lValorInformado = 0;

	while (lValorInformado != CODIGO_FIM)
	{
		cin >> lValorInformado;
		
		switch (lValorInformado)
		{
			case CODIGO_ALCOOL:
				++lQuantidadeAlcool;
				break;
			
			case CODIGO_GASOLINA:
				++lQuantidadeGasolina;
				break;
				
			case CODIGO_DIESEL:
				++lQuantidadeDiesel;
				break;
				
		}
	}
	
	cout << "MUITO OBRIGADO" << endl;
	cout << "Alcool: " << lQuantidadeAlcool << endl;
	cout << "Gasolina: " << lQuantidadeGasolina << endl;
	cout << "Diesel: " << lQuantidadeDiesel << endl;
	
    return 0;
}