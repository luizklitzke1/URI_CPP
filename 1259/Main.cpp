#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector <long> vPares = {0};
    vector <long> vImpares = {0};

    unsigned long ulQuantidadeEntradas = 0;
    cin >> ulQuantidadeEntradas;

    unsigned long ulEntrada = 0;

    while (ulQuantidadeEntradas--)
    {
        cin >> ulEntrada;

        if (ulEntrada % 2 == 0)
            vPares.push_back(ulEntrada);
        else
            vImpares.push_back(ulEntrada);
    }

    sort(vPares.begin(), vPares.end());

    sort(vImpares.begin(), vImpares.end());

    for (size_t idxPares = 1; idxPares < vPares.size(); ++idxPares)
        cout << vPares[idxPares] << endl;

    for (size_t idxImpares =  vImpares.size() - 1; idxImpares > 0; --idxImpares)
        cout << vImpares[idxImpares] << endl;

    return 0;
}