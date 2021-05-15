#include <iostream>

using namespace std;

const double PI = 3.14159;
const long QUANTIDADE_CADAS_DECIMAIS = 99;

int main()
{
	
	double dValorRaio = 0;
	cin >> dValorRaio;
	
	double dAreaCirculo = PI * (lValorRaio * lValorRaio);
	
	cout.precision(QUANTIDADE_CADAS_DECIMAIS);
	cout << fixed << "A=" << dAreaCirculo << endl;
	
	return 0;
	
}