#include <iostream>

using namespace std;

int main()
{
	long lDia = 0;
	long lMes = 0;
	long lAno = 0;

	char cSinal = 0;

	cin >> lDia >> cSinal >> lMes >> cSinal >> lAno;

	if (lMes < 10)
		cout << "0" << lMes << "/";
	else
		cout << lMes << "/";

	if (lDia < 10)
		cout << "0" << lDia << "/";
	else
		cout << lDia << "/";

	if (lAno < 10)
		cout << "0" << lAno;
	else
		cout << lAno;

	cout << endl;

	if (lAno < 10)
		cout << "0" << lAno << "/";
	else
		cout << lAno << "/";

	if (lMes < 10)
		cout << "0" << lMes << "/";
	else
		cout << lMes << "/";

	if (lDia < 10)
		cout << "0" << lDia;
	else
		cout << lDia;

	cout << endl;

	if (lDia < 10)
		cout << "0" << lDia << "-";
	else
		cout << lDia << "-";

	if (lMes < 10)
		cout << "0" << lMes << "-";
	else
		cout << lMes << "-";

	if (lAno < 10)
		cout << "0" << lAno;
	else
		cout << lAno;

	cout << endl;

}