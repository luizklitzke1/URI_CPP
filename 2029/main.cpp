#include <iostream>
#include <cmath>

using namespace std;

const double PI = 3.14;

int main()
{
	double dVolume = 0;
	double dDiametro = 0;
	double dAltura = 0;
	double dArea = 0;

	while (cin >> dVolume >> dDiametro)
	{
		dArea = (PI * pow((dDiametro / 2), 2));
		dAltura = dVolume / dArea;

		cout.precision(2);
		cout << fixed << "ALTURA = " << dAltura << endl;;
		cout << fixed << "AREA = " << dArea << endl;
	}
	
	return 0;
}