#include <iostream>

using namespace std;

const long NUMEROS_ANTES_DO_PUM = 3;

int main()
{
	long lQuantidaDeLinhas = 0;
	cin >> lQuantidaDeLinhas;
	
	long lNumeroSequencia = 1;
	
	for (long idxLinha = 0; idxLinha < lQuantidaDeLinhas; ++idxLinha)
	{
		for (long idxNumero = 0; idxNumero < NUMEROS_ANTES_DO_PUM; ++idxNumero)
		{
			cout << lNumeroSequencia << " ";
			++lNumeroSequencia;
		}
		++lNumeroSequencia;
		cout << "PUM" << endl;
	}
	
    return 0;
}