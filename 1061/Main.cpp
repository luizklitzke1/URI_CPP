#include <iostream>
#include <string>

using namespace std;

int main() 
{

	string sDiaStr;
	long lDiaIinicio = 0;
	cin >> sDiaStr >> lDiaIinicio;
	
	string sDoisPontos;
	long lHoraInicio = 0;
	long lMinutoInicio = 0;
	long lSegundoInicio = 0;
	
	cin >> lHoraInicio >> sDoisPontos >> lMinutoInicio >> sDoisPontos>> lSegundoInicio;
	
	long lDiaFim = 0;
	cin >> sDiaStr >> lDiaFim;
	
	long lHoraFim = 0;
	long lMinutoFim= 0;
	long lSegundoFim = 0;
	
	cin >> lHoraFim >> sDoisPontos >> lMinutoFim >> sDoisPontos>> lSegundoFim;
	long lDuracao = (lDiaFim * 86400 + lHoraFim * 3600 + lMinutoFim * 60 + lSegundoFim) - 
					(lDiaIinicio * 86400 + lHoraInicio * 3600 + lMinutoInicio * 60 + lSegundoInicio);
    
	cout << lDuracao / 86400 << " dia(s)" << endl;
    cout << (lDuracao % 86400) / 3600 << " hora(s)" << endl;
    cout << ((lDuracao % 86400) % 3600) / 60 << " minuto(s)" << endl;
    cout << ((lDuracao % 86400) % 3600) % 60 << " segundo(s)" << endl;
	
    return 0;
    
}
