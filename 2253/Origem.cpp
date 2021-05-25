#include <iostream>
#include <string>

using namespace std;

int main()
{
	string sSenha;

	bool bM, bm, bN, bF;

	while (getline(cin, sSenha))
	{
		bool bM = false;
		bool bm = false;
		bool bN = false;
		bool bF = false;

		if (sSenha.length() >= 6 && sSenha.length() <= 32)
		{
			for (const char c : sSenha)
			{
				if (c >= 'A' && c <= 'Z')
					bM = true;
				else if (c >= 'a' && c <= 'z')
					bm = true;
				else if (c >= '0' && c <= '9')
					bN = true;
				else
				{
					bF = true;
					break;
				}
			}
		}
		else
			bF = true;


		if (bM && bm && bN && !bF)
			cout << "Senha valida." << endl;
		else
			cout << "Senha invalida." << endl;
	}
	return 0;
}