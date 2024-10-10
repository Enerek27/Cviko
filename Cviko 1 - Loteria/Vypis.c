#include "Vypis.h"

#include <stdio.h>




void Vypis_text(char* text)
{
	for (int i = 0; text[i] != '\0'; i++)
	{
		printf("%c", text[i]);
	}

	
}
