#include <iostream>

using namespace std;

int main()
{
	long q, d, p, r = 0;

	while (cin >> q && q)
	{
		cin >> d >> p;

		r = (q * d * p) / (p - q);

		if (r == 1)
			cout << r << " pagina" << endl;
		else
			cout << r << " paginas" << endl;
	}
}