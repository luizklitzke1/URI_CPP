#include <iostream>

using namespace std;

int main()
{
	long lCerta = 0;
	cin >> lCerta;

	long lTotal = 0;
	long lEntrada = 0;

	long lQuantidade = 5;

	while (lQuantidade--)
	{
		cin >> lEntrada;

		if (lEntrada == lCerta)
			++lTotal;
	}

	cout << lTotal << endl;

	return 0;
}