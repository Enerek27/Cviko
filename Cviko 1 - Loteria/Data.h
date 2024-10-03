#pragma once

#include "Defs.h"
#include <malloc.h>


struct Zreb
{
	char kod;
	MUINT cislo;
};
extern struct Zreb* Zreby;



BOOL Alokuj(MUINT celkoovyPocetZrebov);