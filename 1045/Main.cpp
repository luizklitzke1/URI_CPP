#include <iostream>
#include <cmath>

using namespace std;

int main() 
{

    double dValorA = 0;
	double dValorB = 0;
	double dValorC = 0;

    cin >> dValorA >> dValorB >> dValorC;
	
	if (dValorB > dValorA && dValorB > dValorC)
	{
		dValorA = dValorA + dValorB;
		dValorB = dValorA - dValorB;
		dValorA = dValorA - dValorB;
	}
	else{
		if (dValorC > dValorA && dValorC > dValorB)
		{
			dValorA = dValorA + dValorC;
			dValorC = dValorA - dValorC;
			dValorA = dValorA - dValorC;
		}
	}
	
	if (dValorA >= (dValorB + dValorC))
	{
		cout <<  "NAO FORMA TRIANGULO" << endl;
	}
	else
	{
		if (pow(dValorA,2) == (pow(dValorB,2) + pow(dValorC,2)) )
		{
			cout <<  "TRIANGULO RETANGULO" << endl;
		}
		else
		{
			if (pow(dValorA,2) > (pow(dValorB,2) + pow(dValorC,2)))
			{
				cout <<  "TRIANGULO OBTUSANGULO" << endl;
			}
			else
			{
				
				if (pow(dValorA,2) < (pow(dValorB,2) + pow(dValorC,2)))
				{
					cout <<  "TRIANGULO ACUTANGULO" << endl;
				}
			}
		}

		if (dValorA == dValorB && dValorB == dValorC)
		{
			cout <<  "TRIANGULO EQUILATERO" << endl;
		}
		else
		{
			if (dValorA == dValorB || dValorA == dValorC || dValorB == dValorC)
			{
				cout <<  "TRIANGULO ISOSCELES" << endl;
			}
		}
	}
	
	
    return 0;
    
}
