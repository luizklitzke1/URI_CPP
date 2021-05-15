#include <iostream>

using namespace std;

const long QUANTIDADE_CASAS_DECIMAIS = 2;

int main() 
{

    long lCodigoItem = 0;
	long lQuantidade = 0;

    cin >> lCodigoItem >> lQuantidade;
	
	double dValorItem = 0;
	
	switch (lCodigoItem)
	{
		
		case 1:
			dValorItem = 4;
			break;
		
		case 2:
			dValorItem = 4.5;
			break;
		
		case 3:
			dValorItem = 5;
			break;
		
		case 4:
			dValorItem = 2;
			break;
		
		case 5:
			dValorItem = 1.5;
			break;
		
	}
		cout.precision(QUANTIDADE_CASAS_DECIMAIS);
		cout << fixed << "Total: R$ " << lQuantidade * dValorItem << endl;
		
	
    return 0;
    
}
