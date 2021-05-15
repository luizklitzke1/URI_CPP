#include <iostream>

using namespace std;

int main()
{
	double dGraus = 0;
	
	while (cin >> dGraus)
	{
		if (dGraus >= 90 && dGraus < 180)
			cout << "Boa Tarde!!";
		else if (dGraus >= 180 && dGraus < 270)
			cout << "Boa Noite!!";
		else if (dGraus >= 270 && dGraus < 360)
			cout << "De Madrugada!!";
		else
			cout << "Bom Dia!!";
		cout << endl;
		
		long lSegundosRot = (86400 / 360) * dGraus + (3600 * 6);
		
		long lHorasRot = lSegundosRot / 3600;
		lSegundosRot -= lHorasRot * 3600;
		
		long lMinutosRot = lSegundosRot / 60;	
		lSegundosRot -= lMinutosRot * 60;
		
		if (lHorasRot >= 24)
			lHorasRot -= 24;

		if (lHorasRot < 10)
			cout << 0;
		
		cout << lHorasRot << ":";

		if (lMinutosRot < 10)
			cout << 0;

		cout << lMinutosRot << ":";

		if (lSegundosRot < 10)
			cout << 0;

		cout << lSegundosRot << endl;
	}
	
	return 0;
}