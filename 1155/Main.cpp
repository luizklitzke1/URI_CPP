#include <iostream>
#include <stdio.h>

using namespace std;

const long VALOR_FINAL = 100;

int main()
{
	
    double dValorS = 0;

    for (double dDivisor = 1; dDivisor <= VALOR_FINAL; ++ dDivisor)
    {
        dValorS += (1 / dDivisor);
    }
    
    cout.precision(2);
    cout << fixed << dValorS << endl;

    return 0;
}
