#include <iostream>

using namespace std;

int main()
{
    unsigned long ulQuantidadePessoas = 0;
    cin >> ulQuantidadePessoas;

    long lMenorT = 0;
    long lMenorTidx = 1;

    for (long idxPessoa = 1; idxPessoa <= ulQuantidadePessoas; ++idxPessoa)
    {
        long lTPessoa = 0;
        cin >> lTPessoa;

        if (idxPessoa == 1)
            lMenorT = lTPessoa;
        else
        {
            if (lTPessoa < lMenorT)
            {
                lMenorT = lTPessoa;
                lMenorTidx = idxPessoa;
            }
        }
    }

    cout << lMenorTidx << endl;
    
    return 0;
}
