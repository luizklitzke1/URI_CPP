#include <iostream>

using namespace std;

int main() 
{

	long lQuantidadePares = 0;
	
	for (int i = 0; i <= 4 ; i ++)
	{
		
		long lValor = 0;
		
		cin >> lValor;
		
		if (lValor % 2 == 0)
		{
			lQuantidadePares ++;
		}
		
	}
	
	cout << lQuantidadePares << " valores pares" << endl;
	
    return 0;
    
}
