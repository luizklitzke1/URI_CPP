#include <iostream>

using namespace std;

int main()
{
	
	long lNumeroDeTestes = 0;

    cin >> lNumeroDeTestes;
	
	long lTotalCobaias = 0;
	
	long lTotalCoelhos = 0;
	double dPercentualCoelhos = 0;
	
	long lTotalRatos = 0;
	double dPercentualRAtos = 0;
	
	long lTotalSapos = 0;
	double dPercentualSapos = 0;
	
	
	long lQuantidadeDeAnimais = 0;
	char cTipodeAnimal;
	
	for (long i = 0; i < lNumeroDeTestes; i ++)
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
	}
	
	cout << "Total: " << lTotalCobaias << " cobaias" << endl;
	cout << "Total de coelhos: " << lTotalCoelhos << endl;
	cout << "Total de ratos: " << lTotalRatos << endl;
	cout << "Total de sapos: " << lTotalSapos << endl;
	
	return 0;
}
