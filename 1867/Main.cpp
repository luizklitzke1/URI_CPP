#include <iostream>
#include <string>

using namespace std;

int main()
{
	string sA, sB;

	unsigned long long cA, cB;

	while (cin >> sA >> sB && sA != "0" && sB != "0")
	{
		do
		{
			cA = 0;
			for (long i = 0; i < sA.length(); i++)
				cA += sA[i] - '0';
			sA = to_string(cA);

		} while (cA > 9);
		

		do
		{
			cB = 0;

			for (long i = 0; i < sB.length(); i++)
				cB += sB[i] - '0';
			sB = to_string(cB);
		}
		while (cB > 9);
		

		if (cB == cA)
			cout << 0 << endl;
		else if (cA > cB)
			cout << 1 << endl;
		else
			cout << 2 << endl;
	}

	return 0;
}