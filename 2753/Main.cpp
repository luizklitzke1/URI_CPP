#include <iostream>

using namespace std;

int main()
{
	long lDecimal = 97;
	
	while (lDecimal <= 122)
	{
		cout << lDecimal << " e " << (char)lDecimal << endl;
		++lDecimal;
	}
	
	
	return 0;
}