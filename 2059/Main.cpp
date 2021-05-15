#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	bool bPar = 0;

	long lEscolha1 = 0;
	long lEscolha2 = 0;

	bool bRoubo = 0;
	bool bAcuso = 0;

	bool bVitoria1 = 1;

	cin >> bPar >> lEscolha1 >> lEscolha2 >> bRoubo >> bAcuso;

	if (bRoubo && bAcuso)
		bVitoria1 = 0;
	else if (bRoubo && !bAcuso)
		bVitoria1 = 1;
	else if (!bRoubo && bAcuso)
		bVitoria1 = 1;
	else 
	{
		if (bPar)
		{
			if ((lEscolha1 + lEscolha2) % 2 != 0)
				bVitoria1 = 0;
		}
		else
		{
			if ((lEscolha1 + lEscolha2) % 2 == 0)
				bVitoria1 = 0;
		}

	}

	if (bVitoria1)
		cout << "Jogador 1 ganha!" << endl;
	else
		cout << "Jogador 2 ganha!" << endl;

	return 0;
}