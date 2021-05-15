#include <iostream>

using namespace std;

const long MAXIMO_PESSOAS = 10000;

int main() 
{
	bool aPessoas[MAXIMO_PESSOAS] = {0};
	
    long lNumeroTestes = 0;
    cin >> lNumeroTestes;
	
	unsigned long ulNumeroPessoas = 0;
	unsigned long ulPulo = 0;

	for (long idxTeste = 0; idxTeste < lNumeroTestes; ++idxTeste)
	{
		cin >> ulNumeroPessoas >> ulPulo;
		
		for (long idxPessoa = 0; idxPessoa < ulNumeroPessoas; ++idxPessoa)
		{
			aPessoas[idxPessoa] = 0;
		}

		long lPessoasMortas = 0;

		long lValidos = 0;
		
		while (lPessoasMortas < ulNumeroPessoas - 1)
		{
			
			for (long idxPessoa = 0; idxPessoa < ulNumeroPessoas; ++idxPessoa)
			{
				if (aPessoas[idxPessoa] == 0)
				{
					++lValidos;
				}
				if (lValidos == ulPulo)
				{
					aPessoas[idxPessoa] = 1;
					++lPessoasMortas;
					lValidos = 0;
				}
			}
		}
		
		for (long idxPessoa = 0; idxPessoa < ulNumeroPessoas; ++idxPessoa)
		{
			if (aPessoas[idxPessoa] != 1)
			{
				cout << "Case " << idxTeste + 1 << ": " << idxPessoa + 1 << endl;
				break;
			}
		}
	}
	
    return 0;   
}
