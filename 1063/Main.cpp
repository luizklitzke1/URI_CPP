#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int main()
{
    long lQuantidadeVagoes = 0;
    char cVagao = 0;
    bool bValido = 1;

    while (cin >> lQuantidadeVagoes && lQuantidadeVagoes)
    {
        stack <char> sEstacao;
        queue <char> qTremA;
        queue <char> qTremB;

        bool bValido = 1;

        //Cria a queue do Trem A
        for (long idx = lQuantidadeVagoes; idx > 0; --idx)
        {
            cin >> cVagao;
            qTremA.push(cVagao);
        }

        //Cria o stack do Trem B
        while (lQuantidadeVagoes--)
        {
            cin >> cVagao;
            qTremB.push(cVagao);
        }
        
        //Percorre cada um dos vagoes de entrada
        while (!qTremA.empty())
        {
            sEstacao.push(qTremA.front());
            qTremA.pop();
            cout << "I";
        
            if (!sEstacao.empty())
            {
                while (!qTremB.empty() && !sEstacao.empty() && (sEstacao.top() == qTremB.front()))
                {
                    sEstacao.pop();
                    qTremB.pop();
                    cout << "R";
                }
                
            }
        
        }
        
        //Percorre a queue na estação
        while (!sEstacao.empty())
        {
            if (sEstacao.top() == qTremB.front())
            {
                sEstacao.pop();
                qTremB.pop();
                cout << "R";
            }
            else
            {
                bValido = 0;
                cout << " Impossible";
                break;
            }
        }
        
        cout << endl;
        
        sEstacao = stack <char>();
        qTremA = queue <char>();
        qTremB = queue <char>();
    }

    return 0;
}
