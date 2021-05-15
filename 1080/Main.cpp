#include <iostream>

using namespace std;

const long 	QUANTIDADE_DE_NUMEROS = 100;

int main()
{
	
	long lMaiorInteiro = 0;
	long lPosicaoMaiorInteiro = 0;
	
	long lNovoNumero = 0;
	
	for (long i = 1; i <= QUANTIDADE_DE_NUMEROS; i ++)
	{
		
		cin >> lNovoNumero;
		
		if (lNovoNumero > lMaiorInteiro)
		{
			lMaiorInteiro = lNovoNumero;
			lPosicaoMaiorInteiro = i;
		}
		
	}
	
	cout << lMaiorInteiro << endl;
	cout << lPosicaoMaiorInteiro << endl;
	
	return 0;
}
