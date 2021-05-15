#include <iostream>

using namespace std;

const long PESO1 = 2;
const long PESO2 = 3;
const long PESO3 = 5;

const long QUANTIDADE_CASAS_DECIMAIS = 1;

int main() 
{

	long lValorN = 0;
	
	cin >> lValorN;
	
	double dNota1 = 0;
	double dNota2 = 0;
	double dNota3 = 0;
	double dMediaPonderada = 0;
	
	cout.precision(QUANTIDADE_CASAS_DECIMAIS);
	
	for (long i = 0; i < lValorN  ; i ++)
	{
		
		cin >> dNota1 >> dNota2 >> dNota3;
		
		dMediaPonderada = ((dNota1 * PESO1) + (dNota2 * PESO2) + (dNota3 * PESO3)) 
							/ (PESO1 + PESO2 + PESO3);
		
		cout << fixed << dMediaPonderada << endl;
		
	}
	
    return 0;
    
}
