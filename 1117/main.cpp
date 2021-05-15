#include <iostream>

const long QUANTIDADE_CASAS_DECIMAIS = 2;

using namespace std;
int main(){
    
    double dNota1 = 0.;
	double dNota2 = 0.;
	double dValorExtra = 0;

    while(true)
	{
		cin >> dNota1;

		if (dNota1 < 0 || dNota1 > 10)
		{
			cout << "nota invalida" << endl;
		}
		else if (dValorExtra == 0)
		{
			dNota2 = dNota1;
			dValorExtra = 1;
		}
		else{
			cout.precision(QUANTIDADE_CASAS_DECIMAIS);
			cout << fixed << "media = " << (dNota1 + dNota2) / 2 << endl;
			break;
		}
    } 
    return 0;
}