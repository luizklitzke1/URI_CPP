#include <iostream>
#include <string>

using namespace std;

int main()
{
    long lQuantidadeTestes = 0;
    cin >> lQuantidadeTestes;
    cin.ignore();

    while (lQuantidadeTestes--)
    {
        string sEmbarralhada = "";
        
        getline(cin, sEmbarralhada);

        string sCorreta = "";

        long lMeio = sEmbarralhada.length() / 2 - 1;

        for (long idxChar = 0; idxChar < sEmbarralhada.length(); ++idxChar)
        {

            if (idxChar <= lMeio)
            {
                sCorreta += sEmbarralhada[lMeio - idxChar];
            }
            else
                sCorreta += sEmbarralhada[sEmbarralhada.length() - (idxChar -lMeio)];
        }
       
        cout << sCorreta << endl;
    }
    
    return 0;
}
