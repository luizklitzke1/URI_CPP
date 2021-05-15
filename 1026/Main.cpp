#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string ConverteDecPraBin(unsigned long long lDec)
{
    string sBinario = "";

    long lContador = 0;
    while (lDec > 0) {

        sBinario.insert(0, to_string(lDec % 2));
        lDec = lDec / 2;
        ++lContador;
    }

    return (sBinario);
}

double ConverteBinPraDec(string sBin)
{
    double lDecimal = 0;

    for (long idx = 0; idx < sBin.length(); ++idx)
        lDecimal += (sBin[sBin.length() - 1 - idx] - 48) * pow(2, idx);

    return lDecimal;
}


int main()
{
    string sValorInicial = "";

    string sBinarioA;
    string sBinarioB;

    string sMaior;
    string sMenor;

    string sSaida;
    
    double lValorA = 0;
    double lValorB = 0;

    while (cin >> lValorA >> lValorB)
    {
        sBinarioA = ConverteDecPraBin(lValorA);
        sBinarioB = ConverteDecPraBin(lValorB);

        if (lValorA > lValorB)
        {
            sMaior = sBinarioA;
            sMenor = sBinarioB;
        }
        else
        {
            sMaior = sBinarioB;
            sMenor = sBinarioA;
        }

        double TamanhoMaior = sMaior.length();
        double TamanhoMenor = sMenor.length();

        sSaida = "";

        double idx = 0;

        while ((TamanhoMaior - 1 - idx) >= 0)
        {
            if ((TamanhoMenor - 1 - idx) >= 0)
            {
                if (sMaior[TamanhoMaior - 1 - idx] != sMenor[TamanhoMenor - 1 - idx])
  
                    sSaida.insert(0, "1");
                else
                    sSaida.insert(0, "0");
            }
            else
                sSaida.insert(0, to_string(sMaior[TamanhoMaior - idx - 1] - 48));
            ++idx;
        }

        cout.precision(0);
        cout << fixed << ConverteBinPraDec(sSaida) << endl;
    
    }
  
    return 0;
}