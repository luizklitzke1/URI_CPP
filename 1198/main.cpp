#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	long long lSoldadosR = 0;
	long long lSoldadosO = 0;

	while (cin >> lSoldadosR >> lSoldadosO)
		cout << abs(lSoldadosR - lSoldadosO) << endl;

	return 0;
}
