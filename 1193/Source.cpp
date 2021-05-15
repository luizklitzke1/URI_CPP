#include <iostream>
#include <string>
#include <cmath>

using namespace std;

const string CODIGO_DEC = "dec";
const string CODIGO_BIN = "bin";
const string CODIGO_HEX = "hex";

const long MENOR_ASC = 48;
const long MAIOR_ASC = 57;


long long ConverteBinPraDec(string sBin)
{
    long long lDecimal = 0;

    for (long idx = 0; idx < sBin.length(); ++idx)
        lDecimal += (sBin[sBin.length() - 1 - idx] - 48)* pow(2, idx);

    return lDecimal;
}

string ConverteDecPraBin(long lDec)
{
    string sBinario = "";

    long lContador = 0;
    while (lDec > 0) {

        // storing remainder in binary array
        sBinario.insert(0, to_string(lDec % 2));
        lDec = lDec / 2;
        ++lContador;
    }

    return (sBinario);
}

long long ConverteHexDec(string sHex)
{
    long lTamanho = sHex.length();
    long lBase = 0;
    long long lDec = 0;

    for (long idx = lTamanho - 1; idx >= 0; --idx) 
    {
        if (sHex[idx]>= '0' && sHex[idx] <= '9')
        {
            lDec += (sHex[idx] - 48) * pow(16, lBase);
        }
        else
        {
            switch (sHex[idx])
            {
                case 'a':
                    lDec += (10 * pow(16, lBase));
                    break;

                case 'b':
                    lDec += (11 * pow(16, lBase));
                    break;

                case 'c':
                    lDec += (12 * pow(16, lBase));
                    break;

                case 'd':
                    lDec += (13 * pow(16, lBase));
                    break;
                
                case 'e':
                    lDec += (14 * pow(16, lBase));
                    break;

                case 'f':
                    lDec += (15 * pow(16, lBase));
                    break;
            }
        }
        ++lBase;
    }
    return lDec;
}

int main()
{
    string sValorInicial = "";
    string sOpcao = "";

    long lQuantidadeTestes = 0;
    cin >> lQuantidadeTestes;

    for (long idxTeste = 1; idxTeste <= lQuantidadeTestes; ++idxTeste)
    {
        cin >> sValorInicial >> sOpcao;

        cout << "Case " << std::dec << idxTeste << ":" << endl;

        if (sOpcao == CODIGO_DEC)
        {
            cout << std::hex << stoi(sValorInicial) << " hex" << endl;
            cout << std::dec << ConverteDecPraBin(std::stol(sValorInicial)) << " bin" << endl;
        }
        else if (sOpcao ==  CODIGO_BIN)
        {
            cout << ConverteBinPraDec(sValorInicial) << " dec" << endl;
            cout << std::hex << ConverteBinPraDec(sValorInicial)  << " hex" << endl;
        }
        else if (sOpcao == CODIGO_HEX)
        {
            cout << std::dec << ConverteHexDec(sValorInicial) << " dec" << endl;
            cout << ConverteDecPraBin(ConverteHexDec(sValorInicial)) << " bin" << endl;
        }

        cout << endl;
    }

    return 0;
}