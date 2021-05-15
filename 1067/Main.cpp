#include <iostream>

using namespace std;

int main() 
{

	long lValorX = 0;
	
	cin >> lValorX;
	
	for (int i = 1; i <= lValorX ; i ++)
	{
		
		if (i % 2 != 0)
		{
			cout << i << endl;
		}
	}
	
    return 0;
    
}
