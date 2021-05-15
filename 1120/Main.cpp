#include <iostream>
#include <string>

using namespace std;

int main()
{
    char cDigitoProblematico;

    string sNumeroOriginal = "";

    while (cin >> cDigitoProblematico >> sNumeroOriginal 
           && (cDigitoProblematico != '0' && sNumeroOriginal != "0"))
    {
        string sNumeroImpresso = "";
        bool bApenas0 = true;

        for (long idxChar = 0; idxChar < sNumeroOriginal.length(); ++idxChar)
        {
            if (sNumeroOriginal[idxChar] != cDigitoProblematico)
            {
                if (sNumeroOriginal[idxChar] == '0')
                {
                    if (sNumeroImpresso.length() > 0)
                        sNumeroImpresso += sNumeroOriginal[idxChar];
                }
                else
                    sNumeroImpresso += sNumeroOriginal[idxChar];
        
                if (sNumeroOriginal[idxChar] != '0')
                    bApenas0 = false;
            }
        }

        if (sNumeroImpresso.length() == 0)
            cout << 0 << endl;
        else if (bApenas0)
            cout << 0 << endl;
        else
            cout << sNumeroImpresso << endl;
    }
    
    return 0;
}
