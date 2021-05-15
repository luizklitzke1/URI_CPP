#include <iostream>

using namespace std;

const long VALOR_FINAL = 39;

int main()
{
	
    long lValorN = 0;
    cin >> lValorN;

    for (long lDivisorPotencial = 1; lDivisorPotencial <= lValorN; ++ lDivisorPotencial)
    {
        if (lValorN % lDivisorPotencial == 0)
        {
            cout << lDivisorPotencial << endl;
        }
    }

    return 0;
}
