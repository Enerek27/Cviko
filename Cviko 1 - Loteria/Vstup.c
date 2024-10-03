#include "Vstup.h"
#include "Data.h"

void PripravZreby()
{
	for (MUINT i = 0; i < CelkovyPocetZrebov; i++)
	{
		Zreby[i].cislo = i + 1;
		Zreby[i].kod = 'A' + (i % 26);

	}
}
