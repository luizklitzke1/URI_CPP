#include <iostream>

using namespace std;

int main() 
{

    long lHoraInicio = 0;
	long lHoraFim = 0;

    cin >> lHoraInicio >> lHoraFim;
	
	long lDuracaoTotal = 0;
	
	if (lHoraFim < lHoraInicio)
	{
		lDuracaoTotal = 24 - lHoraInicio + lHoraFim;
	}
	else
	{
		if (lHoraInicio == lHoraFim)
		{
			lDuracaoTotal = 24;
		}
		else{
			lDuracaoTotal = lHoraFim - lHoraInicio;
		}
		
	}
	
	cout << "O JOGO DUROU " << lDuracaoTotal << " HORA(S)" << endl;
	
    return 0;
    
}
