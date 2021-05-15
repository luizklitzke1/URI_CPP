#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main()
{
    unsigned long ulQuantidadeCamisas = 0;
    bool bQuebraLinha = false;

    while (cin >> ulQuantidadeCamisas && ulQuantidadeCamisas)
    {
        cin.ignore();

        if (!ulQuantidadeCamisas)
            break;

        map<string,map<char, vector<string>, greater<char>>> mCamisas;

        string sNome;
        string sCor;
        char cTamanho = 0;

        while (ulQuantidadeCamisas--)
        {
            getline(cin, sNome);
            cin >> sCor >> cTamanho;
            cin.ignore();


            mCamisas[sCor][cTamanho].push_back(sNome);
        }

        if (bQuebraLinha)
            cout << endl;

        for (auto& ParCor : mCamisas)
        {
            for (auto& ParTamanho : ParCor.second)
            {
                sort(ParTamanho.second.begin(), ParTamanho.second.end());


                for (string& sNome : ParTamanho.second)
                    cout << ParCor.first << " " << ParTamanho.first << " " << sNome << endl;
            }
        }

        bQuebraLinha = true;
    }


    return 0;
}















