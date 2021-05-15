#include <iostream>
#include <string>

using namespace std;

const long MAXIMO_IMAGENS = 10001;

int main()
{
	string aImagens[MAXIMO_IMAGENS];
	
	long lQuantidadeTestes = 0;

	while (cin >> lQuantidadeTestes && lQuantidadeTestes)
	{
		for (long idx = 0; idx < lQuantidadeTestes; ++idx)
			cin >> aImagens[idx];
		
		long lMaiorSequencia = 0;
		
		string sInicioMaior = "";
		for (long idxInicial = 0; idxInicial < lQuantidadeTestes; ++idxInicial)
		{
			long lSequencia = 1;
			cout << "Inicial: " << aImagens[idxInicial] << endl;
			string sSubstring = aImagens[idxInicial];
			for (long idxImagem = 0; idxImagem < lQuantidadeTestes; ++idxImagem)
			{
				if (aImagens[idxImagem] != aImagens[idxInicial])
					if (aImagens[idxImagem].find(sSubstring) < aImagens[idxImagem].length())
					{
						cout << aImagens[idxImagem] << endl;
						++lSequencia;
						sSubstring = aImagens[idxImagem];
					}
			}
			
			if (lSequencia > lMaiorSequencia)
			{
				sInicioMaior = aImagens[idxInicial];
				lMaiorSequencia = lSequencia;
				
			}
		}
		
		cout << "maior: " << lMaiorSequencia << endl;
		cout << "inicio: " << sInicioMaior << endl;
	}
	
	
	return 0;
}