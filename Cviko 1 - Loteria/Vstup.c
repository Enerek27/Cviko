#include "Vstup.h"
#include "Data.h"
#include "Defs.h"


void PripravZreby()
{
	for (MUINT i = 0; i < CelkovyPocetZrebov; i++)
	{
		Zreby[i].cislo = i + 1;
		Zreby[i].kod = 'A' + (i % 26);

	}
}


MUINT kontrola_vtupov(int pocetVtupov, char* vstupy[])
{
	
	MUINT pocetLosovanychZrebov = 0;
	if (pocetVtupov > 0)
	{

		sscanf(vstupy[0], "%u", CelkovyPocetZrebov); //Posielam adresu premenej kde sa m· hodnota uloûiù
		//pocetLosovanychZrebov = atoi(vstupy[0]);
		pocetLosovanychZrebov = CelkovyPocetZrebov;
			if (pocetVtupov > 1)
			{
				sscanf(vstupy[0], "%u", CelkovyPocetZrebov); //Posielam adresu premenej kde sa m· hodnota uloûiù
				//pocetLosovanychZrebov = atoi(vstupy[1]);
			}
			return pocetLosovanychZrebov;
	}
	return 0;
}
