#include "Loteria.h"
void Tah(unsigned int celkovyPocetZrebov, unsigned int pocetLosovanychZrebov)


{
	if (Alokuj(celkovyPocetZrebov)) 
	{

		PripravZreby(celkovyPocetZrebov);
		Losuj(celkovyPocetZrebov, pocetLosovanychZrebov);
		VypisVysledok(pocetLosovanychZrebov);
		Uvolni();
	}
	
	
}