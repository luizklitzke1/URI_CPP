#include <iostream>

using namespace std;

long CalculaFatorial(long lValor)
{
    if (lValor <= 1)
        return lValor;

    return lValor * CalculaFatorial(lValor - 1);
}

int main()
{
    long lValor = 0;
    cin >> lValor;

    cout << CalculaFatorial(lValor) << endl;

    return 0;
}