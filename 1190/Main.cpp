#include <iostream>

using namespace std;

const long TAMANHO_VETORES = 12;
const char CODIGO_MEDIA = 'M';

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
			
			if (idxColuna > 6)
			{
				if (idxLinha < 6 && idxColuna > (TAMANHO_VETORES - idxLinha -
				1 ))
				{
					dResultadoFinal += dValorInformado;
					++lQuantidadeValida;
				}
				else if(idxLinha >= 6 && idxColuna > idxLinha)
				{
					dResultadoFinal += dValorInformado;
					++lQuantidadeValida;
				}
			}
		}
	}
	
	if (cOperacao == CODIGO_MEDIA)
		dResultadoFinal = dResultadoFinal / lQuantidadeValida;

	cout.precision(1);
	cout << fixed << dResultadoFinal << endl;
	

    return 0;
}