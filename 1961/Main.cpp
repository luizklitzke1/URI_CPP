#include <iostream>
#include <cmath>

using namespace std;

const long TAMANHO_VETOR = 100;

int main()
{
	long aCanos[TAMANHO_VETOR] = {0};

	long lTamanhoPulo = 0;
	long lNumeroCanos = 0;
	cin >> lTamanhoPulo >> lNumeroCanos;

	for (long idx = 0; idx < lNumeroCanos; ++idx)
		cin >> aCanos[idx];

	for (long idxCano = 0; idxCano < lNumeroCanos; ++idxCano)
	{
		if (idxCano == lNumeroCanos - 1)
		{
			cout << "YOU WIN" << endl;
			break;
		}
		if (abs(aCanos[idxCano + 1] - aCanos[idxCano ]) > lTamanhoPulo)
		{
			cout << "GAME OVER" << endl;
			break;
		}
	}

    return 0;
}
