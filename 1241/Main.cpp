#include <iostream>
#include <string>

using namespace std;

int main()
{
    long lTotalEntradas = 0;
    cin >> lTotalEntradas;

    string sString;
    string sSubstring;

    while (lTotalEntradas--)
    {
        cin >> sString >> sSubstring;

        if (sSubstring.size() <= sString.size() &&
            sString.rfind(sSubstring) == (sString.size() - sSubstring.size()))
            cout << "encaixa" << endl;
        else
            cout << "nao encaixa" << endl;
    
    }

    return 0;
}