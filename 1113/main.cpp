#include <iostream>

using namespace std;

int main()
{

	long lValorX = 1;
	long lValorY = 1;
	
	while (true)
	{

		cin >> lValorX >> lValorY;

		if (lValorX == lValorY)
		{
			break;
		}

		if (lValorX > lValorY){
			cout << "Decrescente" << endl;

		}
		else
		{
			cout << "Crescente" << endl;
		}

	}
	

	return 0;
}
