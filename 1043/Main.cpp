#include <iostream>

using namespace std;

const long QUANTIDADE_CASAS_DECIMAIS  = 1;

int main() 
{

    double dValorA = 0;
	double dValorB = 0;
	double lValorC = 0;

    cin >> dValorA >> dValorB >> lValorC;
	
	cout.precision(QUANTIDADE_CASAS_DECIMAIS);
	
	if (dValorA >= (dValorB + lValorC) || dValorB >= (dValorA + lValorC) || lValorC >= (dValorB + dValorA))
	{
		double dAreaTrapezio = (dValorA + dValorB) * (lValorC / 2);
		cout << fixed << "Area = " << dAreaTrapezio << endl;
	}
	else
	{
		double dPerimetroTriangulo = dValorA + dValorB + lValorC;
		cout << fixed << "Perimetro = " << dPerimetroTriangulo << endl;
	}
	
    return 0;
    
}
