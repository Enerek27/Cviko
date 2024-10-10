#include "Vystup.h"

#include <stdio.h>

#include "Data.h"
#include "Vypis.h"


void VypisVysledok(MUINT pocet_losovanych_zrebov)
{
	if (pocet_losovanych_zrebov > CelkovyPocetZrebov)
	{
		pocet_losovanych_zrebov = CelkovyPocetZrebov;
	}
	char textBuf[30];
	Vypis_text("###############################################\n");
	Vypis_text("VYSLEDKY ZREBOVANIA\n");
	Vypis_text("###############################################\n");


	for (MUINT i = 0; i < pocet_losovanych_zrebov; i++)
	{
		sprintf(textBuf,"%5u. %u%c\n",i + 1, Zreby[i].cislo, Zreby[i].kod);
		Vypis_text(textBuf);
	}
	Vypis_text("###############################################\n");
}