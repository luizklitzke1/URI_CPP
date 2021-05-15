#include <iostream>

using namespace std;

int main() 
{

    double dValorX = 0;
	double dValorY = 0;

    cin >> dValorX >> dValorY;
	
	if (dValorX == 0 && dValorY == 0)
	{
		cout << "Origem" << endl;
	}
	else
	{
		
		if (dValorX == 0)
		{
			cout << "Eixo Y" << endl;
		}
		else
		{
			if (dValorY == 0)
			{
				cout << "Eixo X" << endl;
			}
			else
			{
				if (dValorX > 0 && dValorY > 0)
				{
					cout << "Q1" << endl;
				}
				else
				{
					if (dValorX > 0 && dValorY < 0)
					{
						cout << "Q4" << endl;
					}
					else
					{
						if (dValorX < 0 && dValorY < 0)
						{
							cout << "Q3" << endl;
						}
						else
						{
							cout << "Q2" << endl;
						}
					}
				}
			}
		}
		
		
	}
	
    return 0;
    
}
