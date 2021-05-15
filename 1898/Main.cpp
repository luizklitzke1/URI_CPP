#include <iostream>
#include <string>

const long MENOR_ASC = 48;
const long MAIOR_ASC = 57;

const long DIGITOS_CPF = 11;

using namespace std;

int main()
{
    string sPrimeira;
    string sSegunda;

    getline(cin, sPrimeira);
    getline(cin, sSegunda);

    string sCPF;
    string sValorA;
    string sDecimalA;

    bool bPontoA = 0;
    long lPosPontoA = 0;

    long lEncontrados = 0;

    for (const char& cChar : sPrimeira)
    {
        if (!bPontoA && cChar >= MENOR_ASC && cChar <= MAIOR_ASC)
        {
            if(lEncontrados < 11)
            {
                sCPF += cChar;
                ++lEncontrados;
            }
            else
                sValorA += cChar;
        }
        else
        {
            if (!bPontoA && cChar == '.')
               bPontoA = 1;

            else if (cChar == '.')
                break;
               
            else if (bPontoA && lPosPontoA < 2)
            {
                if (cChar >= MENOR_ASC && cChar <= MAIOR_ASC)
                {
                    sDecimalA += cChar;
                    ++lPosPontoA;
                }
            }
        }
            

    }

    string sValorB;
    string sDecimalB;

    bool bPontoB = 0;
    long lPosPontoB = 0;

    for (const char& cChar : sSegunda)
    {
        if (!bPontoB && cChar >= MENOR_ASC && cChar <= MAIOR_ASC)
            sValorB += cChar;
        else
        {
            if (!bPontoB && cChar == '.')
                bPontoB = 1;

            else if (cChar == '.')
                break;

            else if (bPontoB && lPosPontoB < 2)
            {
                if (cChar >= MENOR_ASC && cChar <= MAIOR_ASC)
                {
                    sDecimalB += cChar;
                    ++lPosPontoB;
                }
            }
        }
    }

    if (sValorA.length() == 0)
        sValorA = "0";
    if (sDecimalA.length() == 0)
        sDecimalA = "0";
    else if (sDecimalA.length() == 1)
        sDecimalA += "0";

    if (sValorB.length() == 0)
        sValorB = "0";
    if (sDecimalB.length() == 0)
        sDecimalB = "0";

    else if (sDecimalB.length() == 1)
        sDecimalB += "0";

    double dValorGeral = stod(sValorA) + stod(sValorB);
 
    double dDecimalGeral = stod(sDecimalA) + stod(sDecimalB);

    if (dDecimalGeral >= 100)
    {
        ++dValorGeral;
        dDecimalGeral -= 100;
    }

    cout.precision(0);
    cout << "cpf " << sCPF << endl;

    if ((long)dDecimalGeral < 10)
        cout << fixed << dValorGeral << "." <<  0 << dDecimalGeral << endl;
    else
        cout << fixed << dValorGeral << "." <<  dDecimalGeral << endl;
    

}