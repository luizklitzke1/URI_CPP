#include <iostream>

using namespace std;

const long TAMANHO_VETORES = 1000;

int main()
{
	long aValoresInformados[TAMANHO_VETORES] = {0};
	
	long lQuantidadeEntradas = 0;
	cin >> lQuantidadeEntradas;
	
	long lMenorValor = 1000;
	long lMenorValorPosicao = 0;
	long lValorAtual = 0;
	
	for (long idxValor = 0; idxValor < lQuantidadeEntradas; ++ idxValor)
	{
		cin >> lValorAtual;
		
		if (lValorAtual <= lMenorValor)
		{
			lMenorValor = lValorAtual;
			lMenorValorPosicao = idxValor;
		}
	}
	
	cout << "Menor valor: " << lMenorValor << endl;
	
	cout << "Posicao: " << lMenorValorPosicao << endl;
	

    return 0;
}