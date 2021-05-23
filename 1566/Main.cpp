#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>

using namespace std;

int main()
{
    long lQuantidadeDeCasos = 0;
    long lQuantidadePessoas = 0;

    vector <long> aAlturas;

    cin >> lQuantidadeDeCasos;

    while (lQuantidadeDeCasos--)
    {
        cin >> lQuantidadePessoas;

        aAlturas.resize(lQuantidadePessoas);

        for (long idx = 0; idx < lQuantidadePessoas; ++idx)
            scanf("%d", &aAlturas[idx]);

        sort(aAlturas.begin(), aAlturas.end());

        printf("%d", aAlturas[0]);
        for (long idx = 1; idx < lQuantidadePessoas; ++idx)
            printf(" %d", aAlturas[idx]);

        printf("\n");
    }

    return 0;
}