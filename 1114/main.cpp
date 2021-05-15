#include <iostream>

using namespace std;

const long SENHA = 2002;

int main()
{

	long lTentativaSenha = 0;
	
	while (true)
	{

		cin >> lTentativaSenha;

		if (lTentativaSenha == SENHA)
		{
			cout << "Acesso Permitido" << endl;
			break;
		}

		cout << "Senha Invalida" << endl;

	}
	
	return 0;
}
