#include <iostream>

using namespace std;

int main()
{
    long lValorX = 0;
    long lValorY = 0;
    
    cin >> lValorX >> lValorX;
    
    while (lValorY <= lValorX)
        cin >> lValorY;

    long lSoma = 0;
    long lSomaValores = 0;
    
    while (lSoma < lValorY)
    {
        lSoma += lValorX;
        ++lSomaValores;
        ++lValorX;
    }
    
    cout << lSomaValores << endl;
    
    return 0;
}