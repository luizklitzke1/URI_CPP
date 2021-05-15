#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	long lValorN = 0;
	long lValorM = 0;

	long lEntrada = 0;

	cin >> lValorN >> lValorM;

	vector <vector<long>> vLinhas;
	vLinhas.reserve(lValorN);

	for (long idxLinha = 0; idxLinha < lValorN; ++idxLinha)
	{
		vector <long> vNovaLinha;
		vNovaLinha.reserve(lValorM);

		for (long idxColuna = 0; idxColuna < lValorM; ++idxColuna)
		{
			cin >> lEntrada;
			vNovaLinha.push_back(lEntrada);
		}
		vLinhas.push_back(vNovaLinha);

	}

	vector<long>::iterator it;

	bool bEncotrado = 0;

	for (size_t idxLinha = 1; idxLinha < lValorN - 1; ++idxLinha)
	{
		auto& linha = vLinhas[idxLinha];

		it = linha.begin();

		do
		{
			it = find(it, linha.end(), 42);

			if (it != linha.end())
			{
				if ((it - linha.begin() - 1 >= 0 &&
					linha[(it - linha.begin()) - 1] == 7) &&
					(it - linha.begin() + 1 < lValorM &&
					 linha[(it - linha.begin()) + 1] == 7) &&

					vLinhas[idxLinha - 1][(it - linha.begin())] == 7 &&
					vLinhas[idxLinha - 1][(it - linha.begin() - 1)] == 7 &&
					vLinhas[idxLinha - 1][(it - linha.begin() + 1)] == 7 &&

					vLinhas[idxLinha + 1][(it - linha.begin())] == 7 &&
					vLinhas[idxLinha + 1][(it - linha.begin() - 1)] == 7 &&
					vLinhas[idxLinha + 1][(it - linha.begin() + 1)] == 7)
				{
					cout << idxLinha + 1 << " " << it - linha.begin() + 1 << endl;
					bEncotrado = 1;
					break;
				}
				else
					++it;
			}
				
		} 
		while (it != linha.end());
		
		if (bEncotrado)
			break;
	}

	if (!bEncotrado)
		cout << " 0 0" << endl;


	return 0;
}