//#define TEST  //Konštanta na aktivaciu testov

#ifdef TEST   // Spustenie testov pomocou vlastnej konštnaty
#include "Test.h"
#endif

#ifdef _DEBUG   // Spustenie testov pomocou vlastnej konštnaty (Visual)
#include "Test.h"
#endif


#include "Loteria.h"
#include "Defs.h"




int main()
{

	BOOL OK = TRUE;
#ifdef _DEBUG
	OK = Testuj();
#endif



	if (OK)
	{
		Tah(100, 5);
	}
	
	return 0;
}