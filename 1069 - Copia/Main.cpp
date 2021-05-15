#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
    long lQuantidadeEntradas = 0;

    cin >> lQuantidadeEntradas;
    cin.ignore();

    while (lQuantidadeEntradas--)
    {
        string sEntrada;

        getline(cin, sEntrada);

        long lTotalDiamantes = 0;
        stack<char> stDiamantesAbertos;

        for (long idxLetra = 0; idxLetra < sEntrada.length(); idxLetra++)
        {
            if (sEntrada[idxLetra] == '<')
                stDiamantesAbertos.push('<');

            if (sEntrada[idxLetra] == '>' && !stDiamantesAbertos.empty())
            {
                lTotalDiamantes++;
                stDiamantesAbertos.pop();
            }
        }

        cout << lTotalDiamantes << endl;
    }

    return 0;
}