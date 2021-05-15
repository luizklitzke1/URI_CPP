#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	long lValorIdade = 0;
    long lSomaIdades = 0;
    long lQuantidadeLida = 0;
    double dMediaIdades = 0;

    while (true)
    {
        cin >> lValorIdade;
        if (lValorIdade < 0)
        {
            break;
        }
        ++lQuantidadeLida;
        lSomaIdades += lValorIdade;
    }
   
    dMediaIdades  = (double)lSomaIdades / (double)lQuantidadeLida;
    cout.precision(2);
    cout << fixed << dMediaIdades << endl;

    return 0;
}
