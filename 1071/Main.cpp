#include <iostream>

using namespace std;

int main() 
{

	long lValorX = 0;
	long lValorY = 0;
	
	cin >> lValorX >> lValorY;
	
	long lSomaImpares = 0;
	
	if (lValorX > lValorY)
	{
		for (lValorY ++; lValorY < lValorX; lValorY ++)
		{
			
			if (lValorY % 2 != 0)
			{
				lSomaImpares += lValorY;
			}
		}
	}
	else
	{
		for (lValorX ++; lValorX < lValorY; lValorX --)
		{
			if (lValorX % 2 != 0)
			{
				lSomaImpares += lValorX;
			}
		}
	}
	
	cout << lSomaImpares << endl;
	
    return 0;
    
}
