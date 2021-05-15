#include <iostream>
#include <string>

using namespace std;

int main()
{
    string sEntrada = "";

    long lTotal = 0;

    char cLetra = 0;
    bool bAliter = 0;

    while (getline(cin, sEntrada))
    {
        bAliter = 0;
        lTotal = 0;

        cLetra = tolower(sEntrada[0]);

        for (size_t idx = 1; idx < sEntrada.length(); ++idx)
        {
            if (sEntrada[idx - 1] == ' ')
            {
                if (tolower(sEntrada[idx]) == cLetra && !bAliter)
                {
                    ++lTotal;
                    bAliter = 1;
                }
                else if (tolower(sEntrada[idx]) != cLetra)
                {
                    bAliter = 0;
                    cLetra = tolower(sEntrada[idx]);

                }
            }

        }

        cout << lTotal << endl;
    }

    return 0;
}
