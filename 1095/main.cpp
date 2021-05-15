#include <iostream>

using namespace std;

int main()
{
	
	long lValorI = 1;

	for (long lValorJ = 60; lValorJ >= 0; lValorJ -= 5)
	{

		cout << "I=" << lValorI << " J=" << lValorJ << endl;
		lValorI += 3;

	}

	return 0;
}
