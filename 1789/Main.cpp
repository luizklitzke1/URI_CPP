#include <iostream>

using namespace std;

const long VELOCIDADE_MINIMA_NIVEL_2 = 10;
const long VELOCIDADE_MINIMA_NIVEL_3 = 20;

int main()
{
	unsigned long ulQuantidadeSlugs = 0;
	
	long lVelocidadeSlug = 0;
	long lNivelSlug = 0;
	long lMaiorNivel = 0;
	
	while (cin >> ulQuantidadeSlugs)
	{
		lMaiorNivel = 0;
		
		for (long idxSlug = 0; idxSlug < ulQuantidadeSlugs; ++idxSlug)
		{
			cin >> lVelocidadeSlug;
			
			if (lVelocidadeSlug < VELOCIDADE_MINIMA_NIVEL_2)
				lNivelSlug = 1;
			else if (lVelocidadeSlug < VELOCIDADE_MINIMA_NIVEL_3)
				lNivelSlug = 2;
			else
				lNivelSlug = 3;
				
			if (lNivelSlug > lMaiorNivel)
				lMaiorNivel = lNivelSlug;
		}
		
		cout << lMaiorNivel << endl;
	}
	
    return 0;
}