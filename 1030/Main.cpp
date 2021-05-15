#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() 
{
    long lNumeroTestes = 0;
    cin >> lNumeroTestes;
	
	long lQuantidadePessoas = 0;
	std::vector<long> vPessoas = {};
	std::vector<long> vPessoasFora = {};
	long lTamanhoSalto = 0;
	long idxPessoaSair = 0;
	
	for (long idxTeste = 1; idxTeste <= lNumeroTestes; ++idxTeste)
	{
		cin >> lQuantidadePessoas >> lTamanhoSalto;
		
		for (long idxPessoa = 1; idxPessoa <= lQuantidadePessoas; ++idxPessoa)
		{
			vPessoas.push_back(idxPessoa);
		}
		
		idxPessoaSair = lTamanhoSalto - 1;
		
		while (vPessoasFora.size() < lQuantidadePessoas - 1)
		{
			vPessoasFora.push_back(vPessoas[idxPessoaSair]);

			if (idxPessoaSair + lTamanhoSalto <= lQuantidadePessoas - 1)
			{
				idxPessoaSair += lTamanhoSalto;
			}
			else
			{
				idxPessoaSair = (idxPessoaSair += lTamanhoSalto) - (lQuantidadePessoas);
			}
			
			for (long i = 0; i < vPessoasFora.size(); ++i)
			{
				cout << "pessoa: " << vPessoasFora[i] << endl;
			}
			cout << endl;
		}
		
		
			
		for (long idxPessoaFinal = 0; idxPessoaFinal < lQuantidadePessoas; ++idxPessoaFinal)
		{
			for (long idxPessoaSaida = 0; idxPessoaSaida < lQuantidadePessoas - 1; ++idxPessoaSaida)
			{
				if (vPessoas[idxPessoaFinal] == vPessoasFora[idxPessoaSaida])
				{
					break;
				}
				if (idxPessoaSaida = lQuantidadePessoas - 1)
				{
					cout << "Case " << idxTeste << ": " << vPessoas[idxPessoaFinal] << endl;
				}
			}
		}
	}
	
    return 0;
    
}
