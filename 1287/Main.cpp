#include <iostream>
#include <string>

using namespace std;
				  
const long LIMITE_LONG  = 2147483647;

int main()
{
	string sEntrada = "";
	string sSaida = "";
	char cChar = 0;

	bool bValido = 1;

	while(getline(cin, sEntrada))
	{
		bool bValido = 1;
		
		string sSaida = "";

		for (long idxChar = 0; idxChar < sEntrada.length(); ++idxChar)
		{	
			cChar = sEntrada[idxChar];

			if (cChar == 'l' || cChar == 'O' || cChar == 'o' ||
				cChar == ' ' || cChar == ',' ||
				(cChar > 47 && cChar < 58))
			{
				if (cChar == 'l')
					sSaida += '1';
				else if (cChar == 'O' || cChar == 'o')
					sSaida += '0';
				else if (cChar != ' ' && cChar != ',')
					sSaida += cChar;
			}
			else
			{
				sSaida = "";
				break;
			}
		}
		try
			{
				if (sSaida.length() == 0 || stol(sSaida) < 0)
				{
					cout << "error" << endl;
					bValido = 0;
				}
			}
		catch(const std::exception& e)
		{
			cout << "error" << endl;
			bValido = 0;
		}

		if (bValido)
			cout << stol(sSaida) << endl;
		
			
	}
	

	return 0;
}