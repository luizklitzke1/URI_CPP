#include <iostream>

using namespace std;

int main()
{
	long lValorX = 0;
	
	while (true)
	{
		cin >> lValorX;
		if (lValorX == 0)
		{
			break;
		}
		
		for (long idxNumero = 1; idxNumero <= lValorX; ++idxNumero)
		{
			if (idxNumero != lValorX)
			{
				cout << idxNumero << " ";
			}
			else
			{
				cout << idxNumero << endl; 
			};
		}
	}
	
	return 0;
}