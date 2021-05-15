#include <iostream>

using namespace std;

int main()
{
    
    long lValorX = 1;
    long lQuantidadePares = 0;
    long lSomaPares = 0;

    while (true)
    {
        cin >> lValorX;

        if (lValorX == 0)
        {
            break;
        }

        lSomaPares = 0;
        lQuantidadePares = 0;
        while (lQuantidadePares < 5)
        {
            if(lValorX % 2 == 0)
            {   
                 lSomaPares += lValorX;
                 ++lQuantidadePares;
            }
            ++lValorX;
        }

        cout << lSomaPares << endl;
    }

    return 0;
}
