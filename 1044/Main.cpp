#include <iostream>

using namespace std;

int main() 
{

    long lValorA = 0;
	long lValorB = 0;

    cin >> lValorA >> lValorB;
	
	if ((lValorA % lValorB) == 0 || (lValorB % lValorA) == 0)
	{
		cout <<  "Sao Multiplos" << endl;
	}
	else
	{
		cout <<  "Nao sao Multiplos" << endl;
	}
	
    return 0;
    
}
