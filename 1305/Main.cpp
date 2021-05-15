#include <iostream>
#include <string>

using namespace std;

int main()
{
	string sValor;
    string sCorte;

    long lInteiro = 0;

    while (cin >> sValor >> sCorte)
    {
        if ((stof(sValor) - (int)stof(sValor)) > stof(sCorte))
            cout << (int)stof(sValor) + 1 << endl;
        else
            cout << (int)stof(sValor) << endl;
    }
	return 0;
}