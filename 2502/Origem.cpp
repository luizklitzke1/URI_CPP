#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    long lTamanhoCifra, lQuantidade;

    string sCifra, sChave, sFraseOriginal;

    while (cin >> lTamanhoCifra >> lQuantidade)
    {
        cin >> sCifra >> sChave;

        while (lQuantidade--)
        {
            cin.ignore();
            getline(cin, sFraseOriginal);

            sFraseOriginal[0] = tolower(sFraseOriginal[0]);

            for (char cL : sFraseOriginal)
            {

            }
                

            cout << sFraseOriginal << endl;

        }

        
    }

    return 0;
}