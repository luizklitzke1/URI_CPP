#include <iostream>
#include <string>

using namespace std;

int main() 
{
	double dValor = 0;
	
	cin >> dValor;
	
	cout.precision(4);
	
	if (to_string(dValor)[0] == '-')
		cout << fixed << uppercase <<  std::scientific << dValor << endl; 
	else
		cout << "+" << fixed << uppercase <<  std::scientific << dValor << endl; 
	
    return 0;
    
}
