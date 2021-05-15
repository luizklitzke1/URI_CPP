#include <iostream>

using namespace std;

int main()
{
    
    long lQuantidadeDeTestes = 0;
    cin >> lQuantidadeDeTestes;

    long lValorTeste = 0;
    long lQuantidadeDivisores = 0;

    for (long idxTeste = 0; idxTeste < lQuantidadeDeTestes; ++idxTeste)
    {
        cin >> lValorTeste;

        lQuantidadeDivisores = 0;
        for (long lPossivelDivisor = 1; lPossivelDivisor < lValorTeste; ++ lPossivelDivisor)
        {

            if (lValorTeste % lPossivelDivisor == 0 )
            {
                ++lQuantidadeDivisores;
            }
            
        }

        if  (lQuantidadeDivisores == 1)
        {
            cout << lValorTeste << " eh primo" << endl;
        }
        else
        {
            cout << lValorTeste << " nao eh primo" << endl;
        }

    }

    return 0;
}
