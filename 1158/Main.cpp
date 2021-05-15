#include <iostream>

using namespace std;

const long VALOR_FINAL = 39;

int main()
{
	
    long lValorN = 0;
    cin >> lValorN;

    long lValorX = 0;
    long lValorY = 0;

    long lSomaImpares = 0;
    long lQuantidadeImpares = 0;

    for (long idxTeste = 0; idxTeste < lValorN; ++ idxTeste)
    {
        cin >> lValorX >> lValorY;
        
        lSomaImpares = 0;
        lQuantidadeImpares = 0;
       
        while (lQuantidadeImpares < lValorY)
        {
            if(lValorX % 2 != 0)
            {   
                 lSomaImpares += lValorX;
                 ++lQuantidadeImpares;
            }
            ++lValorX;
        }

        cout << lSomaImpares << endl;
    }

    return 0;
}
