#include <iostream>

using namespace std;

int main()
{
    long lHoraInicio = 0;
    long lMinutosInicio = 0;

    long lHoraFinal = 0;
    long lMinutosFinal = 0;

    long lDuracaoTotalMinutos = 0;

    while (cin >> lHoraInicio >> lMinutosInicio >> lHoraFinal >> lMinutosFinal
           && (lHoraInicio || lMinutosInicio || lHoraFinal || lMinutosFinal))
    {
        if (lHoraFinal < lHoraInicio)
        {

            lDuracaoTotalMinutos = 1440 - (lHoraInicio * 60) - lMinutosInicio + (lHoraFinal * 60) + lMinutosFinal;

        }
        else
        {
            if (lHoraInicio == lHoraFinal)
            {
                if (lMinutosFinal == lMinutosInicio)
                {
                    lDuracaoTotalMinutos = 1440;
                }
                else {

                    if (lMinutosFinal < lMinutosInicio) {
                        lDuracaoTotalMinutos = 1440 - (lMinutosInicio - lMinutosFinal);
                    }
                    else
                    {
                        lDuracaoTotalMinutos = lMinutosFinal - lMinutosInicio;
                    }

                }

            }
            else {
                lDuracaoTotalMinutos = (lHoraFinal * 60) + lMinutosFinal - (lHoraInicio * 60) - lMinutosInicio;
            }

        }

        cout << lDuracaoTotalMinutos << endl;
    }

}