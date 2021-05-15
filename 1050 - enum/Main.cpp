#include <iostream>

using namespace std;

enum ECodigosDDD
{
	eBrasilia = 61,
	eSalvador = 71,
	eSaoPaulo = 11,
	eRiodeJaneiro = 21,
	eJuizdeFora = 32,
	eCampinas = 19,
	eVitoria = 27,
	eBeloHorizonte = 31,
};

int main() 
{

    long lDDD;

    cin >> lDDD;
	
	switch (lDDD)
	{
		case eBrasilia:
			cout << "Brasilia" << endl;
		break;
		
		case eSalvador:
			cout << "Salvador" << endl;
		break;
		
		case eSaoPaulo:
			cout << "Sao Paulo" << endl;
		break;
		
		case eRiodeJaneiro:
			cout << "Rio de Janeiro" << endl;
		break;
		
		case eJuizdeFora:
			cout << "Juiz de Fora" << endl;
		break;
		
		case eCampinas:
			cout << "Campinas" << endl;
		break;
		
		case eVitoria:
			cout << "Vitoria" << endl;
		break;
		
		case eBeloHorizonte:
			cout << "Belo Horizonte" << endl;
		break;
		
		default:
			cout << "DDD nao cadastrado" << endl;
		break;	
		
	}	
	
    return 0;
    
}
