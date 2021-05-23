#include <iostream>

using namespace std;

int main()
{
	long a, b, r;

	while (cin >> a >> b && a && b)
	{
		r = (b - 2 * a) * -1;

		if (r < 1 && r > -1)
			cout << 0 << endl;
		else
			cout << r << endl;
	}

	return 0;
}