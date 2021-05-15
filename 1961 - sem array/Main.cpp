#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	long lAlturaPulo = 0;
	long lQuantidadeCanos = 0;
	cin >> lAlturaPulo >> lQuantidadeCanos;
	
	long lAlturaAnterior = 0;
	long lAlturaAtual = 0;
	
	for (long idxCano = 0; idxCano < lQuantidadeCanos; ++idxCano)
	{
		cin >> lAlturaAtual;
		
		if (idxCano == 0)
			lAlturaAnterior = lAlturaAtual;
		
		if (abs(lAlturaAnterior - lAlturaAtual) > lAlturaPulo)
		{
			cout << "GAME OVER" << endl;
			break;
		}
		else if (idxCano == lQuantidadeCanos - 1)
			cout << "YOU WIN" << endl;
		else
			lAlturaAnterior = lAlturaAtual;
		
	}
		
    return 0;
}
