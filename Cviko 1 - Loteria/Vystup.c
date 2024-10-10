#include "Vystup.h"

#include <stdio.h>

#include "Data.h"	


void VypisVysledok(MUINT pocet_losovanych_zrebov)
{
	if (pocet_losovanych_zrebov > CelkovyPocetZrebov)
	{
		pocet_losovanych_zrebov = CelkovyPocetZrebov;
	}
	printf("###############################################\n");
	printf("VYSLEDKY ZREBOVANIA\n");
	printf("###############################################\n");


	for (MUINT i = 0; i < pocet_losovanych_zrebov; i++)
	{
		printf("%5u. %u%c\n",i + 1, Zreby[i].cislo, Zreby[i].kod);
	}
	printf("###############################################\n");
}