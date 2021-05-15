#include <iostream>

using namespace std;

int main()
{
	
	long lValorI = 1;
	long lValorJ = 7;

	for (long i = 0; i <= 4 ; i ++)
	{

		for (long i2 = 0; i2 < 3; i2 ++)
		{

			cout << "I=" << lValorI << " J=" << lValorJ << endl;
			lValorJ --;

		}

		lValorI += 2;
		lValorJ += 5;

	}

	return 0;
}
