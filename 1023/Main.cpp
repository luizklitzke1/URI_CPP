#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <math.h> 

using namespace std;

int main()
{
	unsigned long ulCase = 1;
	unsigned long ulQuantidadeEntradas = 0;
	double dConsumoMedio = 0;
	double lMoradoresTotal = 0;

	long lMoradores = 0;
	long lConsumoTotal = 0;

	double fractpart = 0;
	double intpart = 0;

	bool bEspaco = 0;
	bool bEndl = 0;

	while (cin >> ulQuantidadeEntradas && ulQuantidadeEntradas)
	{
		if (bEndl)
			cout << endl;

		dConsumoMedio = 0;
		lMoradoresTotal = 0;

		bEspaco = 0;
		
		map <long, long> mConsumos;

		while (ulQuantidadeEntradas--)
		{
			cin >> lMoradores >> lConsumoTotal;
			mConsumos[lConsumoTotal / lMoradores]+= lMoradores;

			dConsumoMedio += lConsumoTotal;
			lMoradoresTotal += lMoradores;
		}

		cout << "Cidade# " << ulCase << ":" << endl;

		for (auto a : mConsumos)
		{
			if (bEspaco)
				cout << " " << a.second << "-" << a.first;
			else
				cout << a.second << "-" << a.first;
			bEspaco = 1;
		}
		cout << endl;


		dConsumoMedio = dConsumoMedio / lMoradoresTotal;

		intpart = 0;
		fractpart = modf(dConsumoMedio, &intpart);

		if (int(fractpart * 100) > 10)
			cout << "Consumo medio: " << intpart << "." << int(fractpart * 100) <<  " m3." << endl;
		else
			cout << "Consumo medio: " << intpart << ".0" << int(fractpart * 100) << " m3." << endl;

		++ulCase;

		bEndl = 1;
	}

}