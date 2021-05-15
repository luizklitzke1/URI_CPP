#include <iostream>

using namespace std;

const long TAMANHO_LINHA = 12;
const long TAMANHO_COLUNA = 12;

const char CODIGO_SOMA = 'S';
const char CODIGO_MEDIA = 'M';

const long CASAS_DECIMAIS = 1;

int main()
{
	unsigned long lLinhaOperada = 0;
	unsigned char ucOperacao = 0;

	cin >> lLinhaOperada >> ucOperacao;

	double dSoma = 0;

	long aMatriz[TAMANHO_LINHA][TAMANHO_COLUNA] = {0};

	for (long idxLinha = 0; idxLinha < TAMANHO_LINHA; ++idxLinha)
	{
		for (long idxColuna = 0; idxColuna < TAMANHO_COLUNA; ++idxColuna)
		{
			cin >> aMatriz[idxLinha][idxColuna];

			if (idxLinha == lLinhaOperada)
				dSoma += aMatriz[idxLinha][idxColuna];
		}
	}

	cout.precision(CASAS_DECIMAIS);
	if (ucOperacao == CODIGO_SOMA)
		cout << fixed << dSoma << endl;
	else if (ucOperacao == CODIGO_MEDIA)
		cout << fixed << dSoma / TAMANHO_LINHA << endl;

	return 0;
}