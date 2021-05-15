#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	long lValorN = 0;

    cin >> lValorN;

    long lValorFatorial = 1;

    while (lValorN > 0)
    {
        lValorFatorial = lValorFatorial * lValorN;
        --lValorN;
    }
   
    cout << lValorFatorial << endl;

    return 0;
}
