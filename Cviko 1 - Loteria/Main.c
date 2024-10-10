//#define _DEBUG  //Konštanta na aktivaciu testov

#ifdef TEST   // Spustenie testov pomocou vlastnej konštnaty
#include "Test.h"
#endif

#ifdef _DEBUG   // Spustenie testov pomocou vlastnej konštnaty (Visual)
#include "Test.h"
#endif


#include "Loteria.h"
#include "Defs.h"




int main(int argc, char* argv[])
{

	BOOL OK = TRUE;
#ifdef _DEBUG
	OK = Testuj();
#endif



	if (OK)
	{
		Tah(100, 65);
	}
	
	return 0;
}