#include <iostream>
#include <cmath>

using namespace std;

bool ValidaTriangulo(long lGraveto1, long lGraveto2, long lGraveto3)
{
	return (lGraveto1 <= lGraveto2 + lGraveto3 && lGraveto1 > abs(lGraveto2 - lGraveto3) &&
		    lGraveto2 <= lGraveto1 + lGraveto3 && lGraveto2 > abs(lGraveto1 - lGraveto3) &&
			lGraveto3 <= lGraveto1 + lGraveto2 && lGraveto3 > abs(lGraveto1 - lGraveto2)
			);
	
}

int main()
{
	long lGraveto1 = 0;
	long lGraveto2 = 0;
	long lGraveto3 = 0;
	long lGraveto4 = 0;
	
	cin >> lGraveto1 >> lGraveto2 >> lGraveto3 >> lGraveto4;
	
	if (ValidaTriangulo(lGraveto1, lGraveto2, lGraveto3) || ValidaTriangulo(lGraveto1, lGraveto2, lGraveto4) ||
		ValidaTriangulo(lGraveto4, lGraveto2, lGraveto3) || ValidaTriangulo(lGraveto4, lGraveto1, lGraveto3)
		)
		cout << "S" << endl;
	else
		cout << "N" << endl;
	
	return 0;
}