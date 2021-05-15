#include <iostream>

using namespace std;
int main()
{
	long lValorX = 0;
	long lValorY = 0;
	
	cin >> lValorX >> lValorY;
	
	long lMaiorValor = 0;
	long lMenorValor = 0;
	if (lValorX > lValorY)
	{
		lMaiorValor = lValorX;
		lMenorValor = lValorY;
	}
	else
	{
		lMaiorValor = lValorY;
		lMenorValor = lValorX;
	}
	
	for (++lMenorValor; lMenorValor < lMaiorValor; ++lMenorValor)
	{
		if (lMenorValor % 5 == 2 || lMenorValor % 5 == 3)
		{
			cout << lMenorValor << endl;
		}
	}

    return 0;
}