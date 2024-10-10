#include "Test.h"
#include "Data.h"
#include "Vstup.h"

BOOL Testuj()
{
	if (Alokuj(10))
	{
		PripravZreby();
		if (Zreby[5].kod != 'F' && Zreby[9].kod != 'J')
		{
			return FALSE;
		}
		if (Zreby[3].cislo != 4)
		{
			return FALSE;
		}

		Uvolni();
	}
	return TRUE;
}
