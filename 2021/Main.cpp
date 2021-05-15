#include <iostream>
#include <string>

using namespace std;

int main()
{
    long lAltura = 0;
    long lLargura = 0;
    long lQuantidadeEncontrada = 0;

    long lComprar = 0;
    long lPosicaoDesligada = 0;

    while (cin >> lAltura >> lLargura >> lQuantidadeEncontrada &&
        (lAltura && lLargura && lQuantidadeEncontrada))
    {
        lComprar = 0;

        while (lQuantidadeEncontrada--)
        {
            cin >> lPosicaoDesligada;

            if (lPosicaoDesligada % lLargura == 0)
                ++lComprar;
            else if (lPosicaoDesligada > lLargura)
                lComprar += lLargura - ((lPosicaoDesligada -  (lPosicaoDesligada / lLargura * lLargura)) - 1);
            else
                lComprar += lLargura - (lPosicaoDesligada - 1);
        }

        cout << "Lights: " << lComprar << endl;
    }

}