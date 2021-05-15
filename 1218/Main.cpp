#include <iostream>
#include <algorithm>
#include <vector>
#include <memory>
#include <cstring>

using namespace std;

int main()
{
    vector <long> vPesFemininos;
    vector <long> vPesMasculinos;

    long lTamanho = 0;
    char cPe = 0;
    long lTotalPares = 0;

    long lTamanoMaximo = 0;

    while (cin >> lTamanoMaximo)
    {
        vPesFemininos.resize(lTamanoMaximo);
        vPesMasculinos.resize(lTamanoMaximo);



        ++vPesFemininos[lTamanho - lTamanoMaximo];



    }



    return 0;
}