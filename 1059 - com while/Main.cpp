#include <iostream>

using namespace std;

const long MAIOR_VALOR = 100;

int main() 
{
	long lPossivelPar = 1;
	
	while (lPossivelPar <= MAIOR_VALOR)
	{
		if (lPossivelPar % 2 == 0)
		{
			cout << lPossivelPar << endl;
		}
		++lPossivelPar;
	}
	
    return 0;
    
}
