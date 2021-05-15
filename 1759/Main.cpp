#include <iostream>

using namespace std;

int main()
{
	unsigned long ulQuantidadeDeHo = 0;
	cin >> ulQuantidadeDeHo;
	
	for (long idxHo = 0; idxHo < ulQuantidadeDeHo; ++idxHo)
	{
		if (idxHo == ulQuantidadeDeHo - 1)
			cout << "Ho!" << endl;
		else
			cout << "Ho ";
	}
	
    return 0;
}