#include <iostream>
#include <string>

using namespace std;

int main()
{
    unsigned long ulQuantidadeGritos = 0;

    while (ulQuantidadeGritos < 3)
    {   
        unsigned long ulNumeroLoteria = 0;
        string sMensagem = "";
        
        while (sMensagem != "caw caw")
        {
            getline(cin, sMensagem);

            if (sMensagem == "caw caw")
            {
                ++ulQuantidadeGritos;
                break;
            }
            else
            {
                if (sMensagem[0] == '*')
                    ulNumeroLoteria += 4;

                if (sMensagem[1] == '*')
                    ulNumeroLoteria += 2;

                if (sMensagem[2] == '*')
                    ulNumeroLoteria += 1;
            }
        }
        cout << ulNumeroLoteria << endl;
        
      
    }
    
    return 0;
}
