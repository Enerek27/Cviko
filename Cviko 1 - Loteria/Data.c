#include "Data.h"

extern MUINT CelkovyPocetZrebov = 0;

struct Zreb* Zreby;


BOOL Alokuj(MUINT celkoovyPocetZrebov)
{
	if (celkoovyPocetZrebov != 0)
	{

		CelkovyPocetZrebov = celkoovyPocetZrebov;
		Zreby = malloc(celkoovyPocetZrebov * sizeof(struct Zreb));
		if (Zreby != NULL)
			return TRUE;
	}
	return FALSE;
}
