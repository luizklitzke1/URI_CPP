#include <iostream>

using namespace std;

const long TAMANHO_VETOR = 1000;

int main()
{
	long aValores[TAMANHO_VETOR] = {0};
	long lTamanhoLoop = 0;
	
	cin >> lTamanhoLoop;

	long lLoopsPercorridos = 0;
	long lValoresPercorridos = 0;
	while (lValoresPercorridos < TAMANHO_VETOR)
	{
		for (long idxRepeticao = 0; idxRepeticao < lTamanhoLoop; ++idxRepeticao)
		{
			aValores[(lLoopsPercorridos * (lTamanhoLoop))+ idxRepeticao] = idxRepeticao;
			++lValoresPercorridos;
		}
		++lLoopsPercorridos;
	}

	for (long idxValor = 0; idxValor < TAMANHO_VETOR; ++idxValor)
	{
		cout << "N[" << idxValor << "] = " << aValores[idxValor] << endl;
	}
    return 0;
}