#include <iostream>
#include <string>
#include <bitset>

using namespace std;

const string CODIGO_DEC = "dec";
const string CODIGO_BIN = "bin";
const string CODIGO_HEX = "hex";

int main()
{
    string sValorInicial;
    string sOpcao = 0;

    long lQuantidadeTestes = 0;
    cin >> lQuantidadeTestes;

    for (long idxTeste = 1; idxTeste <= lQuantidadeTestes; ++idxTeste)
    {
        cin >> sValorInicial >> sOpcao;

        cout << "Case " << idxTeste << ":" << endl;

        if (sOpcao == CODIGO_DEC)
        {
            cout << std::hex << sValorInicial << " hex" << endl;
            cout << bitset<8>(sValorInicial).to_string() << " bin" << endl;
        }
        else if (sOpcao ==  CODIGO_BIN)
        {
            cout << std::dec << bitset<8>(sValorInicial).to_string() << " dec" << endl;
            cout << std::hex << bitset<8>(sValorInicial).to_string() << " hex" << endl;
        }
        else if (sOpcao ==CODIGO_HEX)
        {
            cout << std::dec << sValorInicial << " dec" << endl;
            cout << bitset<8>(sValorInicial).to_string() << " bin" << endl;
        }

        cout << endl;
    }

    return 0;
}