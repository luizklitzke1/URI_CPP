#include <iostream>
#include <cmath>
 
using namespace std;

const long QUANTIDADE_CASAS_DECIMAIS = 5;

int main() 
{

    double  dValorA = 0;
	double  dValorB = 0;
	double  dValorC = 0;

    cin >> dValorA >> dValorB >> dValorC ;
	
	double dValorDelta = pow(dValorB, 2) - 4 * dValorA * dValorC;
	
	if (dValorDelta > 0 && dValorA != 0)
	{
		double dValorR1 = (-dValorB + sqrt(dValorDelta)) / (2 * dValorA);
		double dValorR2 = (-dValorB - sqrt(dValorDelta)) / (2 * dValorA);
		
		cout.precision(QUANTIDADE_CASAS_DECIMAIS);
		cout << fixed << "R1 = " << dValorR1 << endl;
		cout << fixed << "R2 = " << dValorR2 << endl;
	}
	
	if (dValorDelta < 0 || dValorA == 0)
	{
		cout << "Impossivel calcular" << endl;
	}

    return 0;
    
}
