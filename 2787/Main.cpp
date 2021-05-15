#include <iostream>

using namespace std;

int main()
{
	long lLinhas = 0;
	long lColunas = 0;
	
	cin >> lLinhas >> lColunas;
	
	if ((lLinhas + lColunas) % 2 == 0)
		cout << 1 << endl;
	else
		cout << 0 << endl;
	
	return 0;
}