#include <iostream>
#include <string>

using namespace std;

int main() 
{

    string sGenero;
	string sFamilia;
	string sAlimentacao;

    cin >> sGenero >> sFamilia >> sAlimentacao;
	
	string sAnimal;
	
	if (sGenero == "vertebrado")
	{
		if (sFamilia == "ave")
		{
			if (sAlimentacao == "carnivoro")
			{
				sAnimal = "aguia";
			}
			else
			{
				sAnimal = "pomba";
			}
		}
		else
		{
			if (sAlimentacao == "onivoro")
			{
				sAnimal = "homem";
			}
			else
			{
				sAnimal = "vaca";
			}	
		}
	}
	else
	{
		if (sFamilia == "inseto")
		{
			if (sAlimentacao == "hematofago")
			{
				sAnimal = "pulga";
			}
			else
			{
				sAnimal = "lagarta";
			}
		}
		else
		{
			if (sAlimentacao == "hematofago")
			{
				sAnimal = "sanguessuga";
			}
			else
			{
				sAnimal = "minhoca";
			}
		}
	}	
	
	cout << sAnimal << endl;
	
    return 0;
    
}
