#include <iostream>

using namespace std;

const long QUANTIDADE_CASAS_DECIMAIS = 2;

int main()
{
	
	long lNumeroDeTestes = 0;

    cin >> lNumeroDeTestes;
	
	double dTotalCobaias = 0;
	
	double dTotalCoelhos = 0;
	double dPercentualCoelhos = 0;
	
	double dTotalRatos = 0;
	double dPercentualRatos = 0;
	
	double dTotalSapos = 0;
	double dPercentualSapos = 0;
	
	
	long lQuantidadeDeAnimais = 0;
	char cTipodeAnimal;
	
	for (long i = 0; i < lNumeroDeTestes; i ++)
	{
		
		cin >> lQuantidadeDeAnimais >> cTipodeAnimal;
		
		switch (cTipodeAnimal)
		{
			case 'C':
				dTotalCoelhos += lQuantidadeDeAnimais;
			break;
			
			case 'R':
				dTotalRatos += lQuantidadeDeAnimais;
			break;
		
			case 'S':
				dTotalSapos += lQuantidadeDeAnimais;
			break;
			
		}
		
		dTotalCobaias += lQuantidadeDeAnimais;
	}
	
	cout << "Total: " << dTotalCobaias << " cobaias" << endl;
	cout << "Total de coelhos: " << dTotalCoelhos << endl;
	cout << "Total de ratos: " << dTotalRatos << endl;
	cout << "Total de sapos: " << dTotalSapos << endl;

    cout.precision(QUANTIDADE_CASAS_DECIMAIS);

    dPercentualCoelhos = (100 * dTotalCoelhos) / dTotalCobaias;
    cout << fixed << "Percentual de coelhos: " << dPercentualCoelhos << " %" << endl;

    dPercentualRatos = (100 * dTotalRatos) / dTotalCobaias;
    cout << fixed << "Percentual de ratos: " << dPercentualRatos << " %" << endl;

    dPercentualSapos = (100 * dTotalSapos) / dTotalCobaias;
    cout << fixed << "Percentual de sapos: " << dPercentualSapos << " %" << endl;
	
	return 0;
}
