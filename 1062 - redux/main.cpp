#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int main()
{
	stack <long> sTremTemplate;
	stack <long> sEstacao;
	stack <long> sTremA;
	queue <long> qTremB;

	long lQuantidadeVagoes = 5;

	long lVagao = 0;

	bool bValido = 1;

	lQuantidadeVagoes = 5;

	//Cria o template do Trem A
	for (long idx = lQuantidadeVagoes; idx > 0; --idx)
	{
			sTremTemplate.push(idx);
	}

	sTremA = sTremTemplate;

	while (cin >> lVagao && lVagao)
	{
		qTremB.push(lVagao);

		if (qTremB.size() == 5)
		{
			while (!sTremA.empty())
			{
				if (sTremA.top() == qTremB.front())
					qTremB.pop();
				else
					sEstacao.push(sTremA.top());

				sTremA.pop();
			}

			while (!sEstacao.empty())
			{
				if (sEstacao.top() == qTremB.front())
					qTremB.pop();
				else
				{
					bValido = 0;
					break;
				}
			}

			cout << (bValido ? "Yes" : "No") << endl;
		}

	}

	return 0;
}
