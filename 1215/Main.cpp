#include <iostream>
#include <string>
#include <algorithm>
#include <set>

using namespace std;

const long MENOR_ASC = 97;
const long MAIOR_ASC = 122;

int main()
{
	string sLinha;
	string sPalavra;

	set<string> sDicionario;

	while (getline(cin, sLinha))
	{
		for (size_t idx = 0; idx < sLinha.size(); ++idx)
		{
			if (tolower(sLinha[idx]) >= MENOR_ASC && tolower(sLinha[idx]) <= MAIOR_ASC)
				sPalavra += tolower(sLinha[idx]);
			else
			{
				sDicionario.insert(sPalavra);
				sPalavra = "";
			}

		}
		sDicionario.insert(sPalavra);
		sPalavra = "";
	}

	for (const string& sStrPalavra : sDicionario)
	{
		if (sStrPalavra.size() > 0) 
			cout << sStrPalavra << endl;
	}
		
}