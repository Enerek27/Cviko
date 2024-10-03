#include "Loteria.h"

void Tah(MUINT celkovyPocetZrebov, MUINT pocetLosovanychZrebov)


{
	if (Alokuj(celkovyPocetZrebov)) 
	{

		PripravZreby();
		//Losuj(celkovyPocetZrebov, pocetLosovanychZrebov);
		//VypisVysledok(pocetLosovanychZrebov);
		Uvolni();
	}
	//else
		//Help();
	
}