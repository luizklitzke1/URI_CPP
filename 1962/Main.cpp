#include <iostream>

using namespace std;

const long long ANO_ATUAL = 2015;

int main()
{
	long lQuantidadeTestes = 0;
	cin >> lQuantidadeTestes;
	
	long lAnos = 0;
	
	while (lQuantidadeTestes--)
	{
		cin >> lAnos;
		
		if (ANO_ATUAL - lAnos > 0)
			cout << ANO_ATUAL - lAnos << " D.C." << endl;
		else
			cout << (ANO_ATUAL - lAnos) * -1 + 1 << " A.C." << endl;
	}

    return 0;
}