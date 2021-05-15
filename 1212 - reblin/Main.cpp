#include <iostream>
#include <string>

using namespace std;

const unsigned long TAMANHO_NUMERO = 10;

const string ZERO = "0";

int main()
{
    string sValorA = "";
    string sValorB = "";

    while (cin >> sValorA >> sValorB && sValorA != ZERO && sValorB != ZERO)
    {
        long alAlgarismosA[TAMANHO_NUMERO] = {0};
        long alAlgarismosB[TAMANHO_NUMERO] = {0};

        for (long idx = 0; idx < sValorA.size(); ++idx)
            alAlgarismosA[idx] = sValorA[(sValorA.size() - 1) - idx] - 48;

        for (long idx = 0; idx < sValorB.size(); ++idx)
            alAlgarismosB[idx] = sValorB[(sValorB.size() - 1) - idx] - 48;

        unsigned long ulQuantidadeCarry = 0;
        long lCarry = 0;

        for (long idx = 0; idx < TAMANHO_NUMERO; ++idx)
        {
            if (alAlgarismosA[idx] + alAlgarismosB[idx] + 1 * lCarry > 9)
            {
                ++ulQuantidadeCarry;
                lCarry = 1;
            }
            else
                lCarry = 0;
        }

        if (ulQuantidadeCarry > 1)
            cout << ulQuantidadeCarry << " carry operations." << endl;
        else if (ulQuantidadeCarry == 1)
            cout << ulQuantidadeCarry << " carry operation." << endl;
        else
            cout << "No carry operation." << endl;
    }

    return 0;
}
