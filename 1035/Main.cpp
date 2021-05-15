#include <iostream>
 
using namespace std;

int main() 
{

    long  lValorA = 0;
	long  lValorB = 0;
	long  lValorC = 0;
	long  lValorD = 0;
    
    cin >> lValorA >> lValorB >> lValorC >> lValorD;
	
	if (lValorB > lValorC && lValorD > lValorA && ((lValorC + lValorD) > (lValorA + lValorB)))
	{
		cout << "Valores aceitos" << endl;
	}
	else
	{
		cout << "Valores nao aceitos" << endl;
	}
	
    return 0;
    
}
