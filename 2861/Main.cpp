#include <iostream>
#include <string>

using namespace std;

int main()
{
	long lQuantidade = 0;
	cin >> lQuantidade;
	cin.ignore();

	string sStr;

	while (lQuantidade--)
	{
		getline(cin, sStr);
		cout << "gzuz" << endl;
	}
	
	return 0;
}