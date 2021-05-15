#include <iostream>

using namespace std;

int main() 
{
	long lBolinhas = 0;
	long lGalhos = 0;
	
	cin >> lBolinhas >> lGalhos;
	
	if (lBolinhas < lGalhos / 2)
		cout << "Faltam " << lGalhos / 2 - lBolinhas << " bolinha(s)" << endl;
	else
		cout << "Amelia tem todas bolinhas!" << endl;
	
    return 0;
    
}
