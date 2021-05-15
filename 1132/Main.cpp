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
	
	long lSomaMultiplos = 0;
	for (lMenorValor; lMenorValor <= lMaiorValor; ++lMenorValor)
	{
		if (lMenorValor % 13 != 0)
		{
			lSomaMultiplos += lMenorValor;
		}
	}
	
	cout << lSomaMultiplos << endl;
    return 0;
}