#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	long lQuantidadeDeLinhas = 0;
	cin >> lQuantidadeDeLinhas;
	
	long lValorColuna1 = 1;
	long lValorColuna2 = 1;
	long lValorColuna3 = 1;
	
	for (long idxLinha = 0; idxLinha < lQuantidadeDeLinhas * 2; ++idxLinha)
	{
		
		cout << lValorColuna1 << " " << lValorColuna2 << " " << lValorColuna3 << endl;
		
		
		if (idxLinha % 2 == 0)
		{
			lValorColuna2 = pow(lValorColuna1, 2) + 1;
			lValorColuna3 = lValorColuna1 * lValorColuna2;

		}
		else
		{
			++lValorColuna1;
			lValorColuna2 = pow(lValorColuna1, 2);
			lValorColuna3 = lValorColuna1 * lValorColuna2 - (idxLinha - 1) ;
		}
		
	}

    return 0;
}
