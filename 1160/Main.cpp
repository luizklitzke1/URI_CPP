#include <iostream>

using namespace std;

int main()
{
    
    long lQuantidadeDeTestes = 0;
    cin >> lQuantidadeDeTestes;

    long lPopulacaoA = 0;
    long lPopulacaoB = 0;

    long lAnosParaAlcancar = 0;
    double dCrescimentoA = 0;
    double dCrescimentoB = 0;
    
    for (long idxTeste = 0; idxTeste < lQuantidadeDeTestes; ++idxTeste)
    {

        cin >> lPopulacaoA >> lPopulacaoB >> dCrescimentoA >> dCrescimentoB;

        lAnosParaAlcancar = 0;
        while (lPopulacaoA <= lPopulacaoB && lAnosParaAlcancar < 101)
        {   
            lPopulacaoA = lPopulacaoA * (1 + (dCrescimentoA / 100));
            lPopulacaoB = lPopulacaoB * (1 + (dCrescimentoB / 100));
            ++lAnosParaAlcancar;
        }

        if (lAnosParaAlcancar > 100)
        {
            cout << "Mais de 1 seculo." << endl;
        }
        else
        {
            cout << lAnosParaAlcancar << " anos." << endl;
        }
    }


    return 0;
}
