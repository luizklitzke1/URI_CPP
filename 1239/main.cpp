#include <iostream>
#include <string>

using namespace std;

int main()
{
	string sLinha = "";

	while (getline(cin, sLinha))
	{
		bool bItalicoAberto = false;
		bool bBoldAberto = false;

		for (long idxChar = 0; idxChar < sLinha.length(); ++idxChar)
		{
			if (sLinha[idxChar] == '_')
			{
				sLinha[idxChar] = '<';
				if (bItalicoAberto)
				{
					sLinha.insert(idxChar + 1, "/");
					sLinha.insert(idxChar + 2, "i");
					sLinha.insert(idxChar + 3, ">");
					bItalicoAberto = false;
				}
				else
				{
					sLinha.insert(idxChar + 1, "i");
					sLinha.insert(idxChar + 2, ">");
					bItalicoAberto = true;
				}
			}
			else if (sLinha[idxChar] == '*')
			{
				sLinha[idxChar] = '<';
				if (bBoldAberto)
				{
					sLinha.insert(idxChar + 1, "/");
					sLinha.insert(idxChar + 2, "b");
					sLinha.insert(idxChar + 3, ">");
					bBoldAberto = false;
				}
				else
				{
					sLinha.insert(idxChar + 1, "b");
					sLinha.insert(idxChar + 2, ">");
					bBoldAberto = true;
				}
			}

		}

		cout << sLinha << endl;
	}
	

	return 0;
}
