#include <iostream>

using namespace std;

int main()
{
	long lValorA = 0;
	long lValorN = 0;
	cin >> lValorA;
	
	long lValorSoma = 0;
	while (lValorN <= 0)
	{
		cin >> lValorN;
	}
	
	for (long idxStep = 0; idxStep < lValorN; ++idxStep)
	{
		lValorSoma += lValorA;
		++lValorA;
	}
	
	cout << lValorSoma << endl;
	
	return 0;
}