#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    long lQuantidadeTestes = 0;
    cin >> lQuantidadeTestes;

    while (lQuantidadeTestes--)
    {
        string sPrimeiraPalavra = "";
        string sSegundaPalavra = "";

        cin >> sPrimeiraPalavra >> sSegundaPalavra;

        string sRecombinada = "";
        
        for (long idxChar = 0; idxChar < max(sPrimeiraPalavra.length(), sSegundaPalavra.length()); ++idxChar)
        {
            if (sPrimeiraPalavra.length() > idxChar)
                sRecombinada += sPrimeiraPalavra[idxChar];
            if (sSegundaPalavra.length() > idxChar)
                sRecombinada += sSegundaPalavra[idxChar];
        }
        
        cout << sRecombinada << endl;
    }
    
    return 0;
}
