#include <iostream>
#include <string>

using namespace std;

int main()
{
    long lQuantidadeDeTestes = 0;
    cin >> lQuantidadeDeTestes;

    while (lQuantidadeDeTestes--)
    {
        string sNumeroTeste = "";
        cin >> sNumeroTeste;

        long lQuantidadeLeds = 0;

        for (long idxChar = 0; idxChar < sNumeroTeste.length(); ++ idxChar)
        {
            char cDigito = sNumeroTeste[idxChar];

            if (cDigito == '1')
                lQuantidadeLeds += 2;
            else if (cDigito == '7')
                lQuantidadeLeds += 3;   
            else if (cDigito == '4')
                lQuantidadeLeds += 4;
            else if (cDigito == '8')
                lQuantidadeLeds += 7;
            else if (cDigito == '2' || cDigito == '3' || cDigito == '5')
                lQuantidadeLeds += 5;
            else
                lQuantidadeLeds += 6;
        }

        cout << lQuantidadeLeds << " leds" << endl;
    }
    
    return 0;
}
