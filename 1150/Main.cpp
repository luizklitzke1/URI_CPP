#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	long lValorX = 0;
    long lValorY = 0;

    cin >> lValorX;

    long lSomaValores = 0;
    long lQuantidadeDeSomas = 1;

    while (lValorY < lValorX)
    {
        cin >> lValorY;
    }
    lSomaValores = lValorX;

    do
    {
        ++lValorX;
        lSomaValores += lValorX;
        ++lQuantidadeDeSomas;
    }
    while (lSomaValores <= lValorY);

    cout << lQuantidadeDeSomas << endl;

    return 0;
}
