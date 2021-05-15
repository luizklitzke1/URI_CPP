#include <iostream>

using namespace std;

int main()
{
   long lQuantidadeEntradas = 0;
   cin >> lQuantidadeEntradas;

   bool bEhPico = 0;
   long lAtual = 0;
   long lAnterior = 0;

   bool bEhValido = 1;

   for (long idx = 0; idx < lQuantidadeEntradas; ++idx)
   {
       cin >> lAtual;

       if (idx == 1)
       {
           if (lAnterior < lAtual)
               bEhPico = 1;
           else if (lAnterior == lAtual)
           {
               bEhValido = 0;
               break;
           }
           else
               bEhPico = 0;
       }

       else if (idx)
       {
           if (bEhPico && lAnterior <= lAtual)
           {
               bEhValido = 0;
               break;
           }
           else if (!bEhPico && lAnterior >= lAtual)
           {
               bEhValido = 0;
               break;
           }
           else if (!bEhPico && lAnterior < lAtual)
               bEhPico = 1;
           else
               bEhPico = 0;
       }
       
        lAnterior = lAtual;
   }

   cout << bEhValido << endl;

    return 0;
}