#include "Loteria.h"

#include "Losovanie.h"
#include "Vstup.h"
#include "Vystup.h"

void Tah(MUINT celkovyPocetZrebov, MUINT pocetLosovanychZrebov)


{
	if (Alokuj(celkovyPocetZrebov)) 
	{

		PripravZreby();
		Losuj(pocetLosovanychZrebov);
		VypisVysledok(pocetLosovanychZrebov);
		Uvolni();
	}
	//else
		//Help();
	
}
