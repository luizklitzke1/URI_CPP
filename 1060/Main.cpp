#include <iostream>

using namespace std;

int main() 
{

	long lQuantidadePositivos = 0;
	
	for (int i = 0; i <=5 ; i ++)
	{
		
		double dValor = 0;
		
		cin >> dValor;
		
		if (dValor > 0)
		{
			lQuantidadePositivos ++;
		}
		
	}
	
	cout << lQuantidadePositivos << " valores positivos" << endl;
	
    return 0;
    
}
