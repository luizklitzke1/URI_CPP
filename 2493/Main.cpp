#include <iostream>
#include <string>
#include <vector>
#include <set>

using namespace std;

int main()
{
    unsigned long lQtd = 0;

    long lResultado = 0;
    long lValorA = 0;
    long lValorB = 0;

    char cOperacao = 0;

    long lIdx = 0;

    long lPassados = 0;

    string sNome;
    
    string sEntrada;

    bool bPassou = false;

    while (cin >> lQtd)
    {
        vector<char> aTestes;

        for (size_t i = 0; i < lQtd; ++i)
        {
            cin >> lResultado >> lValorA >> cOperacao >> lValorB;

            if (lResultado + lValorA == lValorB)
                aTestes.push_back('+');
            else if (lResultado - lValorA == lValorB)
                aTestes.push_back('-');
            else if (lResultado * lValorA == lValorB)
                aTestes.push_back('*');
            else
                aTestes.push_back('I');
        }

        set<string> sNomes;

        lPassados = 0;

        for (size_t j = 0; j < lQtd; ++j)
        {
            bPassou = false;

            cin >> sNome >> lIdx >> cOperacao;

            switch (aTestes[lIdx - 1])
            {
                case '+':
                    if (cOperacao == '+')
                        bPassou = true;
                    break;

                case '-':
                    if (cOperacao == '-')
                        bPassou = true;
                    break;

                case '*':
                    if (cOperacao == '*')
                        bPassou = true;
                    break;

                case 'I':
                    if (cOperacao == 'I')
                        bPassou = true;
                    break;
            }

            if (!bPassou)
                sNomes.insert(sNome);
            else
                ++lPassados;
        }

        if (lPassados == 0)
            cout << "None Shall Pass!" << endl;
        else if (lPassados == lQtd)
            cout << "You Shall All Pass!" << endl;
        else
        {
            std::set<string>::iterator it = sNomes.begin();

            cout << *it;
            ++it;

            while (it != sNomes.end())
            {
                cout << " " << *it;
                ++it;
            }

            cout << endl;
        }
    }

    return 0;
}
