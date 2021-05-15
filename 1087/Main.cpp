#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long  lValorX1 = 0;
    long  lValorY1 = 0;


    long  lValorX2 = 0;
    long  lValorY2 = 0;

    long lDistanciaX = 0;
    long lDistanciaY = 0;

    while (cin >> lValorX1 >> lValorY1 >> lValorX2 >> lValorY2 &&
        (lValorX1 || lValorY1 || lValorX2 || lValorY2))
    {
        lDistanciaX = abs(lValorX1 - lValorX2);
        lDistanciaY = abs(lValorY1 - lValorY2);

        if (lDistanciaX == 0 && lDistanciaY == 0)
            cout << 0 << endl;
        else if (lDistanciaX == lDistanciaY || lDistanciaY == 0 || lDistanciaX == 0)
            cout << 1 << endl;
        else
            cout << 2 << endl;
    }

    
}