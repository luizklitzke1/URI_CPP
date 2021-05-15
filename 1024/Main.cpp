#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	unsigned long ulQuantidadeDeTestes = 0;
	cin >> ulQuantidadeDeTestes;
	
	cin.ignore();
	
	while (ulQuantidadeDeTestes--)
	{
		string sMensagem = "";
		getline(cin,sMensagem);
		
		for (long idxChar = 0; idxChar < sMensagem.length(); ++idxChar)
		{
			if (((int)sMensagem[idxChar] > 64 && (int)sMensagem[idxChar] < 91) || ((int)sMensagem[idxChar] > 96 && (int)sMensagem[idxChar] < 123))
				sMensagem[idxChar] += 3;
		}
		
		std::reverse(sMensagem.begin(), sMensagem.end());
	
		for (long idxChar = (sMensagem.length() / 2); idxChar < sMensagem.length(); ++idxChar)
		{
			--sMensagem[idxChar];
		}
		
		cout << sMensagem << endl;
		
	}
	
	return 0;
}