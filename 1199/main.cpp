#include <iostream>
#include <string>
#include <cmath>

using namespace std;

long long ConverteHexDec(string sHex)
{
    long lTamanho = sHex.length();
    long lBase = 0;
    long long lDec = 0;

    for (long idx = lTamanho - 1; idx >= 0; --idx) 
    {
        if (sHex[idx]>= '0' && sHex[idx] <= '9')
        {
            lDec += (sHex[idx] - 48) * pow(16, lBase);
        }
        else
        {
            switch (tolower(sHex[idx]))
            {
                case 'a':
                    lDec += (10 * pow(16, lBase));
                    break;

                case 'b':
                    lDec += (11 * pow(16, lBase));
                    break;

                case 'c':
                    lDec += (12 * pow(16, lBase));
                    break;

                case 'd':
                    lDec += (13 * pow(16, lBase));
                    break;
                
                case 'e':
                    lDec += (14 * pow(16, lBase));
                    break;

                case 'f':
                    lDec += (15 * pow(16, lBase));
                    break;
            }
        }
        ++lBase;
    }
    return lDec;
}

int main()
{
	string sEntrada = "";

	while (cin >> sEntrada && stol(sEntrada) >= 0)
	{
		if (sEntrada[1] == 'x')
		{
			sEntrada[0] = '0';
			sEntrada[1] = '0';
			cout << std::dec << ConverteHexDec(sEntrada) << endl;
		}
		else
			cout << "0x" << uppercase << std::hex << stoll(sEntrada) << endl;
	}
	
	

	return 0;
}
