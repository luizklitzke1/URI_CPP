#include <iostream>

using namespace std;

const long QUANTIDADE_CASAS_DECIMAIS = 2;
const double TAXAS1 = 8;
const double TAXAS2 = 18;
const double TAXAS3 = 28;


int main() 
{

    double dSalario;

    cin >> dSalario;
	
	if (dSalario <= 2000)
	{
		cout << "Isento" << endl;
	}
	else
	{

		double dTaxas = 0;
		
		if (dSalario <= 3000)
		{
			dSalario -= 2000;
			
			dTaxas = dSalario * (TAXAS1 / 100);
		}
		else
		{
			if (dSalario <= 4500)
			{
				
				dSalario -= 3000;
				
				dTaxas = 1000 * (TAXAS1 / 100) + dSalario * (TAXAS2 / 100);
				
			}
			else
			{
				
				dSalario -= 4500;
				
				dTaxas = 1000 * (TAXAS1 / 100) + 1500 * (TAXAS2 / 100) + dSalario * (TAXAS3 / 100);

			}
		}
		
		cout.precision(QUANTIDADE_CASAS_DECIMAIS);
		cout << fixed << "R$ " << dTaxas << endl;
		
	}
	
    return 0;
    
}
