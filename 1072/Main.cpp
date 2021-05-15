#include <iostream>

using namespace std;

int main() 
{

	long lValorN = 0;
	
	cin >> lValorN;
	
	long lQuantidadeDentro = 0;
	long lQuantidadeFora = 0;
	
	for (long i = 0; i < lValorN; i ++)
	{
		long lValorI;
		cin >> lValorI;
		
		for (long i2 = 10; i2 <= 20; i2 ++)
		{
			if (lValorI == i2)
			{
				lQuantidadeDentro ++;
			}
		}
		
	}
	
	lQuantidadeFora = lValorN - lQuantidadeDentro;
	cout << lQuantidadeDentro << " in" << endl;
	cout << lQuantidadeFora << " out" << endl;
	
    return 0;
    
}
