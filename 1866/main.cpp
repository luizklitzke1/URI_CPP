#include <iostream>

using namespace std;

int main()
{
	long lQuantidadeTestes = 0;
	cin >> lQuantidadeTestes;

	while (lQuantidadeTestes--)
	{
		long lQuantidadeDeTestes = 0;

		cin >> lQuantidadeDeTestes;

		long lSoma = 0;

		for (long idxTeste = 0; idxTeste < lQuantidadeDeTestes; ++idxTeste)
		{
			if (idxTeste % 2 == 0)
				++lSoma;
			else
				--lSoma;
		}

		cout << lSoma << endl;
	}

	return 0;
}
