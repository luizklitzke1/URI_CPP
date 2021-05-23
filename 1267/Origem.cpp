#include <iostream>

using namespace std;

int main()
{
	long c, l;
	bool b;
	

	while (cin >> c >> l && c && l)
	{
		b = false;

		long arr[500][100] = { 0 };

		for (long i = 0; i < l; ++i)
		{
			for (long j = 0; j < c; ++j)
			{
				cin >> arr[i][j];
			}
		}

		for (long i = 0; i < c; ++i)
		{

			if (b)
				break;

			for (long j = 0; j < l; ++j)
			{
				if (arr[j][i] == 0)
					break;

				if (j == l - 1)
					b = true;
			}

		}

		cout << (b ? "yes" : "no") << endl;
	}

	return 0;
}