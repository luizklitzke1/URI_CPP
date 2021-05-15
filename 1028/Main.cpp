#include <iostream>

using namespace std;

int main()
{
	long lQuantidadeTestes = 0;
	cin >> lQuantidadeTestes;
	
	while (lQuantidadeTestes--)
	{
		long lRicardo = 0;
		long lVicente = 0;
		
		cin >> lRicardo >> lVicente;
		
		long lMaximo = 0;
		
		while (lVicente != 0)
		{
			lMaximo = lRicardo % lVicente;
			lRicardo = lVicente;
			lVicente = lMaximo;
		}
		
		cout << lRicardo << endl;
	}

    return 0;
}