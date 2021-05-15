#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
	string sEntrada = "";
	cin >> sEntrada;

	std::reverse(sEntrada.begin(), sEntrada.end());

	cout << sEntrada << endl;
	
	return 0;
}