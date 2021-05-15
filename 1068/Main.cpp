#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
    string sEntrada;

    bool bValido = 1;

    while (getline(cin, sEntrada))
    {
        bool bValido = 1;

        stack<char> stAbertos;

        for (long idxLetra = 0; idxLetra < sEntrada.length(); idxLetra++)
        {
            if (sEntrada[idxLetra] == '(')
                stAbertos.push('(');

            if (sEntrada[idxLetra] == ')')
            {
                if (stAbertos.empty())
                {
                    bValido = 0;
                    break;
                }
                else
                    stAbertos.pop();
            }
        }

        if (!stAbertos.empty())
            bValido = 0;
        
        cout << (bValido ? "correct" : "incorrect") << endl;
    }

    return 0;
}