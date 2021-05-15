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
	}
	
	return 0;
}