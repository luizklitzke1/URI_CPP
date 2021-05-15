#include <iostream>
#include <string>

using namespace std;

int main()
{
	long lQuantidadeTestes = 0;
	cin >> lQuantidadeTestes;

	while (lQuantidadeTestes--)
	{
		long lNewtons = 0;
		string sNome = "";

		cin >> sNome >> lNewtons;

		if (sNome == "Thor")
			cout << "Y" << endl;
		else
			cout << "N" << endl;
	}

	return 0;
}
