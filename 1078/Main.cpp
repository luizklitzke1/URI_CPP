#include <iostream>

using namespace std;

int main() 
{

	long lValorN = 0;
	
	cin >> lValorN;
	
	for (long i = 1; i <= 10 ; i ++)
	{
		
		cout << i << " x " << lValorN << " = " << lValorN * i << endl;
			
	}
	
    return 0;
    
}
