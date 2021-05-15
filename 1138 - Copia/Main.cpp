#include <iostream>
#include <string>

using namespace std;

const long MENOR_ASC = 48;

int main()
{
	long lValorA = 0;
	long lValorB = 0;
	
	while (cin >> lValorA >> lValorB && lValorA && lValorB)
	{
		int aNumeros[10] = {0};
		
		for (long idxNum = lValorA; idxNum <= lValorB; ++idxNum)
		{
			string sNum = to_string(idxNum);
			for (long idxChar = 0; idxChar < sNum.length(); ++idxChar)
				++aNumeros[(int)sNum[idxChar] - MENOR_ASC];
		}
		
		for (long idx = 0; idx < 10; ++idx)
		{
			if (idx < 9)
				cout << aNumeros[idx] << " ";
			else
				cout << aNumeros[idx] << endl;
		}
	}
	
	return 0;
}