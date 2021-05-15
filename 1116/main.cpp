#include <iostream>

using namespace std;

const long 	QUANTIDADE_CASAS_DECIMAIS = 1;

int main() 
{

	long lValorN = 0;

	cin >> lValorN;

    double dValorX = 0;
	double dValorY = 0;

	cout.precision(QUANTIDADE_CASAS_DECIMAIS);

	for (long i = 0; i < lValorN; i ++)
	{
		cin >> dValorX >> dValorY;
	
		if (dValorY == 0)
		{
			cout << "divisao impossivel" << endl;
		}
		else
		{
			cout << fixed << dValorX / dValorY << endl;
		}
	}
	
    return 0;
    
}
