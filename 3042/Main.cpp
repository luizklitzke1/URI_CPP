#include <iostream>

using namespace std;

int main()
{
    unsigned long ulQuantidadeDeLinhas = 0;

    while (cin >> ulQuantidadeDeLinhas && ulQuantidadeDeLinhas)
    {
        long lPosicao = 1;
        long lQuantidadeMovimentos = 0;

        long lValorLAnterior = 0;
        long lValorLProximo = 0;

        long lValorCAnterior = 0;
        long lValorCProximo = 0;

        long lValorRAnterior = 0;
        long lValorRProximo = 0;

        for (long idxLinha = 0; idxLinha <= ulQuantidadeDeLinhas; ++idxLinha)
        {   
            if (idxLinha < ulQuantidadeDeLinhas)
                cin >> lValorLProximo >> lValorCProximo >> lValorRProximo;

            if (idxLinha == 0)
            {
                lValorLAnterior = lValorLProximo;
                lValorCAnterior = lValorCProximo;
                lValorRAnterior = lValorRProximo;
            }
            else
            {
                switch (lPosicao)
                {
                    case 0:
                        if (lValorLProximo == 1)
                        {
                            if (lValorCProximo == 0)
                                lPosicao = 1;
                            else
                                lPosicao = 2;

                            ++lQuantidadeMovimentos;
                        }
                        break;

                    case 1:
                        if (lValorCProximo == 1)
                        {
                            if (lValorRProximo == 0)
                                lPosicao = 2;
                            else
                                lPosicao = 0;

                            ++lQuantidadeMovimentos;
                        }
                        break;
                    
                    case 2:
                        if (lValorRProximo == 1)
                        {
                            if (lValorCProximo == 0)
                                lPosicao = 1;
                            else
                                lPosicao = 0;

                            ++lQuantidadeMovimentos;
                        }
                        break;
                }

                lValorLAnterior = lValorLProximo;
                lValorCAnterior = lValorCProximo;
                lValorRAnterior = lValorRProximo;
            }
                
            
        }

         cout << lQuantidadeMovimentos << endl;

       

    }

    return 0;
}
