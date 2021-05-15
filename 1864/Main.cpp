#include <iostream>
#include <string>

using namespace std;

int main()
{
    string sFrase = "LIFE IS NOT A PROBLEM TO BE SOLVED";

    unsigned long ulQuantidadeDeCasas = 0;
    cin >> ulQuantidadeDeCasas;

    for (long idxLetra = 0; idxLetra < ulQuantidadeDeCasas; ++ idxLetra)
    {
        cout << sFrase[idxLetra];
    } 
    cout << endl;
    
    return 0;
}
