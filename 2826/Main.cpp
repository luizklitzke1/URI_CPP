#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() 
{
	string sPrimeiraPalavra = "";
	string sSegundaPalavra = "";
	
	cin >> sPrimeiraPalavra >> sSegundaPalavra;
	
	string sPalavraMaisLonga = sPrimeiraPalavra;
	string sPalavraMaisCurta = sSegundaPalavra;
	
	if (sPrimeiraPalavra.length() < sSegundaPalavra.length())
	{
		sPalavraMaisLonga = sSegundaPalavra;
		sPalavraMaisCurta = sPrimeiraPalavra;
	}
	
	string sMenorPalavra = ""; 
	string sMaiorPalavra = "";
    
	for (long idxChar = 0; idxChar < sPalavraMaisLonga.length(); ++idxChar)
	{
		if (sPalavraMaisLonga[idxChar] < sPalavraMaisCurta[idxChar])
		{
			sMenorPalavra = sPalavraMaisLonga;
			sMaiorPalavra = sPalavraMaisCurta;
			break;
		}
		else if (sPalavraMaisLonga[idxChar] > sPalavraMaisCurta[idxChar])
		{
			sMenorPalavra = sPalavraMaisCurta;
			sMaiorPalavra = sPalavraMaisLonga;
			break;
		}
	}

	cout << sMenorPalavra << endl;
	cout << sMaiorPalavra << endl;
	
    return 0;
}
