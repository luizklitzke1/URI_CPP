#include <iostream>
#include <map>

using namespace std;

int main()
{
	int entradas, nesc, valor, x, possuem;
	char cRuna;

	map<char, long> mRunas;

	cin >> entradas >> nesc;

	while (entradas--)
	{
		cin >> cRuna >> valor;

		mRunas[cRuna] = valor;
	}

	cin >> x;

	possuem = 0;

	while (x--)
	{
		cin >> cRuna;

		possuem += mRunas[cRuna];
	}

	cout << possuem << endl;

	if (possuem < nesc)
		cout << "My precioooous" << endl;
	else
		cout << "You shall pass!" << endl;

	return 0;
}