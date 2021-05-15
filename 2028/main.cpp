#include <iostream>
#include <string>

using namespace std;

int main()
{
	long lValorN = 0;

	long lCasos = 0;

	while (cin >> lValorN)
	{
		++lCasos;

		string sSequencia = "0";
		
		if (lValorN > 0)
		{
			long lCasas = 1;

			for (long idx = 1; idx <= lValorN; ++idx)		
			{
				lCasas += idx;
				for (long idxChar = 0; idxChar < idx; ++idxChar)
				{
					sSequencia += " " + to_string(idx);
				}
				
			}
			cout << "Caso " << lCasos << ": " << lCasas  << " numeros" << endl;	
				
		}
		else
			cout << "Caso " << lCasos << ": 1 numero" << endl;	

		cout << sSequencia << endl;
		cout << endl;
	}

	return 0;
}
