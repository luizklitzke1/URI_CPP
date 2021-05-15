#include <iostream>

using namespace std;

int main() 
{

	long lValorN = 0;
	
	cin >> lValorN;
	
	for (long i = 0; i < lValorN; i ++)
	{
		
		long lValorX = 0;
		
		cin >> lValorX;
		
		if (lValorX % 2 == 0)
		{
			if (lValorX > 0)
			{
				cout << "EVEN POSITIVE" << endl;
			}
			else
			{
				if (lValorX < 0)
				{
					cout << "EVEN NEGATIVE" << endl;
				}
				else
				{
					cout << "NULL" << endl;
				}
			}
		}
		else
		{
			if (lValorX > 0)
			{
				cout << "ODD POSITIVE" << endl;
			}
			else
			{
				cout << "ODD NEGATIVE" << endl;
			}
		}
			
	}
	
	
    return 0;
    
}
