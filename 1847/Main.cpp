#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    long lTempDia1 = 0;
    long lTempDia2 = 0;
    long lTempDia3 = 0;

    cin >> lTempDia1 >> lTempDia2 >> lTempDia3;

    bool bPessoasFelizes = true;

    long lDiferenca12 = 0;
    long lDiferenca23 = 0;

    if (lTempDia1 > lTempDia2)
        lDiferenca12 = (lTempDia1 - lTempDia2) * - 1;
    else
        lDiferenca12 = lTempDia2 - lTempDia1;

    if (lTempDia2 > lTempDia3)
        lDiferenca23 = (lTempDia2 - lTempDia3) * - 1;
    else
        lDiferenca23 = lTempDia3 - lTempDia2;

    if (lTempDia1 > lTempDia2)
    {
        if (lTempDia2 > lTempDia3 && lDiferenca23 <= lDiferenca12)
            bPessoasFelizes = false;
    }
    else if (lTempDia1 < lTempDia2)
    {
        if (lTempDia2 > lTempDia3 && lDiferenca23 == 0)
            bPessoasFelizes = false;
        else if (lDiferenca23 < lDiferenca12)
            bPessoasFelizes = false;
    }
    else
    {
        if (lTempDia3 > lTempDia2)
            bPessoasFelizes = true;
        else
            bPessoasFelizes = false;
    }

    if (bPessoasFelizes)
        cout << ":)" << endl;
    else
        cout << ":(" << endl;

    return 0;
}
