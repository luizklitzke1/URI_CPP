#include <iostream>

using namespace std;

int main() 
{

    double dValorX = 0;
	double dValorY = 0;

	while (true)
	{
		cin >> dValorX >> dValorY;
	
		if (dValorX == 0 || dValorY == 0)
			break;
		else if (dValorX > 0 && dValorY > 0)
			cout << "primeiro" << endl;
		else if (dValorX > 0 && dValorY < 0)
			cout << "quarto" << endl;
		else if (dValorX < 0 && dValorY < 0)
			cout << "terceiro" << endl;
		else
			cout << "segundo" << endl;
	}
	
    return 0;
    
}
