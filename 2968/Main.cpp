#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    long lVoltas = 0;
    long lPlacas = 0;

    cin >> lVoltas >> lPlacas;

    long lTotal = lVoltas * lPlacas;

    cout.precision(0);

    for (long idx = 1; idx < 10; ++idx)
    {
        if (idx < 9)
            cout << fixed << ceil(lTotal * (idx / 10.0)) << " ";
        else
            cout << fixed << ceil(lTotal * (idx / 10.0)) << endl;
    }

    return 0;
}
