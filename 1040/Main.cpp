#include <iostream>

using namespace std;

const long QUANTIDADE_CASAS_DECIMAIS = 1;

const long PESO1 = 2;
const long PESO2 = 3;
const long PESO3 = 4;
const long PESO4 = 1;

int main() 
{

    double dValorN1 = 0;
	double dValorN2 = 0;
	double dValorN3 = 0;
	double dValorN4 = 0;

    cin >> dValorN1 >> dValorN2 >> dValorN3 >> dValorN4 ;
	
	double dMedia = (dValorN1 * PESO1 + dValorN2 * PESO2 + dValorN3 * PESO3 + dValorN4 * PESO4) / (PESO1 + PESO2 + PESO3 + PESO4);
	
	cout.precision(QUANTIDADE_CASAS_DECIMAIS);
	cout << fixed << "Media: " << dMedia << endl;	
	
	if (dMedia >= 7)
	{
		cout << "Aluno aprovado." << endl;
	}
	else
	{
		if (dMedia < 5)
		{
			cout << "Aluno reprovado." << endl;
		}
		else
		{
			cout << "Aluno em exame." << endl;
			
			double dNotaDoExame = 0;
			cin >> dNotaDoExame;
			
			cout << fixed << "Nota do exame: " << dNotaDoExame << endl;	
			
			double dMediaFinal = (dMedia + dNotaDoExame) / 2;
			
			if (dMediaFinal >= 5)
			{
				cout << "Aluno aprovado." << endl;
			}
			else
			{
				cout << "Aluno reprovado." << endl;
			}
			cout << fixed << "Media final: " << dMediaFinal << endl;	
			
		}
	}
	
    return 0;
    
}
