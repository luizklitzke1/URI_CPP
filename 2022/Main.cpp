#include <iostream>
#include <string>
#include <map>
#include <set>

using namespace std;

int main()
{
    string sNome, sPresente;
    double dPreco;
    long lPref, lQtf;

    while (cin >> sNome)
    {
        map<long, map<double, set<string>>, greater<long>> mPresentes;

        cin >> lQtf;

        while (lQtf--)
        {
            cin.ignore();
            getline(cin, sPresente);
            cin >> dPreco >> lPref;

            mPresentes[lPref][dPreco].insert(sPresente);
        }

        cout.precision(2);
        cout << "Lista de " << sNome << endl;

        for (auto p1 : mPresentes)
        {
            for (auto p2 : p1.second)
            {
                for (auto nome : p2.second)
                {
                    cout << nome << " - R$" << fixed << p2.first << endl;
                }
            }
        }

        cout << endl;
    }
}