#include <iostream>

using namespace std;

const long MENOR_NUMERO_INTERVALOR = 10;
const long MAIOR_NUMERO_INTERVALOR = 20;

int main() 
{
	long lQuantidadeRepeticoes = 0;
	cin >> lQuantidadeRepeticoes;
	
	long lValorTeste = 0;
	long lQuantidadeDentro = 0;
	long lQuantidadeFora = 0;
	
	long lContadorRepeticoes = 0;
	long lContadorTestes = 0;
	while (lContadorRepeticoes < lQuantidadeRepeticoes)
	{
		cin >> lValorTeste;
		
		lContadorTestes = MENOR_NUMERO_INTERVALOR;
		while (lContadorTestes <= MAIOR_NUMERO_INTERVALOR)
		{
			if (lValorTeste == lContadorTestes)
			{
				++lQuantidadeDentro;
			}
			++lContadorTestes;
		}	
		++lContadorRepeticoes;
	}
	
	lQuantidadeFora = lQuantidadeRepeticoes - lQuantidadeDentro;
	cout << lQuantidadeDentro << " in" << endl;
	cout << lQuantidadeFora << " out" << endl;
	
    return 0;
    
}
