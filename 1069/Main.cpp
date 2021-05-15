#include <iostream>
#include <string>

using namespace std;



int main()
{
    long lQuantidadeEntradas = 0;
    cin >> lQuantidadeEntradas;

    cin.ignore();

    string sEntrada = "";
    long lMaiores = 0;
    long lMenores = 0;

    bool bApareceuMenor = 0;

    while (lQuantidadeEntradas--)
    {
        getline(cin, sEntrada);

        lMaiores = 0;
        lMenores = 0;
        bApareceuMenor = 0;

        for (long idxChar = 0; idxChar < sEntrada.length(); ++idxChar)
        {
            if (sEntrada[idxChar] == '<' && (idxChar < sEntrada.find_last_of('>')))
            {
                bApareceuMenor = 1;
                ++lMenores;
            }
            else if (sEntrada[idxChar] == '>' && bApareceuMenor)
                ++lMaiores;
        }

        if (lMenores <= lMaiores)
            cout << lMenores << endl;
        else
            cout << lMaiores << endl;
    }

    return 0;
}