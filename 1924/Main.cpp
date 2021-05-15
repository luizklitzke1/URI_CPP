#include <iostream>
#include <string>

using namespace std;

const string RESPOSTA_CERTA = "Ciencia da Computacao";

int main()
{
    long lQuantidadeOpcoes = 0;
	cin >> lQuantidadeOpcoes;
	
	string sEntrada;
	
	while (lQuantidadeOpcoes--)
		cin >> sEntrada;
	
	cout << RESPOSTA_CERTA << endl;
    
    return 0;
}