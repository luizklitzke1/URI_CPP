#include <iostream>
#include <cmath>

using namespace std;

const long PRECISAO = 0;

int main() 
{

	long lValorN = 0;
	
	cin >> lValorN;
	
	cout.precision(PRECISAO);
	
	for (long i = 1; i <= lValorN; i ++)
	{
		if (i % 2 == 0)
		{
			
			cout << fixed << i << "^2 = " << pow(i,2) << endl; 
		}
		
	}
	
    return 0;
    
}
