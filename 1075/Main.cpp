#include <iostream>

using namespace std;

int main() 
{

	long lValorN = 0;
	
	cin >> lValorN;
	
	for (long i = 1; i <= 10000 ; i ++)
	{
		
		if (i % lValorN == 2)
		{
			cout << i << endl;
		}
			
	}
	
    return 0;
    
}
