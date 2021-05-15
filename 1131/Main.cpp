#include <iostream>

using namespace std;
int main()
{
    long lGolsInter = 0;
	long lGolsGremio = 0;
	
	long lTotalDeGrenais = 0;
	long lEmpates = 0;
	long lVitoriasInter = 0;
	long lVitoriasGremio = 0;

	long lContinuar = 0;
    while(true)
	{
		cin >> lGolsInter >> lGolsGremio;

		if (lGolsInter > lGolsGremio)
		{
			++lVitoriasInter;
		}
		else if (lGolsInter < lGolsGremio)
		{
			++lVitoriasGremio;
		}
		else
		{
			++lEmpates;
		}
		
		++lTotalDeGrenais;
		
		cout << "Novo grenal (1-sim 2-nao)" << endl;
		cin >> lContinuar;
		
		if (lContinuar == 2)
		{
			break;
		}
    }

	cout << lTotalDeGrenais << " grenais" << endl;
	cout << "Inter:" << lVitoriasInter << endl;
	cout << "Gremio:" << lVitoriasGremio << endl;
	cout << "Empates:" << lEmpates << endl;
	
	if (lVitoriasInter > lVitoriasGremio)
	{
		cout << "Inter venceu mais" << endl;
	}
	else if (lVitoriasInter < lVitoriasGremio)
	{
		cout << "Gremio venceu mais" << endl;
	}		
	else
	{
		cout << "Nao houve vencedor" << endl;
	}
	
    return 0;
}