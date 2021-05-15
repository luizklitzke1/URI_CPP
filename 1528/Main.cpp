#include <iostream>
#include <cmath>

using namespace std;

int mdc(int num1, int num2)
{
    if (num1 % num2 == 0)
        return num2;
    else
        return mdc(num2, num1 % num2);
}

int main()
{
    long lValorA = 0;
    long lValorB = 0;
    long lValorC = 0;

    while (cin >> lValorA >> lValorB >> lValorC)
    {
        if (pow(lValorA, 2) == pow(lValorB, 2) + pow(lValorC, 2) ||
            pow(lValorB, 2) == pow(lValorA, 2) + pow(lValorC, 2) ||
            pow(lValorC, 2) == pow(lValorB, 2) + pow(lValorA, 2))
        {
            if (mdc(lValorA, mdc(lValorB, lValorC)) == 1)
                cout << "tripla pitagorica primitiva" << endl;
            else
                cout << "tripla pitagorica" << endl;
        }
        else
            cout << "tripla" << endl;
    }

    return 0;
}