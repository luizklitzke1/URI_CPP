#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int main()
{
	long lQuantidadeVagoes = 0;
	long lVagao = 0;
	bool bValido = 1;

	while (cin >> lQuantidadeVagoes && lQuantidadeVagoes)
	{
		stack <long> sTremTemplate;
		stack <long> sEstacao;
		stack <long> sTremA;
		queue <long> qTremB;

		//Cria o template do Trem A
		for (long idx = lQuantidadeVagoes; idx > 0; --idx)
			sTremTemplate.push(idx);

		while (cin >> lVagao && lVagao)
		{
			qTremB.push(lVagao);

			if (qTremB.size() == lQuantidadeVagoes)
			{
				
				bool bValido = 1;

				//Faz a lista do Trem A ser igual ao template
				sTremA = sTremTemplate;

				//Percorre cada um dos vagoes de entrada
				while (!sTremA.empty())
				{
				
					if (sTremA.top() == qTremB.front())
						qTremB.pop();
					else if (!sEstacao.empty())
					{
						while (!qTremB.empty() && !sEstacao.empty() && (sEstacao.top() == qTremB.front()))
						{
							sEstacao.pop();
							qTremB.pop();
						}

						sEstacao.push(sTremA.top());
					}
					else
						sEstacao.push(sTremA.top());
					sTremA.pop();
				}

				//Percorre a queue na estação
				while (!sEstacao.empty())
				{
					if (sEstacao.top() == qTremB.front())
					{
						sEstacao.pop();
						qTremB.pop();
					}
					else
					{
						bValido = 0;
						break;
					}
				}

				cout << (bValido ? "Yes" : "No") << endl;

				sEstacao = stack <long>() ;
				sTremA = stack <long>();
				qTremB = queue <long>();

			}

		}
		cout << endl;
	}

	return 0;
}
