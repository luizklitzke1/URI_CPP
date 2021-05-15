#include <iostream>
#include <algorithm>
#include <memory>
#include <cstring>

using namespace std;

const char CODIGO_DIREITO = 'D';
const char CODIGO_ESQUERDO = 'E';

int main()
{
    long aPesDireitos[31] = {0};
    long aPesEsquerdos[31] = {0};

    long lTamanho = 0;
    char cPe = 0;
    long lTotalPares = 0;

    long lQuantidadeEntradas = 0;

    while (cin >> lQuantidadeEntradas)
    {
        lTotalPares = 0;

        memset(aPesDireitos, 0, sizeof(aPesDireitos));
        memset(aPesEsquerdos, 0, sizeof(aPesEsquerdos));

        while (lQuantidadeEntradas--)
        {
            cin >> lTamanho >> cPe;

            if (cPe == CODIGO_DIREITO)
                ++aPesDireitos[lTamanho - 30];
            else
  
                ++aPesEsquerdos[lTamanho - 30];
        }

        for (long idx = 0; idx < 31; ++idx)
        {
            if (aPesDireitos[idx] != 0 && aPesEsquerdos[idx] != 0)
                lTotalPares += min(aPesDireitos[idx], aPesEsquerdos[idx]);
        }

        cout << lTotalPares << endl;
        
    }

   

    return 0;
}