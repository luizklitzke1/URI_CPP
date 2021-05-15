#include <iostream>
#include <string>

using namespace std;

int main() 
{

    long lNumeroMes;

    cin >> lNumeroMes;
	
	string sNomeMes;
	
	switch (lNumeroMes)
	{
		case 1:
			sNomeMes = "January";
		break;
		
		case 2:
			sNomeMes = "February";
		break;
		
		case 3:
			sNomeMes = "March";
		break;
		
		case 4:
			sNomeMes = "April";
		break;
		
		case 5:
			sNomeMes = "May";
		break;
		
		case 6:
			sNomeMes = "June";
		break;
		
		case 7:
			sNomeMes = "July";
		break;
		
		case 8:
			sNomeMes = "August";
		break;	
		
		case 9:
			sNomeMes = "September";
		break;
		
		case 10:
			sNomeMes = "October";
		break;
		
		case 11:
			sNomeMes = "November";
		break;
		
		case 12:
			sNomeMes = "December";
		break;
		
	}	
	
	cout << sNomeMes << endl;
	
    return 0;
    
}
