#include <iostream>

using namespace std;

int main() 
{

    long lHoraInicio = 0;
	long lMinutosInicio = 0;
	
	long lHoraFim = 0;
	long lMinutosFim = 0;

    cin >> lHoraInicio >> lMinutosInicio >> lHoraFim >> lMinutosFim;
	
	long lDuracaoTotalMinutos = 0;
	
	if (lHoraFim < lHoraInicio)
	{
		
		lDuracaoTotalMinutos = 1440 - (lHoraInicio * 60) - lMinutosInicio + (lHoraFim * 60) + lMinutosFim;
		
	}
	else
	{
		if (lHoraInicio == lHoraFim && lMinutosInicio == lMinutosFim)
		{
			lDuracaoTotalMinutos = 1440;
		}
		else{
			
			lDuracaoTotalMinutos = (lHoraFim * 60) + lMinutosFim - (lHoraInicio * 60) - lMinutosInicio;
		}
		
	}
	
	long lDuracaoTotalHoras = lDuracaoTotalMinutos / 60;
	lDuracaoTotalMinutos -= lDuracaoTotalHoras * 60;

	cout << "O JOGO DUROU " << lDuracaoTotalHoras << " HORA(S) E " << lDuracaoTotalMinutos << " MINUTO(S)" << endl;
	
    return 0;
    
}
