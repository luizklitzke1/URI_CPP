#include <iostream>
#include <cmath>

using namespace std;

const long VALOR_FINAL = 39;

int main()
{
	
    double dValorS = 0;
    long lDivisor = 1;
    long lDividendo = 1;
    long lContador = 0;

    while (lDividendo <= VALOR_FINAL)
    {
        dValorS += ((double)lDividendo / (double)lDivisor);

        lDividendo += 2;
        ++lContador;
        lDivisor = pow(2 , lContador);
    }
    
    cout.precision(2);
    cout << fixed << dValorS << endl;

    return 0;
}
