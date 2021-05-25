#include <iostream>

using namespace std;

int main()
{
	double dOtavio, dBruno, dIan;

	cin >> dOtavio >>  dBruno >> dIan;

	if (dOtavio < dBruno && dOtavio < dIan)
		cout << "Otavio" << endl;
	else if (dBruno < dOtavio && dBruno < dIan)
		cout << "Bruno" << endl;
	else if (dIan < dOtavio && dIan < dBruno)
		cout << "Ian" << endl;
	else
		cout << "Empate" << endl;


	return 0;
}