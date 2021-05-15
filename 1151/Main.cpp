#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	long lValorLimite = 0;

    cin >> lValorLimite;

    long lValorAnterior = 0;
    long lProximoValor = 0;
    for (long idxNumero = 0; idxNumero <  lValorLimite; ++idxNumero)
    {
        if (idxNumero ==  lValorLimite - 1)
        {
            cout << lProximoValor << endl;
        }
        else
        {
            cout << lProximoValor << " ";
        }
        
        lProximoValor += lValorAnterior;
        lValorAnterior = lProximoValor - lValorAnterior;
        if (lProximoValor == 0)
        {
            lProximoValor = 1;
        }
    }

    return 0;
}
