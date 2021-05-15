#include <iostream>

using namespace std;

int main()
{
	
	long lValorI = 1;

	for (long i = 0; i <= 4 ; i ++)
	{

		for (long lValorJ = 7; lValorJ >= 5; lValorJ --)
		{

			cout << "I=" << lValorI << " J=" << lValorJ << endl;

		}
		lValorI += 2;
	}

	return 0;
}
