#include <iostream>

using namespace std;

int main()
{
    unsigned long long ullValorN = 0;
    unsigned long long ullValorM = 0;

    unsigned long long ullFatorialN = 1;
    unsigned long long ullFatorialM = 1;

    while (cin >> ullValorN >> ullValorM)
    {
        ullFatorialN = 1;
        ullFatorialM = 1;

        while (ullValorN > 0)
        {
            ullFatorialN *= ullValorN;
            --ullValorN;
        }
        while (ullValorM > 0)
        {
            ullFatorialM *= ullValorM;
            --ullValorM;
        }

        cout << (ullFatorialN + ullFatorialM) << endl;
    }
   
    return 0;
}
