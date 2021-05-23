#include <iostream>

using namespace std;

long mdc(long num1, long num2)
{
	if (num1 % num2 == 0)
		return num2;
	else
		return mdc(num2, num1 % num2);
}


int main()
{
	long lEntradas, N1, D1, N2, D2, N3, D3, lMdc;
	char cBarra, cOp;

	cin >> lEntradas;
	
	while (lEntradas--)
	{
		cin >> N1 >> cBarra >> D1 >> cOp >> N2 >> cBarra >> D2;

		switch (cOp)
		{
			case '+':
				N3 = (N1 * D2 + N2 * D1);
				D3 = (D1 * D2);
				break;

			case '-':
				N3 = (N1 * D2 - N2 * D1);
				D3 = (D1 * D2);
				break;

			case '*':
				N3 = (N1 * N2);
				D3 = (D1 * D2);
				break;

			case '/':
				N3 = (N1 * D2);
				D3 = (N2 * D1);
				break;
		}

		cout << N3 << "/" << D3 << " = ";

		lMdc = mdc(N3, D3);

		if (N3 < 0 && N3 / lMdc > 0)
			cout << N3 / lMdc * -1;
		else
			cout << N3 / lMdc;

		cout << "/";

		if (D3 / lMdc < 0)
			cout << D3 / lMdc * -1 << endl;
		else
			cout << D3 / lMdc << endl;



	}

	return 0;
}