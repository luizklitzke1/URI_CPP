#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	long lCase = 0;

	long lNumeroMarmores = 0;
	long lQuantidadeConsultas = 0;

	long lMarmore = 0;
	long lPesquisa = 0;

	std::vector <long> vMarmores = {};

	while (cin >> lNumeroMarmores >> lQuantidadeConsultas && lNumeroMarmores && lQuantidadeConsultas)
	{
		++lCase;

		std::vector<long>::iterator it;

		vMarmores = {};

		while (lNumeroMarmores--)
		{
			cin >> lMarmore;
			vMarmores.push_back(lMarmore);
		}
		sort(vMarmores.begin(), vMarmores.end());

		cout << "CASE# " << lCase << ":" << endl;

		while (lQuantidadeConsultas--)
		{
			cin >> lPesquisa;
			
			it = std::find (vMarmores.begin(), vMarmores.end(), lPesquisa);

			if (it != vMarmores.end())
			{
				std::cout << lPesquisa << " found at " << it - vMarmores.begin() + 1 << endl;
			}
			else
				std::cout << lPesquisa << " not found" << endl;
		}

	}
	
	return 0;
}
