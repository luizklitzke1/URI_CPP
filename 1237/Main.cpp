#include <iostream>
#include <string>

using namespace std;

int main()
{
	string sPrimeiraPalavra = "";
	string sSegundaPalavra = "";
	
	while (getline(cin, sPrimeiraPalavra) && getline(cin,sSegundaPalavra))
	{
		long lMaiorSub = 0;
		long lTamanhoSub = 0;
		
		string sPalavraMaisLonga = sPrimeiraPalavra;
		string sPalavraMaisCurta = sSegundaPalavra;
	
		if (sPrimeiraPalavra.length() < sSegundaPalavra.length())
		{
			sPalavraMaisLonga = sSegundaPalavra;
			sPalavraMaisCurta = sPrimeiraPalavra;
		}
		
		for (long idxChar = 0; idxChar < sPalavraMaisLonga.length(); ++idxChar)
		{
			for (long idxChar2 = 0; idxChar2 < sPalavraMaisCurta.length(); ++idxChar2)
			{
				if (sPalavraMaisLonga[idxChar] == sPalavraMaisCurta[idxChar2])
				{
					long lTamanhoSub = 1;
					for (long idxChar3 = 1; idxChar2 + idxChar <= sPalavraMaisLonga.length(); ++idxChar3)
					{
						if (sPalavraMaisLonga[idxChar + idxChar3] == sPalavraMaisCurta[idxChar2 + idxChar3]
							&& idxChar + idxChar3 <= sPalavraMaisLonga.length() - 1)
						{
							++lTamanhoSub;
						}
						else
						{
							if (lTamanhoSub > lMaiorSub)
								lMaiorSub = lTamanhoSub;
							break;
						}
							
					}
				}
			}
			
		}
		
		cout << lMaiorSub << endl;
	}
	
	return 0;
}