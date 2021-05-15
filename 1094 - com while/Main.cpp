#include <iostream>

using namespace std;

int main()
{
	long lNumeroDeTestes = 0;
	cin >> lNumeroDeTestes;
	long lContadorTestes = 0;
	
	long lTotalCobaias = 0;
	
	long lTotalCoelhos = 0;
	double dPercentualCoelhos = 0;
	
	long lTotalRatos = 0;
	double dPercentualRatos = 0;
	
	long lTotalSapos = 0;
	double dPercentualSapos = 0;
	
	long lQuantidadeDeAnimais = 0;
	char cTipodeAnimal;
	
	while (lContadorTestes < lNumeroDeTestes)
	{
		cin >> lQuantidadeDeAnimais >> cTipodeAnimal;
		
		switch (cTipodeAnimal)
		{
			case 'C':
				lTotalCoelhos += lQuantidadeDeAnimais;
			break;
			
			case 'R':
				lTotalRatos += lQuantidadeDeAnimais;
			break;
		
			case 'S':
				lTotalSapos += lQuantidadeDeAnimais;
			break;
			
		}
		
		lTotalCobaias += lQuantidadeDeAnimais;
		++lContadorTestes;
		
	}
	
	cout.precision(2);
	dPercentualCoelhos = (double)lTotalCoelhos * 100 / lTotalCobaias;
	dPercentualRatos = (double)lTotalRatos * 100 / lTotalCobaias;
	dPercentualSapos = (double)lTotalSapos * 100 / lTotalCobaias;
	
	cout << "Total: " << lTotalCobaias << " cobaias" << endl;
	cout << "Total de coelhos: " << lTotalCoelhos << endl;
	cout << "Total de ratos: " << lTotalRatos << endl;
	cout << "Total de sapos: " << lTotalSapos << endl;
	
	cout << fixed << "Percentual de coelhos: " << dPercentualCoelhos << " %" << endl;
	cout << fixed << "Percentual de ratos: " << dPercentualRatos << " %" << endl;
	cout << fixed << "Percentual de sapos: " << dPercentualSapos << " %" << endl;
	
	return 0;
}
