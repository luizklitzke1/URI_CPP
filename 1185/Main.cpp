#include <iostream>

using namespace std;

const long TAMANHO_VETORES = 12;

int main()
{
	long aValoresInformados[TAMANHO_VETORES][TAMANHO_VETORES] = {0};
	
	char cOperacao = 0;
	cin >> cOperacao;
	
	double dValorInformado = 0;
	double dResultadoFinal = 0;
	long lQuantidadeValida = 0;
	
	for (long idxLinha = 0; idxLinha < TAMANHO_VETORES; ++ idxLinha)
	{
		for (long idxColuna = 0; idxColuna < TAMANHO_VETORES; ++ idxColuna)
		{
			cin >> dValorInformado;
			aValoresInformados[idxLinha][idxColuna] = dValorInformado;
			
			if (idxColuna < (TAMANHO_VETORES - idxLinha - 1))
			{
				dResultadoFinal += dValorInformado;
				++lQuantidadeValida;
			}

		}
	}
	
	if (cOperacao == 'M')
		dResultadoFinal = dResultadoFinal / lQuantidadeValida;

	cout.precision(1);
	cout << fixed << dResultadoFinal << endl;
	

    return 0;
}