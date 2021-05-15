#include <iostream>
#include <string>
#include <regex>

using namespace std;

int main()
{
	string sTagOriginal = "";
	string sNovaTag = "";
	string sLinha = "";

	while (cin >> sTagOriginal >> sNovaTag)
	{
		cin.ignore();
		getline(cin, sLinha);

		string sOriginalSense = "";

		sLinha = std::regex_replace(sLinha, std::regex("(?i)(" + sTagOriginal + ")(?-i)"), sNovaTag);

		cout << "oi" << endl;
		cout << sLinha << endl;

	}
	

	return 0;
}
