#include <iostream>
#include <string>

using namespace std;

int main()
{
	string sLinha;

	bool bB = false;

	while (getline(cin, sLinha))
	{
		if (sLinha.find("<body>") != std::string::npos)
		{
			bB = true;
			continue;
		}

		else if (sLinha.find("</body>") != std::string::npos)
		{
			bB = false;
			continue;
		}

		if (bB)
			cout << sLinha << endl;
			
	}

	return 0;
}