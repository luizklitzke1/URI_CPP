#include <iostream>

using namespace std;

const long QUANTIDADE_CASAS_DECIMAIS = 2;

int main() 
{

    long lCodigoItem = 0;
	long lQuantidade = 0;

    cin >> lCodigoItem >> lQuantidade;
	
	double dValorItem = 0;
	
	if (lCodigoItem == 1)
	{
		dValorItem = 4;
	}
	else if (lCodigoItem == 2)
	{
		dValorItem = 4.5;
	}
	else if (lCodigoItem == 3)
	{
		dValorItem = 5;
	}
	else if (lCodigoItem == 4)
	{
		dValorItem = 2;
	}
	else if (lCodigoItem == 5)
	{
		dValorItem = 1.5;
	}
	
	cout.precision(QUANTIDADE_CASAS_DECIMAIS);
	cout << fixed << "Total: R$ " << lQuantidade * dValorItem << endl;
		
	
    return 0;
    
}
