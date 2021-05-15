#include <iostream>

using namespace std;

int main()
{
    
    long lQuantidadeDeTestes = 0;
    cin >> lQuantidadeDeTestes;

    long lValorTeste = 0;
    long lPossivelDivisor = 1;
    long lSomaDivisores = 0;
    
    for (long idxTeste = 0; idxTeste < lQuantidadeDeTestes; ++idxTeste)
    {
        cin >> lValorTeste;

        lPossivelDivisor = 1;
        lSomaDivisores = 0;
        while (lPossivelDivisor < lValorTeste)
        {
            
            if (lValorTeste % lPossivelDivisor == 0)
            {
                lSomaDivisores += lPossivelDivisor;
                if (lSomaDivisores > lValorTeste)
                {
                    break;
                }
            }
            ++lPossivelDivisor;
        }

        if (lSomaDivisores == lValorTeste)
        {
            cout << lValorTeste << " eh perfeito" << endl;
        }
        else
        {
            cout << lValorTeste << " nao eh perfeito" << endl;
        }
    }

    return 0;
}
