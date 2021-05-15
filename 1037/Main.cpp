#include <iostream>

using namespace std;

int main() 
{

    double  dValorA = 0;

    cin >> dValorA;
	
	
	if (dValorA < 0 || dValorA > 100)
	{
		cout << "Fora de intervalo" << endl;
	}
	else
	{
		
		if (dValorA >= 0 && dValorA <= 25)
		{
			cout << "Intervalo [0,25]" << endl;
		}
		else
		{
			
			if (dValorA > 25 && dValorA <= 50)
			{
				cout << "Intervalo (25,50]" << endl;
			}
			else
			{
				
				if (dValorA > 50 && dValorA <= 75)
				{
					cout << "Intervalo (50,75]" << endl;
				}
				else
				{
					
					cout << "Intervalo (75,100]" << endl;
					
				}
				
			}
			
		}
		
	}
	
    return 0;
    
}
