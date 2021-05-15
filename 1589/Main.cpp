#include <iostream>

using namespace std;

int main()
{
	long lQuantidadeDeTestes = 0;
	cin >> lQuantidadeDeTestes;
	
	long lRaio1 = 0;
	long lRaio2 = 0;
	
	for (long idxTeste = 0; idxTeste < lQuantidadeDeTestes; ++idxTeste)
	{
		cin >> lRaio1 >> lRaio2;
		
		cout << lRaio1 + lRaio2 << endl;
	}
	
    return 0;
}