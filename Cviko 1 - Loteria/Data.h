#pragma once

#include "Defs.h"
#include <malloc.h>

extern MUINT CelkovyPocetZrebov;

struct Zreb
{
	char kod;
	MUINT cislo;
};
extern struct Zreb* Zreby;



BOOL Alokuj(MUINT celkoovyPocetZrebov);