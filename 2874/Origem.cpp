#include <iostream>
#include <string>
#include <cmath>

using namespace std;

long long ConverteBinPraDec(string sBin)
{
	long long lDecimal = 0;

	for (long idx = 0; idx < sBin.length(); ++idx)
		lDecimal += (sBin[sBin.length() - 1 - idx] - 48) * pow(2, idx);

	return lDecimal;
}

int main()
{
	int N;

	long long lDecimal;

	string sLinha;

	while (cin >> N)
	{
		while (N--)
		{ 
			cin >> sLinha;

			lDecimal = ConverteBinPraDec(sLinha);

			cout << (char)lDecimal;
		}
		
		cout << endl;
	}


	return 0;
}