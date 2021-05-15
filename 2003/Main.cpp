#include <iostream>
#include <string>

using namespace std;

const long MENOR_ASC = 48;
const long ATRASO_MAX = 1;
const long HORARIO_BUSAO = 8;

int main()
{
	string sHorario;

	while (cin >> sHorario)
	{
		long lHoras = sHorario[0] - MENOR_ASC + ATRASO_MAX;
		long lMinutos = (sHorario[2] - MENOR_ASC) * 10 + (sHorario[3] - MENOR_ASC);

		long lAtraso = 0;

		if (HORARIO_BUSAO <= lHoras)
			lAtraso = lMinutos + (lHoras - HORARIO_BUSAO) * 60;

		cout << "Atraso maximo: " << lAtraso << endl;
	}
	

	
	return 0;
}