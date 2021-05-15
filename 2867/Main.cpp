#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    long lQtd = 0;

    cin >> lQtd;

    long lValA = 0;
    long lValB = 0;

    while (lQtd--)
    {
        cin >> lValA >> lValB;

        cout << floor(log10(pow(lValA, lValB)) + 1)<< endl;;
    }

    

    return 0;
}