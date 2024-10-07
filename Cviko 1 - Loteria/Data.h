#pragma once

#include "Defs.h"


extern MUINT CelkovyPocetZrebov;

struct Zreb
{
	char kod;
	MUINT cislo;
};
extern struct Zreb* Zreby;



BOOL Alokuj(MUINT celkoovy_pocet_zrebov);
void Uvolni();
