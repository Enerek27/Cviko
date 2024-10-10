#include "Losovanie.h"

#include <stdlib.h>
#include <time.h>

#include "Data.h"

void Vymen(int index, int i);

void Losuj(MUINT pocet_losovanych_zrebov)
{
	if (pocet_losovanych_zrebov > CelkovyPocetZrebov)
	{
		pocet_losovanych_zrebov = CelkovyPocetZrebov;
	}

	srand(time(NULL));
	for (MUINT i = 0; i < pocet_losovanych_zrebov; ++i)
	{
		MUINT index = rand() % (CelkovyPocetZrebov - i) + i;
		Vymen(index, i);
	}
}

/// <summary>
/// 
/// </summary>
/// <param name="index"> Index ktorý vymienam</param>
/// <param name="i">Miesto na ktoré vymieòam</param>

void Vymen(int index, int i)
{
	struct Zreb pom = Zreby[index];
	Zreby[index] = Zreby[i];
	Zreby[i] = pom;
}
