#include <iostream>
#include <string>

using namespace std;

int main()
{
    string sFraseNormal = "";

    while (getline(cin, sFraseNormal))
    {
       string sFraseDancante = "";

       bool bUpper = true;

       for (long idxChar = 0; idxChar < sFraseNormal.length(); ++idxChar)
       {
           if (bUpper && sFraseNormal[idxChar] != ' ')
           {
               sFraseDancante += toupper(sFraseNormal[idxChar]);
               bUpper = false;
           }
           else if (!bUpper && sFraseNormal[idxChar] != ' ')
           {
               sFraseDancante += tolower(sFraseNormal[idxChar]);
               bUpper = true;
           }
           else
                sFraseDancante += sFraseNormal[idxChar];
       }
       cout << sFraseDancante << endl;
    }
    
    return 0;
}
