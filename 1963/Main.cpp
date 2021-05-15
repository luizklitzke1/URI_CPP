#include <iostream>

using namespace std;

int main()
{
	double dValorOriginal = 0.0;
	double dValorNovo = 0.0;
	
	cin >> dValorOriginal >> dValorNovo;
	
	double dAumento = (dValorNovo - dValorOriginal) * 100 / dValorOriginal;
	
	cout.precision(2);
	cout << fixed << dAumento << "%" << endl;
	
    return 0;
}
