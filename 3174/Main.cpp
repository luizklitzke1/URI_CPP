#include <iostream>
#include <string>

using namespace std;

const long HORAS_BONECOS 	    = 8;
const string CODIGO_BONECOS     = "bonecos";

const long HORAS_ARQUITETOS     = 4;
const string CODIGO_ARQUITETOS  = "arquitetos";

const long HORAS_MUSICOS        = 6;
const string CODIGO_MUSICOS     = "musicos";

const long HORAS_DESENHISTAS    = 12;
const string CODIGO_DESENHISTAS = "desenhistas";

int main() 
{
	long lQuantidadeElfos = 0;
	cin >> lQuantidadeElfos;
	
	string sNome = "";
	string sSetor = "";
	
	long lHoras = 0;
	
	long lSomaBonecos = 0;
	long lSomaArquitetos = 0;
	long lSomaMusicos = 0;
	long lSomaDesenhistas = 0;
	
	while (lQuantidadeElfos--)
	{
		cin >> sNome >> sSetor >> lHoras;
	
		if (sSetor == CODIGO_BONECOS)
			lSomaBonecos += lHoras;
		else if (sSetor == CODIGO_ARQUITETOS)
			lSomaArquitetos += lHoras;
		else if (sSetor == CODIGO_MUSICOS)
			lSomaMusicos += lHoras;
		else
			lSomaDesenhistas += lHoras;
	}
	
	long lTotalProduzido = lSomaBonecos / HORAS_BONECOS + lSomaArquitetos / HORAS_ARQUITETOS +
						   lSomaMusicos / HORAS_MUSICOS + lSomaDesenhistas / HORAS_DESENHISTAS;
	
	cout << lTotalProduzido << endl;
	
    return 0;
    
}
