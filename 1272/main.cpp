#include <iostream>
#include <string>

using namespace std;

const long MAIOR_ASC = 97;
const long MENOR_ASC = 122;

int main()
{
	string sLinha = "";
	string sMensagem = "";

	long lQuantidadeTestes = 0;
	cin >> lQuantidadeTestes;
	cin.ignore();

	while (lQuantidadeTestes--)
	{
		getline(cin,sLinha);

		sMensagem = "";
		
		for (long idxChar = 0; idxChar < sLinha.length(); ++idxChar)
		{
			if ((int)sLinha[idxChar] > 96 && (int)sLinha[idxChar] < 123)
			{
				if (idxChar == 0 && sLinha[idxChar] != ' ')
					sMensagem += sLinha[idxChar];
				else if (sLinha[idxChar - 1] == ' ')
					sMensagem += sLinha[idxChar];
			}
		}

		cout << sMensagem << endl;
	}
	
	return 0;
}