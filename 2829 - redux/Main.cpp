#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector <string> vPalavras = {}; 
	string sPalavra = "";

	long lQuantidadeDeCasos = 0;
	cin >> lQuantidadeDeCasos;

	while (lQuantidadeDeCasos--)
	{
		cin >> sPalavra;

		vPalavras.push_back(sPalavra);
	}

	
	sort(vPalavras.begin(), vPalavras.end(), [](const auto& lhs, const auto& rhs){
		const auto result = mismatch(lhs.cbegin(), lhs.cend(), rhs.cbegin(), rhs.cend(), [](const auto& lhs, const auto& rhs){return tolower(lhs) == tolower(rhs);});
		
		return result.second != rhs.cend() && (result.first == lhs.cend() || tolower(*result.first) < tolower(*result.second));
	});
	
	for(auto& i : vPalavras) {
		cout << i << endl;
	}
	
	return 0;
}