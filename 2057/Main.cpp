#include <iostream>

using namespace std;

int main()
{
	long lInicial = 0;
	long lFusos = 0;
	long lDiferenca = 0;

	cin >> lInicial >> lFusos >> lDiferenca;

	long lResultado = lInicial + lFusos + lDiferenca;

	if (lResultado >= 24)
		lResultado -= 24;
	else if (lResultado < 0)
		lResultado = 24 + lResultado;
	
	cout << lResultado << endl;

	return 0;
}