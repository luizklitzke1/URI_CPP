#include <iostream>
#include <string>

using namespace std;

int main()
{
	string sEntrada;
	double dSoma = 0;
	long lTotal = 0;


	cin >> sEntrada;

	for (long i = 0; i < sEntrada.length(); ++i)
	{
		if (i + 1 <= sEntrada.length() - 1)
		{
			if (((sEntrada[i] - '0') * 10) + sEntrada[i + 1] - '0' > 10)
				dSoma += sEntrada[i] - '0';
			else
			{
				dSoma += ((sEntrada[i] - '0') * 10) + (sEntrada[i + 1] - '0');
				++i;
			}
		}
		else
			dSoma += sEntrada[i] - '0';
		

		++lTotal;
	}

	cout.precision(2);
	cout << fixed << dSoma / lTotal << endl;

	return 0;
}