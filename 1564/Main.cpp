#include <iostream>

using namespace std;

int main()
{
	unsigned long ulQuantidadeProtestos = 0;
	
	while (cin >> ulQuantidadeProtestos)
	{
		if (ulQuantidadeProtestos == 0)
			cout << "vai ter copa!" << endl;
		else
			cout << "vai ter duas!" << endl;
	}

    return 0;
}