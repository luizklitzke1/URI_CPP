#include <iostream>

using namespace std;

const long TAMANHO_VETOR = 60;

int main()
{
	unsigned long long aFibonacci[TAMANHO_VETOR] = {0};
	long lValorIndex = 0;
	double dQuantidadeValores = 0;
	cin >> dQuantidadeValores;
	
	aFibonacci[0] = 0;
	aFibonacci[1] = 1;
	
	for (long idxFibonacci = 2; idxFibonacci < TAMANHO_VETOR + 1; ++ idxFibonacci)
	{
		aFibonacci[idxFibonacci] = aFibonacci[idxFibonacci - 1] + aFibonacci[idxFibonacci - 2];
	}
	
	while (dQuantidadeValores--)
	{
		cin >> lValorIndex;
		cout << fixed << "Fib(" << lValorIndex << ") = " << aFibonacci[lValorIndex] << endl;
	}
	
    return 0;
}