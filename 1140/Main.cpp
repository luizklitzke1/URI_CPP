#include <iostream>
#include <string>

using namespace std;

int main()
{
    string sFrase;
    char cPrimeiraLetra = 0;
    bool bValido = 1;

    while (getline(cin, sFrase) && sFrase != "*")
    {
        bValido = 1;
        cPrimeiraLetra = tolower(sFrase[0]);

        for (size_t idx = 1; idx < sFrase.length(); ++idx)
        {
            if (sFrase[idx - 1] == ' ')
            {
                if (tolower(sFrase[idx]) != cPrimeiraLetra)
                { 
                    bValido = 0;
                    break;
                }
            }
        }

        cout << (bValido ? "Y" : "N") << endl;
    }
  
    return 0;
}