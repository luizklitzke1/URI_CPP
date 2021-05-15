#include <iostream>

using namespace std;

const long TAMANHO_VETORES = 12;

int main()
{
	long aValoresInformados[TAMANHO_VETORES][TAMANHO_VETORES] = {0};
	
	long lNumeroLinha = 0;
	char cOperacao = 0;
	cin >> lNumeroLinha >> cOperacao;
	
	double dValorInformado = 0;
	double dResultadoFinal = 0;
	
	for (long idxLinha = 0; idxLinha < TAMANHO_VETORES; ++ idxLinha)
	{
		for (long idxColuna = 0; idxColuna < TAMANHO_VETORES; ++ idxColuna)
		{
			cin >> dValorInformado;
			aValoresInformados[idxLinha][idxColuna] = dValorInformado;
		}
	}
	
	for (long idxValor = 0; idxValor < TAMANHO_VETORES; ++ idxValor)
	{
		dResultadoFinal += aValoresInformados[lNumeroLinha][idxValor];
	}
	if (cOperacao == 'M')
		dResultadoFinal = dResultadoFinal / TAMANHO_VETORES;

	cout.precision(1);
	cout << fixed << dResultadoFinal << endl;
	

    return 0;
}