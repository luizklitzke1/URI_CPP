#include <iostream>
 
using namespace std;

int main() 
{

    double  dValorInicial = 0;
    
    cin >> dValorInicial;
    
    long lNotasDe100 = dValorInicial / 100;
    dValorInicial -= lNotasDe100 * 100;
    
    long lNotasDe50 = dValorInicial / 50;
    dValorInicial -= lNotasDe50 * 50;
    
    long lNotasDe20 = dValorInicial / 20;
    dValorInicial -= lNotasDe20 * 20;
    
    long lNotasDe10 = dValorInicial / 10;
    dValorInicial -= lNotasDe10 * 10;
    
    long lNotasDe5 = dValorInicial / 5;
    dValorInicial -= lNotasDe5 * 5;
    
    long lNotasDe2 = dValorInicial / 2;
    dValorInicial -= lNotasDe2 * 2;
    
    long lMoedasDe100 = dValorInicial;
    dValorInicial -= lMoedasDe100 * 1;
    
    dValorInicial = dValorInicial * 100;
    
    long lMoedasDe50 = dValorInicial / 50;
    dValorInicial -= lMoedasDe50 * 50;
    
    long lMoedasDe25 = dValorInicial / 25;
    dValorInicial -= lMoedasDe25 * 25;
    
    long lMoedasDe10 = dValorInicial / 10;
    dValorInicial -= lMoedasDe10 * 10;

	long lMoedasDe5 = dValorInicial / 5;
    dValorInicial -= lMoedasDe5 * 5;

    long lMoedasDe1 = dValorInicial / 1;
   
	cout << "NOTAS:" << endl;
    cout << lNotasDe100 << " nota(s) de R$ 100.00" << endl;
    cout << lNotasDe50 << " nota(s) de R$ 50.00" << endl;
    cout << lNotasDe20 << " nota(s) de R$ 20.00" << endl;
    cout << lNotasDe10 << " nota(s) de R$ 10.00" << endl;
    cout << lNotasDe5 << " nota(s) de R$ 5.00" << endl;
    cout << lNotasDe2 << " nota(s) de R$ 2.00" << endl;	
    
    cout << "MOEDAS:" << endl;
    cout << lMoedasDe100 << " moeda(s) de R$ 1.00" << endl;
    cout << lMoedasDe50 << " moeda(s) de R$ 0.50" << endl;
    cout << lMoedasDe25 << " moeda(s) de R$ 0.25" << endl;
    cout << lMoedasDe10 << " moeda(s) de R$ 0.10" << endl;
    cout << lMoedasDe5 << " moeda(s) de R$ 0.05" << endl;
    cout << lMoedasDe1 << " moeda(s) de R$ 0.01" << endl;

    return 0;
    
}
