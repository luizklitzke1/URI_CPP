#include <iostream>
#include <string>

using namespace std;

int main()
{

	long lDecimal = 0;
	cin >> lDecimal;

	string sRomano = "";

	long lM = lDecimal / 1000;
	lDecimal -= lM * 1000;

	while (lM--)
		sRomano += "M";


	if (lDecimal >= 900)
	{
		sRomano += "CM";
		lDecimal -= 900;
	}

	if (lDecimal >= 500)
	{
		lDecimal -= 500;
		sRomano += "D";
	}

	if (lDecimal >= 400)
	{
		lDecimal -= 400;
		sRomano += "CD";
	}

	long lC = lDecimal / 100;
	lDecimal -= lC * 100;
	while (lC--)
		sRomano += "C";

	if (lDecimal >= 90)
	{
		sRomano += "XC";
		lDecimal -= 90;
	}

	if (lDecimal >= 50)
	{
		sRomano += "L";
		lDecimal -= 50;
	}


	if (lDecimal >= 40)
	{
		sRomano += "XL";
		lDecimal -= 40;
	}

	long lX = lDecimal / 10;
	lDecimal -= lX * 10;
	while (lX--)
		sRomano += "X";
	
	if (lDecimal >= 9)
	{
		sRomano += "IX";
		lDecimal -= 9;
	}

	if (lDecimal >= 5)
	{
		sRomano += "V";
		lDecimal -= 5;
	}

	if (lDecimal >= 4)
	{
		sRomano += "IV";
		lDecimal -= 4;
	}

	while (lDecimal--)
		sRomano += "I";

	cout << sRomano << endl;

	return 0;
}
