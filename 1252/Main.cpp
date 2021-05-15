#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>

using namespace std;

int main()
{
    long lValorEntrada = 0;
    long lValorModulo = 0;

    long lQuantidadeEntradas = 0;
    long lModuloDe = 0;

    while (cin >> lQuantidadeEntradas >> lModuloDe)
    {
        map<long, map<long, vector<long>, greater<long>>> mModulos;
        cout << lQuantidadeEntradas << " " << lModuloDe << endl;

        if (lQuantidadeEntradas == 0 && lModuloDe == 0)
            break;

        while (lQuantidadeEntradas--)
        {
            cin >> lValorEntrada;

            lValorModulo = lValorEntrada % lModuloDe;

            if (lValorEntrada % 2 == 0)
                mModulos[lValorModulo][0].push_back(lValorEntrada);
            else
                mModulos[lValorModulo][1].push_back(lValorEntrada);
        }

        for (auto& ParModulo : mModulos)
        {
            for (auto& ParCategoria : ParModulo.second)
            {
                if (ParCategoria.first == 0)
                {
                    sort(ParCategoria.second.begin(), ParCategoria.second.end());

                    for (const long& lValor : ParCategoria.second)
                        cout << lValor << endl;
                }
                else
                {
                    sort(ParCategoria.second.begin(), ParCategoria.second.end(), greater<long>());

                    for (const long& lValor : ParCategoria.second)
                        cout << lValor << endl;
                }

            }
        }
    }

    return 0;
}