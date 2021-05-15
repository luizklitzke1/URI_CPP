#include <iostream>

using namespace std;

int main()
{
	
	double dValorI = 0;
	double dValorJ = 1;

	while (dValorI < 2)
	{

		for (long i = 0; i < 3; i ++)
		{

			cout << "I=" << dValorI << " J=" << dValorJ << endl;
			dValorJ ++;

		}

		dValorI += .2;
		dValorJ = 1 + (.2 * (dValorI / .2));
		
	}

	return 0;
}
