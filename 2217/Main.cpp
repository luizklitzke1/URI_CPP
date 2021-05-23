#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	long lQtd = 0;
	long lNum = 0;

	cin >> lQtd;

	while (lQtd--)
	{
		cin >> lNum;
		if (lNum % 2 == 0)
			cout << 1 << endl;
		else
			cout << 9 << endl;
	}
}