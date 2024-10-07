#include "Data.h"
#include <malloc.h>

extern MUINT CelkovyPocetZrebov = 0;

struct Zreb* Zreby;


BOOL Alokuj(MUINT celkoovy_pocet_zrebov)
{
	if (celkoovy_pocet_zrebov != 0)
	{

		CelkovyPocetZrebov = celkoovy_pocet_zrebov;
		Zreby = calloc(celkoovy_pocet_zrebov, sizeof(struct Zreb));
		if (Zreby != NULL)
			return TRUE;
	}
	return FALSE;
}

void Uvolni()
{
	free(Zreby);
	Zreby = NULL;
}
