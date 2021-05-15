#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	vector <string> aEstudantes;
	vector <string> aFrequencias;
	vector <string> aReprovados;
	
	long lQuantidadeTestes = 0;
	cin >> lQuantidadeTestes;
	
	while (lQuantidadeTestes--)
	{
		aEstudantes = {};
		aFrequencias = {};
		aReprovados = {};
		
		long lQuantidadeEstudantes = 0;
		cin >> lQuantidadeEstudantes;
		cin.ignore();
		
		string sNomes = "";
		string sFrequencias = "";
		
		getline(cin, sNomes);
		getline(cin, sFrequencias);
		
		string sNome = "";
		
		for (long idxChar = 0; idxChar < sNomes.length(); ++idxChar)
		{
			if (sNomes[idxChar] != ' ')
				sNome += sNomes[idxChar];
			if (sNomes[idxChar] == ' ' || idxChar == sNomes.length() - 1)
			{
				aEstudantes.push_back(sNome);
				sNome = "";
			}
		}
		
		string sFrequencia = "";
		for (long idxChar = 0; idxChar < sFrequencias.length(); ++idxChar)
		{
			if (sFrequencias[idxChar] != ' ')
				sFrequencia += sFrequencias[idxChar];
			if (sFrequencias[idxChar] == ' ' || idxChar == sFrequencias.length() - 1)
			{
				aFrequencias.push_back(sFrequencia);
				sFrequencia = "";
			}
		}
		
		for (long idxEstudante = 0; idxEstudante < lQuantidadeEstudantes; ++idxEstudante)
		{
			long lFaltas = 0;
			long lTotal = 0;
			
			for (long idxChar = 0; idxChar < aFrequencias[idxEstudante].length(); ++idxChar)
			{
				if (aFrequencias[idxEstudante][idxChar] == 'A')
					++lFaltas;
				if (aFrequencias[idxEstudante][idxChar] != 'M')
					++lTotal;
			}

			if ((double)lFaltas / lTotal > .25)
				aReprovados.push_back(aEstudantes[idxEstudante]);
		}
		
		for (long idxRep = 0; idxRep < aReprovados.size(); ++idxRep)
		{
			if (idxRep < aReprovados.size() - 1)
				cout << aReprovados[idxRep] << " ";
			else
				cout << aReprovados[idxRep] << endl;
		}
		if (aReprovados.size() == 0)
			cout << endl;
		
		
		
	}
	
	return 0;
}