#include <iostream>

using namespace std;

int main()
{
    long lQuantidadeEntradas = 0;
    cin >> lQuantidadeEntradas;

    long lQuantidadeDias = 0;
    double dValorEntrada = 0;

    while (lQuantidadeEntradas--)
    {
        lQuantidadeDias = 0;

        cin >> dValorEntrada;

        while (dValorEntrada > 1)
        {
            ++lQuantidadeDias;

            dValorEntrada /= 2;
        }

        cout << lQuantidadeDias << " dias" << endl;
    }

    return 0;
}
