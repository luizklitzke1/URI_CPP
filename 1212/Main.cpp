#include <iostream>
#include <string>

using namespace std;

const long MENOR_ASC = 48;

int main()
{
    long lValorA = 0;
    long lValorB = 0;

	while (cin >> lValorA >> lValorB && (lValorA || lValorB))
	{
		string sMaior;
		string sMenor;
	 
		if (lValorA > lValorB)
		{
			sMaior = to_string(lValorA);
			sMenor = to_string(lValorB);
		}
		else
		{
			sMaior = to_string(lValorB);
			sMenor = to_string(lValorA);
		}
		
		sMaior.insert(0, "0");
		
		long lTamanhoMaior = sMaior.length();
		long lTamanhoMenor = sMenor.length();
		
		long lTotalCarry = 0;

		for (long idx = 1; idx <= lTamanhoMaior; ++idx)
		{
			
			if (lTamanhoMenor - idx >= 0)
			{
				long lCarry = (((sMaior[lTamanhoMaior - idx] - MENOR_ASC) + (sMenor[lTamanhoMenor - idx] - MENOR_ASC)) / 10);
				//cout << "Carry: " << lCarry<< " entre: " << (sMaior[lTamanhoMaior - idx] - MENOR_ASC) << " + " << (sMenor[lTamanhoMenor - idx] - MENOR_ASC) << endl;
				if (lCarry)
				{
					sMaior[lTamanhoMaior - idx  - 1] += lCarry;
					++lTotalCarry;
				}
			}
			else if ((sMaior[lTamanhoMaior - idx] - MENOR_ASC) == 10)
			{
				++sMaior[lTamanhoMaior - idx  - 1];
				++lTotalCarry;
			}
			else 
				break;
			
		}
		
		switch (lTotalCarry)
		{
			case 0:
				cout << "No carry operation." << endl;
				break;
			
			case 1:
				cout << "1 carry operation." << endl;
				break;
			
			default:
				cout << lTotalCarry << " carry operations." << endl;
				break;
			
		}

	}
    
    return 0;
}